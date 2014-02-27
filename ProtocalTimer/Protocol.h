//
//  Protocol.h
//  ProtocalTimer
//
//  Created by Peter Kamm on 2/27/14.
//  Copyright (c) 2014 Peter Kamm. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Event;

@interface Protocol : NSManagedObject

@property (nonatomic, retain) NSString * blurb;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSSet *events;
@end

@interface Protocol (CoreDataGeneratedAccessors)

- (void)addEventsObject:(Event *)value;
- (void)removeEventsObject:(Event *)value;
- (void)addEvents:(NSSet *)values;
- (void)removeEvents:(NSSet *)values;

@end
