#include "game.h"
#include "surface.h"
#include <cstdio>

namespace Tmpl8
{
	int spriteX = 300;
	int spriteY = 300;
	int speed_Y = 20;
	int speed_X = 20;

	void Game::Init()
	{
	}

	void Game::Shutdown()
	{
	}

	static Sprite rotatingGun(new Surface("assets/aagun.tga"), 36);
	static int frame = 0;

	Sprite ball(new Surface("assets/ball.png"), 1);
	void Game::Tick(float deltaTime)
	{
		screen->Clear(0);
		ball.Draw(screen, spriteX, spriteY);
		spriteY += speed_Y;
		spriteX += speed_X;
		speed_Y += 1;
		speed_X += 1;

		//Y Axis Check
		if (spriteY > 512 - 50)
		{
			spriteY = 512 - 50;
			speed_Y = -speed_Y;
		}

		if (spriteY < 0)
		{
			spriteY = 0;
			speed_Y = speed_Y;
		}

		//X Axis Check
		if (spriteX > 700 + 50)
		{		  
			spriteX = 700 + 50;
			speed_X = -speed_X;
		}

		if (spriteX < 0)
		{
			spriteX = 0;
			speed_X = speed_X;
		}
	}
};