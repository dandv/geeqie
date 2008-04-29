/*
 * Geeqie
 * (C) 2006 John Ellis
 * Copyright (C) 2008 The Geeqie Team
 *
 * Author: John Ellis
 *
 * This software is released under the GNU General Public License (GNU GPL).
 * Please read the included file COPYING for more information.
 * This software comes with no warranty of any kind, use at your own risk!
 */

#ifndef LAYOUT_IMAGE_H
#define LAYOUT_IMAGE_H


GtkWidget *layout_image_new(LayoutWindow *lw, gint i);
void layout_image_activate(LayoutWindow *lw, gint i);
GtkWidget *layout_image_setup_split_none(LayoutWindow *lw);
GtkWidget *layout_image_setup_split_hv(LayoutWindow *lw, gboolean horizontal);
GtkWidget *layout_image_setup_split(LayoutWindow *lw, ImageSplitMode mode);

void layout_image_set_fd(LayoutWindow *lw, FileData *fd);
void layout_image_set_with_ahead(LayoutWindow *lw, FileData *fd, FileData *read_ahead_fd);

void layout_image_set_index(LayoutWindow *lw, gint index);
void layout_image_set_collection(LayoutWindow *lw, CollectionData *cd, CollectInfo *info);

void layout_image_refresh(LayoutWindow *lw);

void layout_image_color_profile_set(LayoutWindow *lw,
				    gint input_type, gint screen_type,
				    gint use_image);
gint layout_image_color_profile_get(LayoutWindow *lw,
				    gint *input_type, gint *screen_type,
				    gint *use_image);
void layout_image_color_profile_set_use(LayoutWindow *lw, gint enable);
gint layout_image_color_profile_get_use(LayoutWindow *lw);
gint layout_image_color_profile_get_from_image(LayoutWindow *lw);


const gchar *layout_image_get_path(LayoutWindow *lw);
const gchar *layout_image_get_name(LayoutWindow *lw);
FileData *layout_image_get_fd(LayoutWindow *lw);
CollectionData *layout_image_get_collection(LayoutWindow *lw, CollectInfo **info);
gint layout_image_get_index(LayoutWindow *lw);


void layout_image_scroll(LayoutWindow *lw, gint x, gint y);
void layout_image_zoom_adjust(LayoutWindow *lw, gdouble increment);
void layout_image_zoom_adjust_at_point(LayoutWindow *lw, gdouble increment, gint x, gint y);
void layout_image_zoom_set(LayoutWindow *lw, gdouble zoom);
void layout_image_zoom_set_fill_geometry(LayoutWindow *lw, gint vertical);
void layout_image_alter(LayoutWindow *lw, AlterType type);

void layout_image_next(LayoutWindow *lw);
void layout_image_prev(LayoutWindow *lw);
void layout_image_first(LayoutWindow *lw);
void layout_image_last(LayoutWindow *lw);

void layout_image_menu_popup(LayoutWindow *lw);

void layout_image_to_root(LayoutWindow *lw);

void layout_image_full_screen_start(LayoutWindow *lw);
void layout_image_full_screen_stop(LayoutWindow *lw);
void layout_image_full_screen_toggle(LayoutWindow *lw);
gint layout_image_full_screen_active(LayoutWindow *lw);

void layout_image_slideshow_start(LayoutWindow *lw);
void layout_image_slideshow_start_from_list(LayoutWindow *lw, GList *list);
void layout_image_slideshow_stop(LayoutWindow *lw);
void layout_image_slideshow_toggle(LayoutWindow *lw);
gint layout_image_slideshow_active(LayoutWindow *lw);
gint layout_image_slideshow_pause_toggle(LayoutWindow *lw);
gint layout_image_slideshow_paused(LayoutWindow *lw);


void layout_image_overlay_toggle(LayoutWindow *lw);

void layout_image_maint_renamed(LayoutWindow *lw, FileData *fd);
void layout_image_maint_removed(LayoutWindow *lw, FileData *fd);
void layout_image_maint_moved(LayoutWindow *lw, FileData *fd);


#endif
