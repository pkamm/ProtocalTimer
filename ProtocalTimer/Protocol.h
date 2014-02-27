//
//  Protocol.h
//  ProtocalTimer
//
//  Created by Peter Kamm on 2/26/14.
//  Copyright (c) 2014 Digitas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

#import "Event.h"


@interface Protocol : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * blurb;
@property (nonatomic, retain) NSDate * timeStamp;
@property (nonatomic, retain) NSSet *events;

-(void)addEvents:(NSSet *)objects;
-(void)addEventsObject:(Event *)value;

@end
