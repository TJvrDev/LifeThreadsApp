//
//  ViewControllerLT1.h
//  LifeThreadsApp
//
//  Created by TJ Bennett on 9/3/14.
//  Copyright (c) 2014 projectb.biz. All rights reserved.
//

#import "ViewController.h"

@interface ViewControllerLT1 : ViewController <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
@property (weak, nonatomic) IBOutlet UIImageView *UIImageViewLT1;
@property (strong, nonatomic) UIImage *chosenImage;
@property (strong, nonatomic) UIImagePickerController *imagePicker;


@end
