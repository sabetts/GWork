/*
 *  Gwork
 *  Copyright (c) 2010 Facepunch Studios
 *  Copyright (c) 2013-16 Billy Quith
 *  See license in Gwork.h
 */


#include <Gwork/Gwork.h>
#include <stdio.h>
#include <stdarg.h>


namespace Gwk
{
    // Globals
    GWK_EXPORT Controls::Base* HoveredControl = nullptr;
    GWK_EXPORT Controls::Base* KeyboardFocus = nullptr;
    GWK_EXPORT Controls::Base* MouseFocus = nullptr;

}
