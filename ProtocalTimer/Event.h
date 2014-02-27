//
//  Event.h
//  ProtocalTimer
//
//  Created by Peter Kamm on 2/27/14.
//  Copyright (c) 2014 Peter Kamm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Protocol;

@interface Event : NSManagedObject

@property (nonatomic, retain) NSString * blurb;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * startTimeDuration;
@property (nonatomic, retain) Protocol *protocol;

@end
