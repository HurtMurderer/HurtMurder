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
	void run()
	{

	}
};
class GMDMechanismMainPart
{
public:
	SDL_Window *em_window = nullptr;
	SDL_Renderer *em_renderer;
	SDL_Surface *rendertarget = nullptr;
	void init()
	{
		SDL_Init(SDL_INIT_EVERYTHING);
		em_window = SDL_CreateWindow("GMD", 70, 70, 1024, 960, 0);
		em_renderer = SDL_CreateRenderer(em_window, 1, SDL_RENDERER_ACCELERATED);
	}
};
class ENG_GameObject
{
public:
	char* objvarschar[25]{ "", "gx","gy","gh","gw","minlvl","mxlvl",
		"clickable", "minspr", "onrend", "vectoryng", "clicked",  "Render", "useimage", "gamez", "level", "indScript", "InscriptVar", "RenderX", "RenderY", "none" }; // 17 - 18 - 19
	int objvars[25];
	SDL_Rect RenderRectableBack;
	SDL_Rect TextBox;
	int vars[90];
	// VARS TO npi - fear, hp, terrifinity, currentnpiel, stats_fear( 4 - 50 ), events[51-90]   >:c
	// vars of the game's objects - 0 - fear, 1 - needs
	char toload[60][60];
	char name[60];
	void rendrec()
	{
		RenderRectableBack.h = objvars[2];
		RenderRectableBack.w = objvars[3];
		//RenderRectableBack.x = objvars[17];
		//RenderRectableBack.y = objvars[18];
		RenderRectableBack.x = objvars[0];
		RenderRectableBack.y = objvars[1];
		if (objvarschar[19] != "none")
		{
			int j = objvars[2] + objvars[18];
			int l = objvars[3] + objvars[17];
			TextBox.x = l;
			TextBox.y = j;
			TextBox.w = 1024 - l;
			TextBox.h = 960 - j;
		}
	}
};
class NewHellLegendaryEngine
{
public:
	IncludeCode scripts[15];
	int level = 1; int cl = 1;
	int Camera[2]{ 0,0 };
	char* types[15];
	int		entind;
	SDL_Event MainEvent;
	SDL_KeyboardEvent PressedKey;
	int curlvl = 0;
	GMDMechanismMainPart mainvictim;
	char loadf[60][60];
	ENG_GameObject objects[60]{};
	bool ingame = true;
	//0-press, 1 - render, 2 - delay, 3 - vars[3], 4 - vars[4], 5  - zanobj, 6 - pressd , 7 - upd
	int vars[14];
public:
	ENG_GameObject CRNB_EX( int GMX, int GMY, int GMZ, int FRx, int FRy, int g, int ml, int mxl)
	{
		ENG_GameObject engbn;
		engbn.objvars[0] = GMX;
		engbn.objvars[1] = GMY;
		engbn.objvars[3] = FRx;
		engbn.objvars[2] = FRy;
		engbn.objvars[14] = GMZ;
		engbn.objvars[12] = g;
		engbn.objvars[5] = ml;
		engbn.objvars[6] = mxl;
		return engbn;
	}
	void goLoadLF()
	{
		ifstream f("C:/HurtMurderGI/loadDB.txt");
		if (f.is_open())
		{
			for (int g = 0; g < 15; g++)
			{
				f.getline(loadf[g], 150, ';');
			}
		}
		f.close();
	}
	void goLoad()
	{
		goLoadLF();
		for (int g = 0; g < 60; g += 3)
		{
			load(g, loadf[g], loadf[g + 1], loadf[g + 2]);
		}
	}
	void repeat()
	{
		mainvictim.init();
		goLoad();
	}
	int load(int a, char* loadf, char* loadf2, char* loadf3)
	{
		
		ifstream file(loadf);
		ifstream n(loadf2);
		ifstream n2(loadf3);
		int toldI[60];
		if (file.is_open())
		{
			
			for (int g = 0; g < 19; g++)
			{
				
				file >> toldI[g];
			}
			objects[a] = CRNB_EX(toldI[0], toldI[1], toldI[13], toldI[3], toldI[2], toldI[12], toldI[4], toldI[5]);
			//objects[a] = CRNB_EX("", toldI[0], toldI[1], toldI[2], toldI[3], toldI[4], toldI[5], "", toldI[6], toldI[7], toldI[8], toldI[9], toldI[10], toldI[11], toldI[12], toldI[13], toldI[14]);
			objects[a].objvars[17] = toldI[17];
			objects[a].objvars[18] = toldI[18];

		}
		if (n.is_open())
		{
			n.getline(objects[a].toload[0], 210, ';');
		}
		if (n2.is_open())
		{		
			n2 >> objects[a].objvars[15];
		}
		file.close();
		n.close();
		n2.close();
		return 1;
	}
	void OpenTheDemonSoul()
	{
		repeat();
	}
};
NewHellLegendaryEngine NLHE;