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

	static Sprite rotatingGun(new Surface("assets/aagun.tga"), 36);
	static int frame = 0;


	Sprite theSprite(new Surface("assets/ctankbase.tga"), 16);
	void Game::Tick(float deltaTime)
	{
		screen->Clear(0);

		for (int i = 0; i <= 8; i++)
		{
			for (int j = 0; j <= 14; j++)
			{
				theSprite.SetFrame(j);
				theSprite.Draw(screen, j*50, i*50);
			}
		}
	}
};