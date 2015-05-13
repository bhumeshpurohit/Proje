//
//  SimpleTableCell.h
//  CustomTableView
//
//  Created by Bhumesh on 12/05/15.
//  Copyright (c) 2015 Com.Zaptech. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SimpleTableCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel *nameLabel;

@property (nonatomic, weak) IBOutlet UIImageView *thumbnailImageView;

@end
