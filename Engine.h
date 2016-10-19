
/*

GMD Engine

Stable alpha - v.0.0.1
-IN DEVELOP-

*/
#pragma once
#include <iostream>;
#include <random>;
#include <fstream>;
//#include <string>;

#include <SDL.h>;
#include <SDL_main.h>;
#include <SDL_image.h>;
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2_image.lib")
//#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2main.lib")
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2.lib")

using namespace std;

class GMDMechanismMainPart
{
public:
	
	//ScriptCompiler comp;
	int tth1ftimer = 13;
	int tth1stade = 0;
	int tth1checked = 0;
	int tth1r4g = 0;
	random_device tth1r4gd;
	SDL_Window *em_window = nullptr;
	SDL_Renderer *em_renderer;
	SDL_Surface *rendertarget = nullptr;
	SDL_Texture *torendimg = nullptr;
	

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
	char* objvarschar[25]{"gx","gy","gh","gw","minlvl","mxlvl", 
	"clickable", "minspr", "onrend", "vectoryng", "clicked", "Render", "useimage", "gamez", "level"};
	int objvars[25];
	string loadfile = "standart";											    
/*
int minlv[l;
int mxlv[l;
int clicke[d = 0;
int clickabl[e = 0;
int stackin[g = 0;
int minsp[r;
int onren[d = 1;

int vectoring = -1;

int inmove = 0;*/
SDL_Rect RenderRectableBack;
SDL_Rect Spec_renderrect;

int physics = 1;
int update = 1;

	
	

char* indefFvars[35];
char* varsC[15]; //vars - 0 = varsC[0] ( in think - name )
int vars[35];
// vars of the game - 0 - 19 ~~. later the more opt. 20 - targx, 21 - targy

// vars of the game's objects - 0 - fear, 1 - needs
char toload[60][60];
/*
int maxsprites;
int GameZ = 0;

int GameX = 0;
int GameY = 0;
int objvars[3] = 0;
int Render = 0;
int objvars[2] = 0;
int LocateX = 0;
int LocateY = 0;
int level;
int objvars[13] = 0;*/
char name[60] ;
char* voidindex = "standart";


char* interactScript[150];
char* upScript[150];
int interactIntes[150];
int upScriptIntes[150];
SDL_Texture  *images[999]{};

int twvw[15];
string twvwI[15];

int gInd(string g2)
{
int t = 0;
for (int g = 0; g < 16; g++)
{
if (twvwI[g] == g2)
{
	t = g;
	break;
}
}
return t;
}


void init(int gmx, int gmy, int gmz, int r, int gmw,
int gmh, int useim, char* n, char toimg[50])
{
objvars[0] = gmx;
objvars[1] = gmy;
objvars[14]= gmz;
objvars[12] = r;
objvars[3] = gmw;
objvars[2] = gmh;
objvars[13] = useim;
//name = n;
voidindex = n;
//toload[useim] = toimg;


}
void rendrec()
{
RenderRectableBack.h = objvars[2];
RenderRectableBack.w = objvars[3];
RenderRectableBack.x = objvars[0];
RenderRectableBack.y = objvars[1];
}








};



