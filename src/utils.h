/*	$calcurse: utils.h,v 1.1.1.1 2006/07/31 21:00:03 culot Exp $	*/

/*
 * Calcurse - text-based organizer
 * Copyright (c) 2004-2006 Frederic Culot
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
 * Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 *
 * Send your feedback or comments to : calcurse@culot.org
 * Calcurse home page : http://culot.org/calcurse
 *
 */

#ifndef CALCURSE_UTILS_H
#define CALCURSE_UTILS_H

void status_mesg(char *mesg_line1, char *mesg_line2);
void erase_window_part(WINDOW *win, int first_col, int first_row, 
                       int last_col, int last_row);
WINDOW *popup(int pop_row, int pop_col,
	      int pop_y, int pop_x, char *pop_lab);
void print_in_middle(WINDOW *win, int starty, int startx, int width, char *string);
void getstring(WINDOW *win, int colr, char *string, int start_x, int start_y);
int is_all_digit(char *string);
void border_color(WINDOW *window, int bcolr);
void border_nocolor(WINDOW *window);
void scroller(WINDOW *win, char *, int x, int y, int nb_row, int nb_col);
void status_bar(int which_pan, int colr, int nc_bar, int nl_bar);
long date2sec(unsigned year, unsigned month, unsigned day, unsigned hour,
	      unsigned min);
long get_sec_date(int year, int month, int day);
long min2sec(unsigned minutes);
int check_time(char *string);
void draw_scrollbar(WINDOW *win, int y, int x, int length, 
		int bar_top, int bar_bottom, bool hilt);
void item_in_popup(char *saved_a_start, char *saved_a_end, char *msg, 
		char *pop_title);
void win_show(WINDOW * win, char *label);
void display_item(WINDOW *win, int incolor, char *msg, 
		int len, int y, int x);

#endif /* CALCURSE_UTILS_H */
