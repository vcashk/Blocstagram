//
//  DataSource.h
//  Blockstagram
//
//  Created by Vikash Khanna on 11/1/15.
//  Copyright © 2015 Vikash Khanna. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DataSource : NSObject

+(instancetype) sharedInstance;

@property (nonatomic, strong, readonly) NSArray *mediaItems;

@end
