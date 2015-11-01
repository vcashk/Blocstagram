//
//  Comment.h
//  Blockstagram
//
//  Created by Vikash Khanna on 11/1/15.
//  Copyright © 2015 Vikash Khanna. All rights reserved.
//

#import <Foundation/Foundation.h>

@class User;

@interface Comment : NSObject

@property (nonatomic, strong) NSString *idNumber;

@property (nonatomic, strong) User *from;
@property (nonatomic, strong) NSString *text;


@end
