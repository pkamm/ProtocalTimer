//
//  MasterViewController.h
//  ProtocalTimer
//
//  Created by Peter Kamm on 10/11/13.
//  Copyright (c) 2013 Digitas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Protocol.h"

@class DetailViewController;

#import <CoreData/CoreData.h>

@interface MasterViewController : UITableViewController <NSFetchedResultsControllerDelegate, UIAlertViewDelegate>

@property (strong, nonatomic) DetailViewController *detailViewController;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
