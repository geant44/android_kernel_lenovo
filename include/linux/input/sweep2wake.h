/*
 * include/linux/sweep2wake.h
 *
 * Copyright (c) 2012, Dennis Rassmann <showp1984@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
 */

#ifndef _LINUX_SWEEP2WAKE_H
#define _LINUX_SWEEP2WAKE_H

#include <linux/input.h>
#include <linux/earlysuspend.h>
#include <linux/hrtimer.h>


extern int sweep2wake;
extern int doubletap2wake;
extern bool scr_suspended;
extern bool scr_on_touch;
extern bool exec_count;
extern bool barrier[2];
/* Sweep2wake main function */
extern void detect_sweep2wake(int, int);
extern void doubletap2wake_func(int, int, unsigned long);


#endif	/* _LINUX_SWEEP2WAKE_H */
