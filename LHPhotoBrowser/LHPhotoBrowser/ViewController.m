//
//  ViewController.m
//  LHPhotoBrowser
//
//  Created by Hanguang on 1/11/16.
//  Copyright © 2016 Hanguang. All rights reserved.
//

#import "ViewController.h"
#import "IWPhotoBrowserManager.h"
@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)showPhoto:(UIButton *)sender {
    [[IWPhotoBrowserManager sharedInstance] showPhotoBrowserInViewController:self modally:NO];
}

- (IBAction)showAssets:(UIButton *)sender {
    [IWPhotoBrowserManager sharedInstance].showAssets = YES;
    [[IWPhotoBrowserManager sharedInstance] showPhotoBrowserInViewController:self modally:NO];
}

- (IBAction)showModally:(UIButton *)sender {
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
