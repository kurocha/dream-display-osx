//
//  Client/Display.cpp
//  This file is part of the "Dream" project, and is released under the MIT license.
//
//  Created by Samuel Williams on 14/09/11.
//  Copyright (c) 2011 Samuel Williams. All rights reserved.
//

#include "Display.h"
#include "../Display/Cocoa/Application.h"

namespace Dream
{
	namespace Client
	{
		void run (Ptr<IApplicationDelegate> delegate)
		{
			Ref<Cocoa::Application> application = new Cocoa::Application(delegate);
			
			application->run();
		}
	}
}
