﻿#include <windows.h>
#include <SDKDDKVer.h>
#include <stdlib.h>
#include <malloc.h>
#include <memory.h>
#include "Intermediary.h"
#include <stdio.h>
#include "Scripts.h"
#include "EngineNew.cpp"
#define WIN32_LEAN_AND_MEAN // ��������� ����� ������������ ���������� �� ���������� Windows
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2_image.lib")
#pragma comment(lib, "C:/Program Files (x86)/Windows Kits/8.1/Lib/winv6.3/um/x64/SDL2.lib")
int WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstanse, LPSTR LpszCmdParam, int nCmdindow)
{

	NLHE.scripts[0] = new Demo();	
	IncludeCode *g = new MainStream();
	NLHE.scriptsinds[0] = 0;
	//NLHE.scriptsinds[1] = 1;
	NLHE.repeat();
    g->run();
	return 0;
};