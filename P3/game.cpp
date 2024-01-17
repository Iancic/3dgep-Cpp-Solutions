#include "game.h"
#include "surface.h"
#include <cstdio>

namespace Tmpl8
{
	void Game::Init()
	{
	}
	void Game::Shutdown()
	{
	}

	void Game::DrawI(int x, int y)
	{
		screen->Line(100 + x, 50 + y, 200 + x, 50 + y, 0xffffff);
		screen->Line(150 + x, 50 + y, 150 + x, 300 + y, 0xffffff);
		screen->Line(100 + x, 300 + y, 200 + x, 300 + y, 0xffffff);
	}

	void Game::DrawFatI()
	{
			DrawI(0, 0);
			DrawI(1, 0);
			DrawI(0, 1);
			DrawI(1, 1);
	}

	static Sprite rotatingGun(new Surface("assets/aagun.tga"), 36);
	static int frame = 0;

	void Game::Tick(float deltaTime)
	{
		screen->Clear(80);
		DrawFatI();
	}
};