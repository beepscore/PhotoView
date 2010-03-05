//
//  PhotoViewViewController.h
//  PhotoView
//
//  Created by Steve Baker on 3/4/10.
//  Copyright Beepscore LLC 2010. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoViewViewController : UIViewController 
<UIImagePickerControllerDelegate> {
    UIImageView *imageView;
    UIImagePickerController *imagePicker;
}
@property(nonatomic,retain)IBOutlet UIImageView *imageView;
@property(nonatomic,retain)IBOutlet UIImagePickerController *imagePicker;

@end

