//
//  DetailViewController.h
//  ProtocalTimer
//
//  Created by Peter Kamm on 10/11/13.
//  Copyright (c) 2013 Digitas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Protocol.h"

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate,UITableViewDataSource,UITableViewDelegate,UIAlertViewDelegate,NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) Protocol *protocol;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (weak, nonatomic) IBOutlet UITableView *eventTableView;
@property (strong, nonatomic) NSMutableArray *eventArray;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
