#include "game.h"
#include "surface.h"
#include <cstdio> //printf

namespace Tmpl8
{
	struct linepoints {int x1; int y1; int x2; int y2; int color;};
	linepoints codewordArray[15];

	void Game::Init()
	{
		// letter c
		codewordArray[0] = { 0,160,120,0, 0xff0000 };	
		codewordArray[1] = { 0,160,120,320, 0xff0000 };
		codewordArray[2] = { 120,320,180,240, 0xff0000 };
		codewordArray[3] = { 120,00,180,80, 0xff0000 };
		// letter o
		codewordArray[4] = { 240,160,360,0, 0x00ff00 };
		codewordArray[5] = { 360,0,480,160, 0x00ff00 };
		codewordArray[6] = { 240,160,360,320, 0x00ff00 };
		codewordArray[7] = { 360,320,480,160, 0x00ff00 };
		// letter d
		codewordArray[8] = { 0,320,0,640, 0x0000ff };
		codewordArray[9] = { 0,320,180,480, 0x0000ff };
		codewordArray[10] = { 0,640,180,480, 0x0000ff };
		// letter e
		codewordArray[11] = { 240,320,240,640, 0xFFFF00 };
		codewordArray[12] = { 240,320,480,320, 0xFFFF00 };
		codewordArray[13] = { 240,480,300,480, 0xFFFF00 };
		codewordArray[14] = { 240,640,480,640, 0xFFFF00 };
	}

	void Game::Shutdown()
	{
	}

	static Sprite rotatingGun(new Surface("assets/aagun.tga"), 36);
	static int frame = 0;

	void Game::Tick(float deltaTime)
	{
		screen->Clear(0);

		for (linepoints l : codewordArray) {
			screen->Line(l.x1, l.y1, l.x2, l.y2, l.color);
		}
	}
};