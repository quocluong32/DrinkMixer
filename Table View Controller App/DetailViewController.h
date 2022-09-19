//
//  DetailViewController.h
//  Table View Controller App
//
//  Created by Quoc Luong on 9/13/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface DetailViewController : UIViewController {
    @private
    UITextField* nameTextField_;
    UITextView* ingredientsTextView_;
    UITextView *directionsTextView_;
}
@property (retain, nonatomic) IBOutlet UITextField *nameTextField;

@property (retain, nonatomic) IBOutlet UITextView *ingredientsTextView;

@property (retain, nonatomic) IBOutlet UITextView *directionsTextView;

@property (strong, nonatomic) NSDictionary* detailModal;
@end

NS_ASSUME_NONNULL_END
