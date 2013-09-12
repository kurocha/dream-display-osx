//
//  Display/Cocoa/DApplicationDelegate.h
//  This file is part of the "Dream" project, and is released under the MIT license.
//
//  Created by Samuel Williams on 15/09/11.
//  Copyright (c) 2011 Samuel Williams. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <Dream/Display/Application.h>

@interface DApplicationDelegate : NSObject {
	Dream::Display::IApplication * _application;
}

@property (nonatomic, assign) Dream::Display::IApplication * application;

@end
