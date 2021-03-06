/*********************************************************\
 * Copyright (c) 2012-2013 Christian Ofenberg
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of this software
 * and associated documentation files (the "Software"), to deal in the Software without
 * restriction, including without limitation the rights to use, copy, modify, merge, publish,
 * distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all copies or
 * substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING
 * BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
 * DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
\*********************************************************/


//[-------------------------------------------------------]
//[ Header guard                                          ]
//[-------------------------------------------------------]
#pragma once
#ifndef __WINDOWSHEADER_H__
#define __WINDOWSHEADER_H__


//[-------------------------------------------------------]
//[ Includes                                              ]
//[-------------------------------------------------------]
// Set Windows version to Windows XP
#ifdef WINVER
	#undef WINVER
#endif
#define WINVER			0x0501
#ifdef _WIN32_WINNT
	#undef _WIN32_WINNT
#endif
#define _WIN32_WINNT	0x0501

// Exclude some stuff from "windows.h" to speed up compilation a bit
#ifndef WIN32_LEAN_AND_MEAN
	#define WIN32_LEAN_AND_MEAN
#endif
#ifndef NOGDICAPMASKS
	#define NOGDICAPMASKS
#endif
#ifndef NOMENUS
	#define NOMENUS
#endif
#ifndef NOICONS
	#define NOICONS
#endif
#ifndef NOKEYSTATES
	#define NOKEYSTATES
#endif
#ifndef NORASTEROPS
	#define NORASTEROPS
#endif
#ifndef OEMRESOURCE
	#define OEMRESOURCE
#endif
#ifndef NOATOM
	#define NOATOM
#endif
#ifndef NOMEMMGR
	#define NOMEMMGR
#endif
#ifndef NOMETAFILE
	#define NOMETAFILE
#endif
#ifndef NOOPENFILE
	#define NOOPENFILE
#endif
#ifndef NOSCROLL
	#define NOSCROLL
#endif
#ifndef NOSERVICE
	#define NOSERVICE
#endif
#ifndef NOSOUND
	#define NOSOUND
#endif
#ifndef NOWH
	#define NOWH
#endif
#ifndef NOCOMM
	#define NOCOMM
#endif
#ifndef NOKANJI
	#define NOKANJI
#endif
#ifndef NOHELP
	#define NOHELP
#endif
#ifndef NOPROFILER
	#define NOPROFILER
#endif
#ifndef NODEFERWINDOWPOS
	#define NODEFERWINDOWPOS
#endif
#ifndef NOMCX
	#define NOMCX
#endif

// Disable warnings in external headers, we can't fix them
__pragma(warning(push))
__pragma(warning(disable: 4668))	// warning C4668: '<x>' is not defined as a preprocessor macro, replacing with '0' for '#if/#elif'
	#include <windows.h>
	#undef DrawText
__pragma(warning(pop))


//[-------------------------------------------------------]
//[ Header guard                                          ]
//[-------------------------------------------------------]
#endif // __WINDOWSHEADER_H__
