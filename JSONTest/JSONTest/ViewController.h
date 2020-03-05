//
//  ViewController.h
//  JSONTest
//
//  Created by 谢鑫 on 2020/3/4.
//  Copyright © 2020 Shae. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UITableView *tableView;
- (IBAction)JSONSerializationParse:(UIBarButtonItem *)sender;
- (IBAction)SBParse:(UIBarButtonItem *)sender;
- (IBAction)JSONKitParse:(UIBarButtonItem *)sender;
- (IBAction)JSONSerializationGenerate:(UIBarButtonItem *)sender;
- (IBAction)SBGenerate:(UIBarButtonItem *)sender;
- (IBAction)JSONKitGenerate:(UIBarButtonItem *)sender;

@end

