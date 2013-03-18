//
//  ViewController.h
//  GPA Calculator
//
//  Created by Albert Toledo on 5/26/12.
//  Copyright (c) 2012 Hampton University. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIButton *Calculate;
@property (weak, nonatomic) IBOutlet UILabel *GPA;
@property (weak, nonatomic) IBOutlet UITextField *grade1;
@property (weak, nonatomic) IBOutlet UITextField *credit1;

@end
