//
//  DetailViewController.h
//  CoreDataExample
//
//  Created by Mithlesh Kumar Jha on 28/02/16.
//  Copyright © 2016 Mithlesh Kumar Jha. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

