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
- (IBAction)loginBtn:(id)sender;
- (IBAction)registerBtn:(id)sender;

@end
