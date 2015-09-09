//
//  ViewController.h
//  CaffeApp
//
//  Created by Takuya Matsuyama on 7/11/15.
//  Copyright (c) 2015 Takuya Matsuyama. All rights reserved.
//

#import <opencv2/opencv.hpp>
#import <opencv2/highgui/ios.h>
#import <opencv2/highgui/cap_ios.h>

using namespace cv;

@interface ViewController : UIViewController

@property (nonatomic, strong) IBOutlet UIImageView* imageView;

@end

