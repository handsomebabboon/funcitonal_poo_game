/****************************************************************************************** 
 *	Chili DirectX Framework Version 16.07.20											  *	
 *	Game.h																				  *
 *	Copyright 2016 PlanetChili.net <http://www.planetchili.net>							  *
 *																						  *
 *	This file is part of The Chili DirectX Framework.									  *
 *																						  *
 *	The Chili DirectX Framework is free software: you can redistribute it and/or modify	  *
 *	it under the terms of the GNU General Public License as published by				  *
 *	the Free Software Foundation, either version 3 of the License, or					  *
 *	(at your option) any later version.													  *
 *																						  *
 *	The Chili DirectX Framework is distributed in the hope that it will be useful,		  *
 *	but WITHOUT ANY WARRANTY; without even the implied warranty of						  *
 *	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the						  *
 *	GNU General Public License for more details.										  *
 *																						  *
 *	You should have received a copy of the GNU General Public License					  *
 *	along with The Chili DirectX Framework.  If not, see <http://www.gnu.org/licenses/>.  *
 ******************************************************************************************/
#pragma once

#include "Keyboard.h"
#include "Mouse.h"
#include "Graphics.h"

class Game
{
public:
	Game( class MainWindow& wnd );
	Game( const Game& ) = delete;
	Game& operator=( const Game& ) = delete;
	void Go();
private:
	void ComposeFrame();
	void UpdateModel();
	/********************************/
	/*  User Functions              */
    void DrawDude(int x, int y);
    void DrawPoo(int x, int y);
    int ClampScreenX(int x,int width);
    int ClampScreenY(int y,int height);
    int isColliding(int x0, int y0, int width0, int height0, int x1, int y1, int width1, int height1);
    void DrawTitle(int x, int y);
	/********************************/
private:
	MainWindow& wnd;
	Graphics gfx;
	/********************************/
	/*  User Variables              */

    int poo0X = 50;
    int poo0Y = 100;
    bool poo0iseaten = false;
    
    int poo1X = 150;
    int poo1Y = 10;
    bool poo1iseaten = false;
  
    int poo2X = 300;
    int poo2Y = 140;
    bool poo2iseaten = false;

    int DudeX = 0;
    int DudeY = 0;

    int DudeWidth = 20;
    int DudeHeight = 20;

    int PooWidth = 24;
    int PooHeight = 24;

    bool isStarted = false;

	/********************************/
};