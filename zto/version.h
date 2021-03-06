/*
 * ZeroTier One - Network Virtualization Everywhere
 * Copyright (C) 2011-2016  ZeroTier, Inc.  https://www.zerotier.com/
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef _ZT_VERSION_H
#define _ZT_VERSION_H

/**
 * Major version
 */
#define ZEROTIER_ONE_VERSION_MAJOR 1

/**
 * Minor version
 */
#define ZEROTIER_ONE_VERSION_MINOR 2

/**
 * Revision
 */
#define ZEROTIER_ONE_VERSION_REVISION 0

/**
 * Build version
 *
 * This starts at 0 for each major.minor.rev tuple and can be incremented
 * to force a minor update without an actual version number change. It's
 * not part of the actual release version number.
 */
#define ZEROTIER_ONE_VERSION_BUILD 0

#endif