class GMDMechanism
{
public:
int level = 1;


//map lev_map;
//zone mapz[15]{};


char* types[15];
int zx[15];
int zy[15];
int ex[15];
int ey[15];
int entind;


void CRNB(char* nam, char* vdind, int GMX, int GMY, int GMZ, int FRx, int FRy, int spri, char sprl[50], int onr, int ms, int mxs, int g, int st, int st2, int ml, int mxl)
{
ENG_GameObject engbn;
engbn.voidindex = vdind;
engbn.objvars[0] = GMX;
engbn.objvars[1] = GMY;
engbn.objvars[3] = FRx;
engbn.objvars[2] = FRy;
engbn.objvars[14] = GMZ;
engbn.objvars[12] = g;
engbn.objvars[9] = onr;
engbn.objvars[7] = st2;

//engbn.toload[spri] = sprl;
//engbn.minspr = ms;
engbn.objvars[5] = ml;
engbn.objvars[6] = mxl;
//engbn.name = nam;
//engbn.maxsprites = mxs;
//engbn.stacking = st;
engbn.rendrec();////90
for (int t = 0; t < 20; t++)
{
//	if (t < zanobj)
//{
if (objects[t].objvars[6] < level)
{


	objects[t] = engbn;
	break;

}
//	}
//	else {
//		objects[t] = engbn;
//	}

}


}






ENG_GameObject CRNB_EX(char* vdind, int GMX, int GMY, int GMZ, int FRx, int FRy, int spri, char* sprl, int onr, int ms, int mxs, int g, int st, int st2, int lv, int ml, int mxl)
{
ENG_GameObject engbn;
engbn.voidindex = vdind;
engbn.objvars[0] = GMX;
engbn.objvars[1] = GMY;
engbn.objvars[3] = FRx;
engbn.objvars[2] = FRy;
engbn.objvars[14] = GMZ;
engbn.objvars[12] = g;
engbn.objvars[9] = onr;
engbn.objvars[7] = st2;
engbn.objvars[15]= lv;
//engbn.toload[spri] = sprl;
//engbn.minspr = ms;
engbn.objvars[5] = ml;
engbn.objvars[6] = mxl;
//engbn.maxsprites = mxs;
//engbn.stacking = st;


return engbn;
}
SDL_Event MainEvent;
SDL_KeyboardEvent PressedKey;
//ScriptCompiler comp;

int curlvl = 0;


GMDMechanismMainPart mainvictim;
char loadf[60][60];
ENG_GameObject objects[60]{};
bool ingame = true;


// OLD BAD CODE's UNDER ME! GETTA HELL OUTA HERE!!! ( 0.0.1 )
// ------Quarantine zone-------
// KEEP OUT
// KEEPED BY [
/*
int p[ress = 0;
int r[ender = 0;
int d[elay = 95;
int f[isex = 0;
int G[AMELEVEL = 0;
int A[llToRender = 1;
int z[anobj = 0;
int b[sobj = 0;
*/
// KEEPED BY [
// KEEP OUT
// -------Quarantine zone-------
//0-press, 1 - render, 2 - delay, 3 - vars[3], 4 - vars[4], 5  - zanobj,
int vars[14];
char * TWOwaysVars[150];
int GetInd(char* i)
{
for (int g = 0; g < 151; g++)
{
if (TWOwaysVars[g] == i)
{
	return g;
	break;
}
}
}
void initobjects()
{
	objects[vars[5]] = CRNB_EX("gf",0,0,1,60,60,0,"C:/Texs/backgr.png", 8, 0, 1, 5, 0,0,0,0,5);



}
void orr()
{

}

void getr(int l)
{
if (l == 1)	
{

vars[4] = 1;

}
}

void goLoadLF()
{
	ifstream f("C:/HurtMurderGI/loadDB.txt");
	//f.open("C:/HurtMurderGI/loadDB.txt");
	if (f.is_open())
	{
		

		for (int g = 0; g < 5; g++)
		{
			f.getline(loadf[g], 150, ';');
			//SDL_ShowSimpleMessageBox(-1, "gf", loadf[g], mainvictim.em_window);
			
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


void Void_Beginer()
{
mainvictim.init();
//initobjects();			
goLoad();
gettingStart();
}
/*
// update void - uv
int AIupdate()																							  s
{
for (int g = 0; g < 16; g++)
{
	if (vars[20] <= 0)
	{
		if (us_lvl.levs[us_lvl.curlvl].objects[meet[g]].explore[us_lvl.levs[us_lvl.curlvl].IndefOfZone(us_lvl.levs[us_lvl.curlvl].objects[meet[g]].objvars[0], us_lvl.levs[us_lvl.curlvl].objects[meet[g]].objvars[1])] <= 3)
		{
			us_lvl.levs[us_lvl.curlvl].objects[meet[g]].explore[us_lvl.levs[us_lvl.curlvl].IndefOfZone(us_lvl.levs[us_lvl.curlvl].objects[meet[g]].objvars[0], us_lvl.levs[us_lvl.curlvl].objects[meet[g]].objvars[1])] += 0.001;
		}
	}
	//inter();
	us_lvl.levs[us_lvl.curlvl].grCollis(g);

	us_lvl.levs[us_lvl.curlvl].objects[meet[g]].move();
}

}
*/



void gettingStart()
{
// all to two ways codes
int cl = 1;
int PPx = 999;
int PPind = 0;
int PPy = 999;
int rendZ = 0;
int opat;
int opat2;
int clicked = 0;
int ck = 0;
int ck2 = 0;
int CNP = 0;
int PPc = 0;
int ing = 0;
SDL_Surface *joer = nullptr;
int t;
int t2;
SDL_Texture *img = nullptr;
int mcl = 3;
int renderGet = 1;



while (ing == 0)
{

// Migl adaptate code
//AIupdate();
//


if (SDL_PollEvent(&MainEvent) == 1)
{
	if (MainEvent.type == SDL_QUIT)
	{
		SDL_DestroyRenderer(mainvictim.em_renderer);
		SDL_DestroyWindow(mainvictim.em_window);
		ing = 1;
	}
	if (MainEvent.type == SDL_MOUSEBUTTONDOWN)
	{


		if (MainEvent.button.button == SDL_BUTTON_LEFT)
		{
			clicked = 1;

		}

	}
}
if (clicked == 1)
{
	clicked = 0;

	for (int ind = 0; ind < 20; ind++)
	{
		if (objects[ind].objvars[5] <= level)
		{
			if (objects[ind].objvars[6] >= level)
			{
				{
					if (MainEvent.button.x > objects[ind].objvars[0])
					{

						if (MainEvent.button.y > objects[ind].objvars[1])
						{

							t = objects[ind].objvars[1] + objects[ind].objvars[2] + 140;

							t2 = objects[ind].objvars[0] + objects[ind].objvars[3] + 140;
							if (MainEvent.button.y < t)
							{
								if (MainEvent.button.x < t2)
								{
									objects[ind].objvars[11] = 1;
								}
							}
						}
					}
				}
			}
		}
	}

}


if (vars[4] == 2)
{
	for (int ind = 0; ind < 20; ind++)
	{
		//if (objects[ind].voidindex != "wallp")
		//objects[ind].objvars[12] += 2;
	}
}





for (int ind = 0; ind < 20; ind++)
{
	if (level != cl)
	{









		if (!(objects[ind].objvars[6] < level))
		{
			objects[ind].objvars[12] = objects[ind].objvars[9];



		}

	}
	if (ind == 19)
	{
		cl = level;
	}

}
for (int ind = 0; ind < 20; ind++)
{
	SDL_FreeSurface(joer);
	SDL_DestroyTexture(img);
	joer = nullptr;
	img = nullptr;


	{



		objects[ind].rendrec();
		if (objects[ind].objvars[14] == vars[3])
		{
			objects[ind].rendrec();


			if (level >= objects[ind].objvars[5])
			{
				if (level <= objects[ind].objvars[6])
				{
					//AllToFire();


				    //if (renderGet >  (objects[ind].RenderRectableBack.x + objects[ind].RenderRectableBack.y) && objects[ind].objvars[12] > 0)
					{






						if (objects[ind].toload[objects[ind].objvars[13]] != nullptr)
						{





							joer = IMG_Load(objects[ind].toload[objects[ind].objvars[13]]);


						}



						if (joer != nullptr)
						{


							{

								img = SDL_CreateTextureFromSurface(mainvictim.em_renderer, joer);
								

							}

						}

						if (img != nullptr)
						{


							{




								{




									if (SDL_RenderCopy(mainvictim.em_renderer, img,/* &RenderRectable*/ NULL, &objects[ind].RenderRectableBack) == 0)
									{
										renderGet = (objects[ind].RenderRectableBack.x + objects[ind].RenderRectableBack.y);
										SDL_RenderPresent(mainvictim.em_renderer);


										//objects[ind].objvars[12]--;


										vars[1] = 1;

										//rendZ = objects[ind].GameZ;



									}



							}






							}






						}




					}

				}
			}


			

		}












		  













	}




	//if (vars[1] == 1)
	{





		//SDL_RenderPresent(mainvictim.em_renderer);



		//vars[1]= 0;




	}


	if (vars[3] == 20)
	{
		renderGet = 15;
		vars[3] = 0;


	}
	else {
		vars[3]++;
	}
}



}
}
int meet[15];
int objcts[50];
// ᖧ༐ FuckedScript ༐ᖨ Combiner
//v. 0.1 in development
//int args[15]{ inst(0,0) };
//char* comms[15]{ "getMat","getMatS","getMatD","getMatU","getPlayer", "inst" };
void AllToFire()
{

for (int g = 0; g < 160; g++)
{
	if (objects[g].upScript[0] == "inst")
	{
		inst(0, g);
	}
	if (objects[g].upScript[0] == "instM")
	{
		inst(1, g);
	}
	if (objects[g].upScript[0] == "instH")
	{
		inst(2, g);
	}
//compileup(g);
}
}
void compileup(int aut)
{					  
for (int g = 0; g < 15; g++)
{					  
if (objects[aut].upScript[g] != "none")
{
	check(aut, g);	  
}
}
}
//replace pls :c
int IndefOfZone(int ux, int uy)
{
int u2;
for (int u = 0; u < 16; u++)
{
if (zx[u] < ux )
{			
	if (uy > zy[u])
	{
	}
	if (ux < ex[u])
	{
		if (uy < ey[u])
		{
			u2 = u;
		}
	}
}
}
return u2;
delete &u2;
}
int feel(int aut, int g)
{
int res = 0;
if (objects[aut].interactScript[g] == "if" && vars[objects[aut].interactIntes[g + 1]] == objects[aut].interactIntes[g + 2])
{
res = 1;
}
return res;
}
int load(int a, char* loadf, char* loadf2, char* loadf3)
{
	ifstream file(loadf);
	ifstream n(loadf2);
	ifstream n2(loadf3);
	int toldI[60];
	if (file.is_open())
	{
		for (int g = 0; g < 16; g++)
		{

			file >> toldI[g];
			//objects[a].objvars[g] = toldI[g];

		}
		objects[a] = CRNB_EX("", toldI[0], toldI[1], toldI[2], toldI[3], toldI[4], toldI[5], "", toldI[6], toldI[7], toldI[8], toldI[9], toldI[10], toldI[11], toldI[12], toldI[13], toldI[14]);
	}
	//	SDL_ShowSimpleMessageBox(0, told[0], "", mainvictim.em_window);
	if (n.is_open())
	{
		//for (int g = 0; g < 15; g ++)
		n.getline(objects[a].toload[0], 190, ';');			 	
	}														 
	if (n2.is_open())
	{
				n2.getline(objects[a].name, 190, ';');
															 
	}														 	
	file.close();
	n.close();
	n2.close();												 
return 1;													 
}
void check(int aut, int g)
{
int ifer = 0;
try {
    
	/*
	if (objects[aut].upScript[g] == "if")
	{
		ifer = 1;
		if (feel(aut, g) == 1)
		{
			ifer++;
		}
	}				
	if (ifer != 1)
	{				
		if (objects[aut].upScript[g + 2] == "set")
		{
			
			if (objects[aut].upScript[g + 1] == "sprite")
			{
			if (objects[aut].upScript[g + 2] == "+")
			{
			objects[aut].objvars[13]++;

			}
			else {
			objects[aut].objvars[13] = objects[aut].upScript[g+2];
			}
			}
			if (getC(objects[aut].upScript[g + 3]) == -1)
			{

				objects[aut].twvw[objects[aut].upScriptIntes[g + ifer + 1]] = objects[aut].upScriptIntes[g + ifer + 2];
			}
			else {
				objects[aut].twvw[objects[aut].upScriptIntes[g + ifer + 1]] = getVarUC(aut, g + ifer + 1);



			}

		}

	}		 */
}
catch (exception jpe)
{	
}
}
int inst(int g, int aut)
{
rolethink(/*objects[aut].upScriptIntes[g]*/g, aut);				 return 0;
}
// t - t2
int getMat(int t, int  t2) { int u = t - t2;		return u;		delete &u; }
// (-_-)
int getMatS(int t, int  t2) { int u = t + t2;		return u;		delete &u; }
// t / t2
int getMatD(int t, int t2) { return t / t2; }
// t * t2
int getMatU(int t, int t2) { return t * t2; }


int getPlayer(int x, int y)
{
int t = 0;
for (int g = 0; g < 16; g++)
{
if (objects[meet[g]].objvars[0] == x && objects[meet[g]].objvars[1] == y)
	t = g;


}
return t;
}

int ADAPT_GOBJ(char* j)
{
for (int g = 0; g++; g < 151)
{
if (objects[g].name == j) { return g; break; }
}
//return -1;
}

int ADAPT_OtherYouEyes(int indef)
{
int fcFear = 0;
for (int it = 0; it < 16; it++)
{

if (IndefOfZone(objects[meet[it]].objvars[0], objects[meet[it]].objvars[1]) == IndefOfZone(objects[meet[indef]].objvars[0], objects[meet[it]].objvars[1]))
{
	fcFear = getMatU(2, getMatS(getMatS(10, objects[meet[it]].vars[14]), objects[meet[it]].vars[18]));

}
}
return fcFear;
}

int ADAPT_AddSusp(int indef)
{
for (int it = 0; it < 16; it++)
{
if (IndefOfZone(objects[meet[it]].objvars[0], objects[meet[it]].objvars[1]) == IndefOfZone(objects[meet[indef]].objvars[0], objects[meet[indef]].objvars[1]))

	objects[meet[it]].vars[18] = getMatS(objects[meet[it]].vars[14], getMatD(objects[meet[it]].vars[12], 5));
}								return 0;
}

int physohology(int indef)
{
ADAPT_AddSusp(indef);


int fear = getMatD(getMatS(objects[meet[indef]].vars[18],
ADAPT_OtherYouEyes(indef)), objects[meet[indef]].vars[21]);


objects[meet[indef]].vars[2] = fear;


return 0;
}

int playerinter(int indef)
{
/*
int mode = 0;
for (int g = 0; g < 16; g++)
{
if (objects[meet[indef]].vars[21] > 0)
{
if (getMatS(objects[meet[g]].vars[18], objects[meet[indef]].vars[2]) > 140)
{
if (objects[meet[indef]].varsC[0] == "")
objects[meet[indef]].varsC[0] = "atack";
objects[meet[indef]].vars[20] = objects[meet[g]].objvars[0];
objects[meet[indef]].vars[21] = objects[meet[g]].objvars[1];
}
}
else {
if (objects[meet[indef]].fearforobjects[getIND(objects[meet[indef]].varsC[0], indef)] < 40)
{
mode = 1;
}
else {
if (objects[meet[indef]].fearforobjects[getIND(objects[meet[indef]].varsC[0], indef)] < 60)
{
mode = 2;
}
else {
mode = 3;
}
}
/*
Replace to look in fearforobjects
if (varsC[0] == "atack" || varsC[0] == "run" || varsC[0] == "follow" || varsC[0] == "seek")
{


if (varsC[0] == "atack" || varsC[0] == "run")
{
if (peopleViews(objindef) > 2)
{
mode = 3;
}
else {
mode = 2;

}
}
}
else {
mode = 0;
}
objects[meet[indef]].vars[2] = getMatU(mode, peopleViews(indef));
}

}
delete &mode;*/
	return 0;
}


//BystenderRolePlay mind core code.... BITCH!!!
int byst(int indef)
{
//pl_int(indef);
physohology(indef);

//playerinter(indef); in thinking abou this...

/*
if (dist(objects[meet[indef]].objvars[0], objects[meet[indef]].vars[20]) < 5 && dist(objects[meet[indef]].objvars[1], objects[meet[indef]].vars[21]) < 5)
{
if (objects[meet[indef]].varsC[0] == "help")
{

AnimateInter(1, meet[getPlayer(objects[meet[indef]].vars[20], objects[meet[indef]].vars[21])].objvars[0], meet[getPlayer(objects[meet[indef]].vars[20], objects[meet[indef]].vars[21])].objvars[1], indef);
}
Interact(indef);
}*/



inter(indef);
return 0;

}

/*
int isZ(int x, int y, int vec, char* type, int dis)
{
int f = 0;
int wh = dis;
for (int t = 0; t < 16; t++)
{
if (type == "x")
{

	if (vec < 0)
	{
		if (zx[t\> wh && mapz[t].x < x)
		{
			f = t;
		}
	}
	else {
		if (mapz[t].x < wh && mapz[t].x > x)
		{
			f = t;
		}f
	}
}
else {
	if (vec < 0)
	{

		if (mapz[t].y > wh && mapz[t].y < y)
		{
			f = t;
		}
	}
	else {
		if (mapz[t].y < wh && mapz[t].y > y)
		{
			f = t;
		}
	}
}
}
return f;
delete &f;
}
	
	
*/
int gObj(int x)
{
int u = 0;
for (int g = 0; g < 171; g++)
{
if (objects[g].objvars[0] == x)
	u = g;
}
return u;
delete &u;
}

int GetZone(char * t)
{
int res = 0;
for (int g = 0; g < 16; g++)
{
if (types[g] == t)
{
	res = g;
}
}
return res;
delete &res;
}
// Object's interact OI oi
int Interact(int indef)
{
if (dist(objects[meet[indef]].objvars[0], objects[meet[indef]].vars[20]) < 15)
{
if (dist(objects[meet[indef]].objvars[1], objects[meet[indef]].vars[21]) < 15)
{
	for (int u = 0; u < 160; u++)
	{
		if (objects[u].voidindex == objects[meet[indef]].varsC[0] && dist(objects[u].objvars[0], objects[meet[indef]].objvars[0]))
			//compile(u);
		AnimateInter(20, objects[u].objvars[0], objects[u].objvars[1], indef);
	}
}
}
}
int getIND(char* i, int indef)
{
/*
int retur = -1;
for (int g = 0; g < 16; g++)
{
if (i == objects[meet[indef]].TWSvarsIndef[g])
retur = g;
break;
}
return retur;
delete &retur;
*/
}
// Mind varsC[0]
int Do(char * ind, int indef, int ostindef)
{
int res = -1;
int useI = getIND(ind, indef);
if (useI > -1)
{
if (getMatS(
	getMatS(objects[meet[indef]].vars[4], objects[meet[indef]].vars[4] * 10), getMatS(objects[meet[indef]].vars[4], objects[meet[indef]].vars[4] * 10) /
	objects[meet[indef]].vars[2] * 100) > objects[objcts[ostindef]].vars[0])
{
	res = 1;
}
}
return res;
}
// Distance check code
int dist(int f, int f2)
{
if (f > f2)
{
return f - f2;
}
else {
return f2 - f;
}
}


int murd(int indef)
{
//pl_int(indef);

physohology(indef);


//int mode = 0; // - standart mode ( neutraly addiction , 1 - seekness , 2 - fuck that shit , 3 - goddamn fuckin world bitch



playerinter(indef);







inter(indef);


return 0;
}


void AnimateInter(int ev, int x, int y, int indef)
{

if (objects[meet[indef]].objvars[1] == y || dist(objects[meet[indef]].objvars[1], y) <= 2)
{
if (objects[meet[indef]].objvars[0] > x)
{
	objects[getIND("interOBJ", indef)].objvars[13] = getMatS(ev, 2);
}
if (objects[meet[indef]].objvars[0] <  x)
{

	objects[getIND("interOBJ", indef)].objvars[13] = getMatS(ev, 6);
}

}
else {
if (objects[meet[indef]].objvars[1] < y)
{
	if (dist(objects[meet[indef]].objvars[1], y) < 3)
	{
		if (dist(objects[meet[indef]].objvars[0], x) < 4) // 14 8
		{
			if (objects[meet[indef]].objvars[0] > x)
			{
				objects[getIND("interObj", indef)].objvars[13] = getMatS(ev, 5);

			}
			else {
				objects[getIND("interObj", indef)].objvars[13] = getMatS(ev, 3);
			}
		}
	}
}
else {
	if (dist(objects[meet[indef]].objvars[1], y) < 3)
	{
		if (dist(objects[meet[indef]].objvars[0], x) < 4) // 14 8
		{
			if (objects[meet[indef]].objvars[0] > x)
			{
				objects[getIND("interObj", indef)].objvars[13] = getMatS(ev, 7);

			}
			else {
				objects[getIND("interObj", indef)].objvars[13] = getMatS(ev, 1);
			}
		}
	}

}
}
}
/*
int isObjFTM(int x, int y, int indef)
{
int isit = 0;
for (int h = 0; h < 161; h++)
{
// unde ques
if (levs[us_lvl.curlvl].objects[meet[indef]].objvars[0] < objects[h].objvars[0] && x > us_lvl.levs[us_lvl.curlvl].getMatS(objects[h].objvars[0], objects[h].objvars[3]) | us_lvl.levs[us_lvl.curlvl].objects[meet[indef]].objvars[0] > us_lvl.levs[us_lvl.curlvl].getMatS(objects[h].objvars[0], objects[h].objvars[3]) && x < objects[h].objvars[0])
{

if (us_lvl.levs[us_lvl.curlvl].dist(y, us_lvl.levs[us_lvl.curlvl].getMatS(objects[h].objvars[1], objects[h].objvars[2])) < objects[h].objvars[2] && us_lvl.levs[us_lvl.curlvl].dist(us_lvl.levs[us_lvl.curlvl].objects[meet[indef]].objvars[1], us_lvl.levs[us_lvl.curlvl].getMatS(objects[h].objvars[1], objects[h].objvars[2])) < objects[h].objvars[2])
{
isit++;
}


}

}
return isit;
}*/

// object interact's code
int inter(int indef)
{
if (objects[meet[indef]].varsC[0] == "" || objects[meet[indef]].vars[2] > 100)
{
int distanceg = 150;
int h = -1;
for (int g = 0; g < 61; g++)
{
	if (objects[g].voidindex != "none")
	{
		if (objects[meet[indef]].vars[15] >= objects[objcts[g]].vars[1] && objects[meet[indef]].vars[2] >  objects[objcts[g]].vars[0] /*&& objects[meet[indef]].explore[IndefOfZone(objects[g].objvars[0], objects[g].objvars[1])] >= 3*/)
		{

			int u = 0;
			if (objects[meet[indef]].objvars[0] > objects[g].objvars[0])
			{
				u += getMat(objects[meet[indef]].objvars[0], objects[g].objvars[0]);

			}
			else {
				u += getMat(objects[g].objvars[0], objects[meet[indef]].objvars[0]);
			}
			if (objects[meet[indef]].objvars[1] > objects[g].objvars[1])
			{
				u += getMat(objects[meet[indef]].objvars[1], objects[g].objvars[1]);

			}
			else {
				u += getMat(objects[g].objvars[1], objects[meet[indef]].objvars[1]);
			}
			if (u < distanceg)
			{

				h = g;
				distanceg = u;
			}
		}
	}

}

objects[meet[indef]].vars[20] = objects[h].objvars[0];
objects[meet[indef]].vars[21] = objects[h].objvars[1];
objects[meet[indef]].varsC[0] = objects[h].voidindex;
}

return 0;
}

//player's interact -- under the quarantine
int pl_int(int indef)
{
for (int g = 0; g < 16; g++)
{
if (GetVisible(objects[meet[g]].objvars[0], objects[meet[g]].objvars[1], indef) > 0)
{
	int fer = getMat(objects[meet[g]].vars[18], 15);
	if (objects[meet[indef]].vars[2] < fer)
	{
		objects[meet[indef]].vars[2] = fer;
	}
	if (objects[meet[g]].vars[0] > 20)
	{
		objects[meet[g]].vars[18] = 30;
		if (getMatD(objects[meet[indef]].vars[4], objects[meet[indef]].vars[2]) < getMatU(objects[meet[indef]].vars[4], 4))
		{
			objects[meet[indef]].varsC[0] = "help";
			objects[meet[indef]].vars[20] = objects[meet[g]].objvars[0];
			objects[meet[indef]].vars[21] = objects[meet[g]].objvars[1];
		}

	}

}
if (dist(objects[meet[g]].objvars[0], objects[meet[indef]].objvars[0]) < 15)
{
	if (dist(objects[meet[g]].objvars[1], objects[meet[indef]].objvars[1]) < 15)
	{
		if (objects[meet[g]].vars[14] > 0)
		{
			if (getMatS(objects[meet[g]].vars[18], getMatU(dist(objects[meet[g]].objvars[1], objects[meet[indef]].objvars[1]), 2) > objects[meet[g]].vars[18]))
				objects[meet[g]].vars[18] = getMatS(objects[meet[g]].vars[18], getMatU(dist(objects[meet[g]].objvars[1], objects[meet[indef]].objvars[1]), 2));
		}

	}
}
}
}


int GetVisible(int x, int y, int indef)
{//14
int vis = 0;
int cons = 0;

for (int f = 0; f < 11; f++)
{
if (objects[meet[f]].objvars[0] == x)
{
	cons = getMatU(getMatD(objects[meet[f]].vars[2], objects[meet[f]].vars[4]), objects[meet[f]].vars[19]);
	break;
}
}
if (IndefOfZone(x, y) == IndefOfZone(objects[meet[indef]].objvars[0], objects[meet[indef]].objvars[1]))
{
cons += /*getMatU(isObjFTM(x, y, indef), 2) FIX! THIS! SHIT! */ 0;
int w;
int visib = objects[meet[indef]].vars[1] / objects[meet[indef]].vars[0];
visib *= objects[meet[indef]].vars[4];
cons += dist(objects[meet[indef]].objvars[0], x);
cons += dist(objects[meet[indef]].objvars[1], y);
if (cons < visib)
{

	vis = 1;
}
}

return vis;
delete &vis;
}


int getPLayer(int x, int y)
{
for (int g = 0; g < 16; g++)
{
if (objects[meet[g]].objvars[0] == x && objects[meet[g]].objvars[1])
{
	return g;
	break;
}

}
}
int isObject(int x, int y, int vec, char* type, int dis)
{
int f = 0;
int wh = dis;
for (int t = 0; t < 171; t++)
{
if (type == "x")
{

	if (vec < 0)
	{
		if (objects[t].objvars[0] > wh && objects[t].objvars[0] < x)
		{
			f = t;
		}
	}
	else {
		if (objects[t].objvars[0] < wh && objects[t].objvars[0] > x)
		{
			f = t;
		}
	}
}
else {
	if (vec < 0)
	{

		if (objects[t].objvars[1] > wh && objects[t].objvars[1] < y)
		{
			f = t;
		}
	}
	else {
		if (objects[t].objvars[1] < wh && objects[t].objvars[1] > y)
		{
			f = t;
		}
	}
}
}
return f;
delete &f;
}
int grCollis(int ind)
{
// optimize that shit
int rmindis;
int u;
int lmi = 0;
int l;
int t = isObject(objects[meet[ind]].objvars[0], objects[meet[ind]].objvars[1], 1, "x", 5);
if (!(t > 0))
{
t = isObject(objects[meet[ind]].objvars[0], objects[meet[ind]].objvars[1], -1, "x", 5);
lmi = 1;
}
if (t > 0)
{
if (!(isObject(objects[meet[ind]].objvars[0], objects[meet[ind]].objvars[1], -1, "y", getMat(getMat(objects[meet[ind]].objvars[1], objects[meet[t]].objvars[1]), 5))))
{
	if (t == 0)
	{

		objects[meet[ind]].vars[20] = objects[t].objvars[0] - 5;

		objects[meet[ind]].vars[21] = objects[t].objvars[1] - 5;
	}
	else {

		objects[meet[ind]].vars[20] = objects[t].objvars[0] + 5;

		objects[meet[ind]].vars[21] = objects[t].objvars[1] - 5;

	}
}
else {

	if (!(isObject(objects[meet[ind]].objvars[0], objects[meet[ind]].objvars[1], -1, "y", getMatS(getMat(objects[meet[ind]].objvars[1], objects[meet[t]].objvars[1]), 5))))
	{
		if (t == 0)
		{

			objects[meet[ind]].vars[20] = objects[t].objvars[0] - 5;

			objects[meet[ind]].vars[21] = objects[t].objvars[1] - 5;
		}
		else {

			objects[meet[ind]].vars[20] = objects[t].objvars[0] + 5;

			objects[meet[ind]].vars[21] = objects[t].objvars[1] - 5;

		}
	}
}
}

//for (int t = 0; t < 171; t++)
//{
/*
rmindis = objects[t].objvars[0] + objects[t].objvars[3] + 10;
u = objects[t].objvars[0] + objects[t].objvars[3];
lmi = objects[t].objvars[0] - 5;
l = objects[t].objvars[1] + objects[t].objvars[2] + 10;
if (us_lvl.IndefOfZone(objects[t].objvars[0], objects[t].objvars[1]) == us_lvl.IndefOfZone(objvars[0], objvars[1]))
{
if ()
}
*/
/*
if (objvars[1] > objects[t].objvars[1] && objvars[1] > objects[t].objvars[1] + objects[t].objvars[2] && objvars[1] < l)
{

if (objvars[0] > objects[t].objvars[0] )
{
if ( objvars[0] > objects[t].objvars[0] + objects[t].objvars[3] &&  objvars[0] < rmindis)
{
//if (objvars[0] > objects[t].objvars[0] + objects[t].objvars[3])
{

//int k = leastObjByX(objvars[0], objvars[1]).objvars[0] - objects[t].objvars[0] / 2;
vars[20][curtarg + 1] = vars[20];
vars[21][curtarg + 1] = vars[21];
vars[20] = objects[t].objvars[0] + 5;
//int k2 = leastObjByY(objvars[0], objvars[1]).objvars[0] - objects[t].objvars[0] / 2;
vars[21] = objects[t].objvars[1] - 5;

}
}
}
}
if (objvars[1] > objects[t].objvars[1] + objects[t].objvars[2] && objvars[1] < l)
{

if (objvars[0] > objects[t].objvars[0]  && objvars[0] < u)
{
vars[20][curtarg + 1] = vars[20];
vars[21][curtarg + 1] = vars[21];
vars[20] = objvars[0];
//int k2 = leastObjByY(objvars[0], objvars[1]).objvars[0] - objects[t].objvars[0] / 2;
vars[21] = l - 10;
}
}
if (objvars[0] < objects[t].objvars[0])
{
if (objvars[1] > objects[t].objvars[1] && objvars[1] < l)
{
vars[20][curtarg + 1] = vars[20];
vars[21][curtarg + 1] = vars[21];
vars[20] = objects[t].objvars[0]-5;
//int k2 = leastObjByY(objvars[0], objvars[1]).objvars[0] - objects[t].objvars[0] / 2;
vars[21] = objects[t].objvars[1] - 5;
}
}

}
*/
//}
}
int peopleViews(int indef)
{
int res = 0;
for (int h = 0; h < 16; h++)
{
if (GetVisible(objects[meet[h]].objvars[0], objects[meet[h]].objvars[1], indef) > 0)
{
	res++;
}
}
return res;
delete &res;
}


int rolethink(int mode, int aut)
{
if (mode == 0) { byst(aut); }
if (mode == 1) { murd(aut); }
//if (mode == 2) { huyNaScovorodke(aut); }
return 0;
}




/*
int checkI(int aut, int g)
{
int ifer = 0;
if (objects[aut].interactScript[g] == "if")
{
ifer = 1;
if (feel(aut, g) == 1)
{
	ifer++;
}
}

if (ifer != 1)
{

if (objects[aut].interactScript[g + 2] == "set")
{
	/*
	if (objects[aut].upScript[g + 1] == "sprite")
	{
	if (objects[aut].upScript[g + 2] == "+")
	{
	objects[aut].objvars[13]++;

	}
	else {
	objects[aut].objvars[13] = objects[aut].upScript[g+2];
	}
	}
	if (getC(objects[aut].interactScript[g + 3]) == -1)
	{

		objects[aut].twvw[objects[aut].interactIntes[g + ifer + 1]] = objects[aut].interactIntes[g + ifer + 2];
	}
	else {
		objects[aut].twvw[objects[aut].interactIntes[g + ifer + 1]] = getVarUC(aut, g + ifer + 1);



	}

} 
} */
// ༼ ESC - X ༽

// Init hill - 7 lines up





/*
void move(int speed)
{

if (vectoring > 0 & vectoring < 180)
{
objvars[0] += speed;
}
else {
objvars[0] -= speed;
}
if (vectoring > 90 & vectoring < 260)
{
objvars[1] += speed;
}
else {
objvars[1] -= speed;
}
}*/


};



/*

MURDER ISLAND's GAME LOGIC
M       I       G        L

v - ?? develop

*/

class zone
{
public:

};




/*
class AI
{
public:
// sprites : 0 - none; 1 - 8 = normal, 9 - sleeping, 10 - normal with item, 14 - 18 crouch, 19 - on the ground, 20 - 28 use item on the map
int NIGGERWITHANIMS = 999;
// Objects links code
int objindef = -1;

// varsC[0] vars
int roleusetypeobjects[15];
int needsforobjects[30];
int fearforobjects[45];

int risks[60];
int explore[15];
char * TWSvarsIndef[150];
// Game vars
// GV gv gs ps
// 0  - [p[ain , 1 - [p[ainwall, 2 - [f[ear , 3 - [physst[at, 4 - [determi[nes, 5 - [sp[eed, 6 - [det[hpain ,
// 7 - [can[Run, 8 - [canHi[de, 9 - [ca[nKills, 10 - [ca[nDefend, 14 - hands, 15 - need, 16 - knowhouse  - 14444444444444444444444444444444444444444 14 14 14 14 14
// 17 - Game Role ( in develop )
// 18 - suspiction
// 19 - speed
int vars[25];
// RolePLay stats - rps / rp


// Out revence code
//int objects[meet[indef]].getIND("interObj");



// physics variables; - pv
int objvars[0];
int objvars[1];
// 1 - up, 2 - right-up, 3 - right, 4 - right-d , 5 - d, 6 - left-d, 7 - left, 8 - left-up
int sight = 1;
// move code
int vars[20];
int vars[21];
char* varsC[0];
int curtarg = 0;
// all for initialization the ai
int init()
{


}
// direction move code - dmc
int move(int x, int y, int mod)
{
vars[20] = x;
vars[21] = y;
// mod - modes for move. 1 - intellectual, 2 - fast
if (mod != 1)
{
if (x < objvars[0])
{
	objvars[0]--;
}
else {
	objvars[0]++;
}
if (y < objvars[1])
{
	objvars[1]--;
}
else {
	objvars[1]++;
}
}
else {
// in relation with code< what in develop
// --in develop--
int fobjvars[0] = objvars[0] + 15;
int fobjvars[0]_alt = objvars[0] - 15;
if (x > fobjvars[0] || x < fobjvars[0]_alt)
{

}
}
}

// Animation
int Animate(int ev)
{
		
objects[objindef].objvars[13] = ev;
//objects[objindef].objvars[12]++;
}
// Primary attack code ==== IN DEVELOP WITH ANGLE LOGIC SYSTEM
int Shoot(int targetx, int targety)
{

}
// Trite move code
int move()
{


if (vars[20] < objvars[0])
{
objvars[0] -= vars[5];
}
else {
objvars[0] += vars[5];
}
if (vars[21] < objvars[1])
{
objvars[1] -= vars[5];
}
else {
objvars[1] += vars[5];
}

}

	
ENG_GameObject leastObjByX(int x, int y)
{
ENG_GameObject f;
int jx = 40;
int jy = 40;
for (int u = 0; u < 150; u++)
{
if (objects[u].objvars[0] < jx)
{

f = objects[u];

}
}
return f;
delete &f;
}
ENG_GameObject leastObjByY(int x, int y)
{
ENG_GameObject f;
int jx = 40;
int jy = 40;
for (int u = 0; u < 150; u++)
{
if (objects[u].objvars[1] < jy)
{


f = objects[u];

}
}
return f;
delete &f;
}
// Object indentefine code



// Visible algoritm - vis va


};
*/