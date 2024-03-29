//           AboutDialog.cc
//  Sat November 12 21:15:36 2011
//  Copyright  2011  Taylor Copeland
//  <taylor@taylorcopeland.com>
// DepictionAboutDialog.cc
//
// Copyright (C) 2011 - Taylor Copeland
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program. If not, see <http://www.gnu.org/licenses/>.

#include "AboutDialog.h"

AboutDialog::AboutDialog ()
{
	set_program_name ("Depiction");
	set_version ("0.1");
	set_copyright ("2011 Taylor Copeland");
	set_comments (NULL);
	set_license ("GNU General Public License");
	set_license_type (Gtk::LICENSE_GPL_3_0);
	set_website (NULL);
	set_website_label (NULL);
	//set_authors ("Taylor Copeland");
	//set_documenters (NULL);
	//set_artists (NULL);
	set_translator_credits (NULL);
	//set_logo (NULL);
	//set_logo_icon_name (NULL);
	set_wrap_license (true);

	show_all ();
}
