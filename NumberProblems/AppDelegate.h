//
//  AppDelegate.h
//  NumberProblems
//
//  Created by Julien Guanzon on 1/26/15.
//  Copyright (c) 2015 Julien Guanzon. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property(readonly) float floatValue;
@property (strong, nonatomic) UIWindow *window;

- (int)iterateCount:(int)number;
- (int)multiplied:(int)integer;
- (float)divided:(float)integer;

@end

