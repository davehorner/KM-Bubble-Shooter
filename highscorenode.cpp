/*
 *  highscorenode.cpp
 *  kattMickisShooter
 *
 *  Created by Erik Andersson on 2009-12-23.
 *  Copyright 2009 Åva gymnasium. All rights reserved.
 *
 */

#include "SDL.h"
#include "SDL_ttf/SDL_ttf.h"

#include "mysdl.h"

#include "node.h"
#include "highscorenode.h"

HighscoreNode::HighscoreNode(Screen *screen): Node(screen)
{
	TTF_Font *font = load_font(16);
	SDL_Color color;
	color.r = color.g = color.b = 0xFF;
	_image = TTF_RenderText_Blended(font, "Highscores", color);
	
	_xpos = 175;
	_ypos = 10;
	_w = 200;
	_h = 200;
}