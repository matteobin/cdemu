/*
 *  Image Analyzer: Disc structure window - private
 *  Copyright (C) 2012 Rok Mandeljc
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License along
 *  with this program; if not, write to the Free Software Foundation, Inc.,
 *  51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef __IMAGE_ANALYZER_DISC_STRUCTURE_PRIVATE_H__
#define __IMAGE_ANALYZER_DISC_STRUCTURE_PRIVATE_H__


#define IA_DISC_STRUCTURE_GET_PRIVATE(obj) (G_TYPE_INSTANCE_GET_PRIVATE((obj), IA_TYPE_DISC_STRUCTURE, IaDiscStructurePrivate))

struct _IaDiscStructurePrivate
{
    /* Text entry */
    GtkWidget *text_view;
    GtkTextBuffer *buffer;

    GtkWidget *spinbutton_layer;
    GtkWidget *spinbutton_type;

    /* Disc */
    MirageDisc *disc;
};


#endif /* __IMAGE_ANALYZER_DISC_STRUCTURE_PRIVATE_H__ */
