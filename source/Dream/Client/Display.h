//
//  Client/Display.h
//  This file is part of the "Dream" project, and is released under the MIT license.
//
//  Created by Samuel Williams on 14/09/11.
//  Copyright (c) 2011 Samuel Williams. All rights reserved.
//

#ifndef _DREAM_CLIENT_DISPLAY_H
#define _DREAM_CLIENT_DISPLAY_H

#include <Dream/Display/Application.h>
#include <Dream/Display/Scene.h>

namespace Dream
{
	namespace Client
	{
		using namespace Dream::Display;
		
		/// Generic entry point into target specific display code:
		void run(Ptr<IApplicationDelegate> delegate);
	}
}

#endif
