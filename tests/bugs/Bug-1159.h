//
//  Bug-1159.h
//  Z-Fighting in iPad 2
//
//  Created by Greg Woods on 4/5/11.
//  Copyright 2011 Westlake Design. All rights reserved.
//

#import "cocos2d.h"

//CLASS INTERFACE
@interface AppController : NSObject <UIApplicationDelegate>
{
	UIWindow	*window_;
	UIViewController *viewController_;
}
@end

@interface Bug1159 : CCLayer
{
}

+(id)scene;
@end