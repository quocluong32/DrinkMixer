//
//  TableViewController.h
//  Table View Controller App
//
//  Created by Quoc Luong on 9/13/22.
//

#import <UIKit/UIKit.h>
#import "TableViewCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface TableViewController : UITableViewController {
    NSMutableArray* drinks_;
}


@property (nonatomic, retain) NSMutableArray* drinks;

@end

NS_ASSUME_NONNULL_END
