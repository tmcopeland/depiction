/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 4; tab-width: 4 -*- */
/*
 * main.cc
 * Copyright (C) Taylor Copeland 2011 <taylor@taylorcopeland.com>
 * 
 * Depiction is free software: you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Depiction is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtkmm.h>
#include <iostream>

#include "config.h"


#ifdef ENABLE_NLS
#  include <libintl.h>
#endif

#include "Depiction.h"



/* For testing propose use the local (not installed) ui file */
/* #define UI_FILE PACKAGE_DATA_DIR"/depiction/ui/depiction.ui" */
//#define UI_FILE "src/depiction.ui"

   
int
main (int argc, char *argv[])
{
	Gtk::Main kit(argc, argv);

	/* Glade will be used later. */
	//Load the Glade file and instiate its widgets:
	/*Glib::RefPtr<Gtk::Builder> builder;
	try
	{
		builder = Gtk::Builder::create_from_file(UI_FILE);
	}
	catch (const Glib::FileError & ex)
	{
		std::cerr << ex.what() << std::endl;
		return 1;
	}
	Gtk::Window* main_win = 0;
	builder->get_widget("main_window", main_win);


	if (main_win)
	{
		kit.run(*main_win);
	}*/

	Depiction app;

	Gtk::Main::run (app);
	return 0;
}
