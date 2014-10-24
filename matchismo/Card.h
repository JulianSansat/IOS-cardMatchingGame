//
//  Card.h
//  matchismo
//
//  Created by Mobile School - Julian on 13/10/14.
//  Copyright (c) 2014 Mobile School - Julian. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;
@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;



@end
