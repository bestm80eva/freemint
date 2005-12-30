/*
 * $Id$
 * 
 * XaAES - XaAES Ain't the AES (c) 1992 - 1998 C.Graham
 *                                 1999 - 2003 H.Robbers
 *                                        2004 F.Naumann & O.Skancke
 *
 * A multitasking AES replacement for FreeMiNT
 *
 * This file is part of XaAES.
 *
 * XaAES is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * XaAES is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with XaAES; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _xa_pdlg_h
#define _xa_pdlg_h

#include "global.h"
#include "xa_types.h"

#if WDIALOG_PDLG
struct xa_window * get_pdlg_wind(struct xa_client *client, void *handle);

AES_function
	XA_pdlg_create,
	XA_pdlg_delete,
	XA_pdlg_open,
	XA_pdlg_close,
	XA_pdlg_get,
	XA_pdlg_set,
	XA_pdlg_evnt,
	XA_pdlg_do;
#endif

#endif /* _xa_pdlg_h */
