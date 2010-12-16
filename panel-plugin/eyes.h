/* Copyright (C) 1999 Dave Camp <dave@davec.dhs.org>
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
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */

#ifndef __EYES_H__
#define __EYES_H__

#include <gtk/gtk.h>
#include <libxfce4panel/xfce-panel-plugin.h>

typedef struct
{
	XfcePanelPlugin *plugin;

	GtkWidget	*ebox;

	/* Properties */
	gchar *active_theme;

	/* Plugin */
	GtkWidget   *align;
	GtkWidget   *hbox;
	GtkWidget   **eyes;
	guint        timeout_id;
	gint 	    *pointer_last_x;
	gint 	    *pointer_last_y;

	/* Theme */
	GdkPixbuf *eye_image;
	GdkPixbuf *pupil_image;
	gchar *theme_dir;
	gchar *theme_name;
	gchar *eye_filename;
	gchar *pupil_filename;
	gint num_eyes;
	gint eye_height;
	gint eye_width;
	gint pupil_height;
	gint pupil_width;
	gint wall_thickness;
}
EyesPlugin;

#endif /* __EYES_H__ */
