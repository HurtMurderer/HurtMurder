#pragma once
#include <iostream>
#include <fstream>
#include <SDL_image.h>
#include <SDL.h>
#include <SDL_main.h>
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2_image.lib")
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2.lib")
using namespace std;
class IncludeCode
{
public:
	int index;
	int inc = -1;
	virtual void run() {}
};
class GMDMechanismMainPart
{
public:
	SDL_Window *em_window ;
	SDL_Renderer *em_renderer;
	SDL_Surface *rendertarget ;
	SDL_AudioSpec *ac;
	SDL_AudioSpec *oc;
	Uint8 *abf;
	Uint32 *bfleng;
	void init()
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		//SDL_AudioInit("nhle_s");
		SDL_InitSubSystem(1);
		ac = SDL_LoadWAV_RW(SDL_RWFromFile("C:/HurtMurderGI/snd.wav", "rb"), 1, oc, &abf, bfleng);
		//SDL_OpenAudio(ac, oc);
		em_window = SDL_CreateWindow("GMD", 70, 70, 1024, 960, 0);
		em_renderer = SDL_CreateRenderer(em_window, 0, 0);
	}
};

class ENG_GameObject
{
public:
	//char* objvarschar[25]{ "gx","gy","gh","gw","minlvl","mxlvl",
		//"clickable", "minspr", "onrend", "vectoryng", "clicked",  "Render", "useimage", "gamez", "level", "indScript", "InscriptVar", "RenderX", "RenderY", "non" }; // 17 - 18 - 19
	//std::string texttorender = "none";
	/*
	"gx", "gy", "gh", "gw", "minlvl", "mxlvl", - 6
		"clickable", "minspr", "onrend", "vectoryng", "clicked", "Render",  - 12
		"useimage", "gamez", "level", "indScript", "InscriptVar", "RenderX", "RenderY", "non"*/	
	int objvars[25];
	SDL_Rect RenderRectableBack;
	SDL_Rect TextBox;
	//int vars[90];
	// VARS TO npi - fear, hp, terrifinity, currentnpiel, stats_fear( 4 - 50 ), events[51-90]   >:c
	// vars of the game's objects - 0 - fear, 1 - needs
	char toload[35][60];
	//char name[60];
	void rendrec()
	{
		RenderRectableBack.h = objvars[2];
		RenderRectableBack.w = objvars[3];
		//RenderRectableBack.x = objvars[17];
		//RenderRectableBack.y = objvars[18];
		RenderRectableBack.x = objvars[0];
		RenderRectableBack.y = objvars[1];
	}
};
class NewHellLegendaryEngine
{
public:

	IncludeCode* scripts[15];
	int scriptsinds[15];
	int scr = 0;
	int level = 1; int cl = 1;
	int Camera[2]{ 0,0 };
	int entind;
	SDL_Event MainEvent;
	SDL_KeyboardEvent PressedKey;
	int curlvl = 0;
	GMDMechanismMainPart mainvictim;
	char toload[5][45][60];
	char loadf[60][60];
	/*ENG_GameObject objects[60];*/
	bool ingame = true;
	//0-press, 1 - render, 2 - delay, 3 - vars[3], 4 - vars[4], 5  - zanobj, 6 - pressd , 7 - upd
	int vars[14];
	int *toldI;
	/* obects stuff */
	SDL_Rect rect;
	int objvars[15][30];
	/*
public:
	ENG_GameObject CRNB_EX( int GMX, int GMY, int GMZ, int FRx, int FRy, int g, int ml, int mxl)
	{	
		ENG_GameObject engbn;
		engbn.objvars[0] = GMX;
		engbn.objvars[1] = GMY;
		engbn.objvars[13] = GMZ;
		engbn.objvars[3] = FRx;
		engbn.objvars[2] = FRy;		
		engbn.objvars[11] = g;
		engbn.objvars[4] = ml;
		engbn.objvars[5] = mxl;
		return engbn;
	}*/
	void goLoadLF()
	{
		ifstream f("C:/HurtMurderGI/loadDB.txt");
		if (f.is_open())
		{
			
			for (int g = 0; g < 40; g++)
			{
				f.getline(loadf[g], 210, ';');
			}
		}
		f.close();
	}
	void goLoad()
	{
		goLoadLF();
		for (int g = 0; g < 40; g += 3)
		{
			load(g, loadf[g], loadf[g + 1], loadf[g + 2]);
		}
		//delete loadf;
		delete toldI;
		//free(loadf);
		toldI = nullptr;
	}
	void repeat()
	{
		mainvictim.init();
		goLoad();
	}
	int load(int a, char* loadf, char* loadf2, char* loadf3)
	{
		ifstream *file = new ifstream(loadf);
		ifstream *n = new ifstream(loadf2);
		ifstream *n2 = new ifstream(loadf3);
		toldI = (int*)malloc(25);
		if (file->is_open())
		{
			
			for (int g = 0; g < 19; g++)
			{	
				*file >> toldI[g];
			}
	 		//for (int oi = 0; oi < 7; oi++)
			//{
			//	objvars[a][oi] = toldI[oi];
				// 0 , 1 , 2 , 3 , 4 , 5 , 6 , 5 - индекс признака из файла
				// 0 , 1 , 13, 3 , 2, 11,  4,  5 - задействованные признаки объекта
				/*
		engbn.objvars[0] = GMX;
		engbn.objvars[1] = GMY;
		engbn.objvars[13] = GMZ;
		engbn.objvars[3] = FRx;
		engbn.objvars[2] = FRy;		
		engbn.objvars[11] = g;
		engbn.objvars[4] = ml;
		engbn.objvars[5] = mxl;*/

			//}
			try {
				objvars[a][0] = toldI[0];
				objvars[a][1] = toldI[1];
				objvars[a][13] = toldI[2];
				objvars[a][3] = toldI[3];
				objvars[a][2] = toldI[4];
				objvars[a][11] =toldI[5];
				objvars[a][4] = toldI[6];
				objvars[a][5] = toldI[5];
			}
			catch (exception e) {}
			//objvars[a][13] = toldI[2];
			//objvars[a][2] = toldI[4];
			//objvars[a][11] = toldI[5];
			//objvars[a][4] = toldI[6];
			//objects[a] = CRNB_EX(toldI[0], toldI[1], toldI[2], toldI[3], toldI[4], toldI[5], toldI[6], toldI[5]);			
		}
		if (n->is_open())
		{		
			for (int g = 0; g < 45; g++)
				//n->getline(objects[a].toload[g], 210, ';');
				n->getline(toload[a][g], 210, ';');
		}
		if (n2->is_open())
		{				
			*n2 >> objvars[a][15];
			scriptsinds[scr] = objvars[a][15];
			scr++;
		}
		file->close();
		n->close();
		n2->close();	
		delete file;
		delete n;	
		delete n2;
		file = nullptr;
		n = nullptr;
		n2 = nullptr;			

		return 1;
	}
	void OpenTheDemonSoul()
	{
		repeat();
	}
};
NewHellLegendaryEngine NLHE;