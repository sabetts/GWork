/*
 *  Gwork
 *  Copyright (c) 2010 Facepunch Studios
 *  Copyright (c) 2013-16 Billy Quith
 *  See license in Gwork.h
 */

#include "Gwork/Gwork.h"
#include "Gwork/Platform.h"
#include "Gwork/Controls/Dialogs/FileOpen.h"

using namespace Gwk;
using namespace Gwk::Dialogs;

void Gwk::Dialogs::FileOpenEx(bool bUseSystem, const String& Name, const String& StartPath,
                               const String& Extension, Gwk::Event::Handler* pHandler,
                               Gwk::Event::Handler::FunctionWithInformation fnCallback)
{
    if (bUseSystem && Gwk::Platform::FileOpen(Name, StartPath, Extension, pHandler, fnCallback))
        return;

    //
    // TODO: SHOW Gwork FILE SELECTION DIALOG
    //
}