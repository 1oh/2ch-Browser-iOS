//
//  DVBUrls.h
//  dvach-browser
//
//  Created by Andrey Konstantinov on 30/09/16.
//  Copyright © 2016 8of. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "DVBConstants.h"

@interface DVBUrls : NSObject

@property (class, nonatomic, readonly, nonnull) NSString *base;
@property (class, nonatomic, readonly, nonnull) NSString *baseWithoutScheme;
@property (class, nonatomic, readonly, nonnull) NSString *baseWithoutSchemeForUrlNinja;
@property (class, nonatomic, readonly, nonnull) NSString *baseWithoutSchemeForUrlNinjaHk;
@property (class, nonatomic, readonly, nonnull) NSString *getCaptchaKey;
@property (class, nonatomic, readonly, nonnull) NSString *reportThread;
@property (class, nonatomic, readonly, nonnull) NSString *boardsList;
@property (class, nonatomic, readonly, nonnull) NSString *getUsercode;
@property (class, nonatomic, readonly, nonnull) NSString *checkReviewStatus;

@end