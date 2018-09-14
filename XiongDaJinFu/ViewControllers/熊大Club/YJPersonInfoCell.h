//
//  YJPersonInfoCell.h
//  WalkTogether
//
//  Created by boding on 15/5/12.
//  Copyright (c) 2015年 GYJ. All rights reserved.
//

#import <UIKit/UIKit.h>
@class YJPersonInfoCell;
@protocol YJPersonInfoCellDelegate <NSObject>

@optional
- (void)personInfoChange:(NSString *)change andCell:(YJPersonInfoCell *)cell;
- (void)personInfoBeginEdit:(UITextField *)textField andCell:(YJPersonInfoCell *)cell;
@end

@interface YJPersonInfoCell : UITableViewCell

@property (nonatomic, strong) UITextField *text;
@property (nonatomic, weak) UILabel *name;
@property (nonatomic,strong) UIView *line;

@property (nonatomic, weak) id<YJPersonInfoCellDelegate> delegate;

+ (instancetype)personInfoCellWithTableView:(UITableView *)tableView;

@end
