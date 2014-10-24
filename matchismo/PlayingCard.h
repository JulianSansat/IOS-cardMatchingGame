//
//  PlayingCard.h
//  matchismo
//
//  Created by Mobile School - Julian on 21/10/14.
//  Copyright (c) 2014 Mobile School - Julian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong,nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
