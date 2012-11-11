//
//  AppDelegate.h
//  Ninja Boat Test1
//
//  Created by Roozbeh on ۱۲/۱۱/۱۰.
//  Copyright __MyCompanyName__ ۲۰۱۲. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "cocos2d.h"

@interface AppController : NSObject <UIApplicationDelegate, CCDirectorDelegate>
{
	UIWindow *window_;
	UINavigationController *navController_;

	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) UINavigationController *navController;
@property (readonly) CCDirectorIOS *director;

@end
