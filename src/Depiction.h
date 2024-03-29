/* -*- Mode: C++; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/***************************************************************************
 *            Depiction.h
 *
 *  Sat November 12 19:56:10 2011
 *  Copyright  2011  Taylor Copeland
 *  <taylor@taylorcopeland.com>
 ****************************************************************************/
/*
 * Depiction.h
 *
 * Copyright (C) 2011 - Taylor Copeland
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _DEPICTION_APP_H
#define _DEPICTION_APP_H

#include <gtkmm.h>
#include <iostream>

#include "AboutDialog.h"
#include "MenuBar.h"
#include "MainToolbar.h"

class Depiction : public Gtk::Window
{
public:
	Depiction ();
private:
protected:
	Gtk::Box mainBox;
	//MainToolbar mainToolbar;
};

#endif // _DEPICTION_APP_H