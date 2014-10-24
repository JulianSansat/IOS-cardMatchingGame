//
//  Deck.h
//  matchismo
//
//  Created by Mobile School - Julian on 15/10/14.
//  Copyright (c) 2014 Mobile School - Julian. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

- (Card *)drawRandomCard;

@end
