//
//  PhotoViewAppDelegate.h
//  PhotoView
//
//  Created by Steve Baker on 3/4/10.
//  Copyright Beepscore LLC 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@class PhotoViewViewController;

@interface PhotoViewAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    PhotoViewViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet PhotoViewViewController *viewController;

@end

