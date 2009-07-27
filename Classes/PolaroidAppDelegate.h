//
//  PolaroidAppDelegate.h
//  Polaroid
//
//  Created by Kesava Yerra on 7/16/09.
//  Copyright __MyCompanyName__ 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PolaroidAppDelegate : NSObject <UIApplicationDelegate, UIImagePickerControllerDelegate> {
    UIWindow *window;
    UIImagePickerController *mainViewController;
	UIImageView *imageView;
}

@property (nonatomic, retain) UIWindow *window;

- (void)applicationDidFinishLaunching:(UIApplication *)application;
- (void)imagePickerController:(UIImagePickerController *)picker
		didFinishPickingImage:(UIImage *)image
		editingInfo:(NSDictionary *)editingInfo;
- (void)imagePickerControllerDidCancel:(UIImagePickerController *)picker;
@end

