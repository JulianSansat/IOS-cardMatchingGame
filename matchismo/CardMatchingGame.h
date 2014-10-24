//
//  CardMatchingGame.h
//  matchismo
//
//  Created by Mobile School - Julian on 24/10/14.
//  Copyright (c) 2014 Mobile School - Julian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Deck.h"
#import "Card.h"

@interface CardMatchingGame : NSObject

- (instancetype)initWithCardCount:(NSUInteger)count using:(Deck *)deck;

- (void)chooseCardAtIndex:(NSUInteger)index;
- (Card *)cardATIndex:(NSUInteger)index;

@property (nonatomic, readonly) NSInteger score;
@end
