//
//  EntryViewController.h
//  Diario de una Gourmande
//
//  Created by supervisor on 3/12/14.
//  Copyright (c) 2014 La Creativería. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface EntryViewController : UIViewController

@property (nonatomic, strong) IBOutlet UIActivityIndicatorView *activityIndicator;
- (IBAction)loginBtn:(UIButton *)sender;
- (IBAction)logoutBtn:(UIButton *)sender;
@property (nonatomic, strong) UIButton *logoutBtn;
@end
