//
//  MediaTableViewCell.h
//  Blockstagram
//
//  Created by Vikash Khanna on 11/1/15.
//  Copyright © 2015 Vikash Khanna. All rights reserved.
//

#import <UIKit/UIKit.h>

@class Media;

@interface MediaTableViewCell : UITableViewCell

@property (nonatomic, strong) Media *mediaItem;
+ (CGFloat) heightForMediaItem:(Media *)mediaItem width:(CGFloat)width;

@end
