//
//  DetailViewController.m
//  Table View Controller App
//
//  Created by Quoc Luong on 9/13/22.
//

#import "DetailViewController.h"

@interface DetailViewController ()

@end

@implementation DetailViewController

@synthesize nameTextField = nameTextField_, ingredientsTextView=ingredientsTextView_, directionsTextView = directionsTextView_;

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    self.nameTextField.text = self.detailModal[@"name"];
    self.directionsTextView.text = self.detailModal[@"directions"];
    self.ingredientsTextView.text = self.detailModal[@"ingredients"];
    
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
