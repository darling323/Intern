//
//  DetailViewController.h
//  Intern
//
//  Created by 胡 斌 on 15/10/20.
//  Copyright © 2015年 胡 斌. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

