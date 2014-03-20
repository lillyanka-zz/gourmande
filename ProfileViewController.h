//
//  ProfileViewController.h
//  Diario de una Gourmande
//
//  Created by supervisor on 3/12/14.
//  Copyright (c) 2014 La Creativería. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ProfileCell.h"

@interface ProfileViewController : UITableViewController{
    ProfileCell *_cell;
    NSMutableArray *infoArray;
}

@property (strong, nonatomic) IBOutlet ProfileCell *_cell;

// UITableView header view properties
@property (nonatomic, strong) IBOutlet UIView *headerView;
@property (nonatomic, strong) IBOutlet UILabel *headerNameLabel;
@property (nonatomic, strong) IBOutlet UIImageView *headerImageView;

// UITableView row data properties
@property (nonatomic, strong) NSArray *rowTitleArray;
@property (nonatomic, strong) NSMutableArray *rowDataArray;
@property (nonatomic, strong) NSMutableData *imageData;

@end
