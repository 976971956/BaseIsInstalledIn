//
//  ViewController1.m
//  BaseIsInstalledIn
//
//  Created by 李江湖 on 2018/8/31.
//  Copyright © 2018年 李江湖. All rights reserved.
//

#import "ViewController1.h"
#import "NSString+JHInstalled.h"
@interface ViewController1 ()
@property (weak, nonatomic) IBOutlet UITextField *textFile;
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end

@implementation ViewController1

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}
- (IBAction)zhuanhuanClick:(UIButton *)sender {
    NSString *num16 = [NSString getHexByBinary:self.textFile.text];
    NSString *str = [NSString convertHexStrToString:num16];
    self.textView.text = str;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}
- (IBAction)back:(id)sender {
    [self dismissViewControllerAnimated:YES completion:nil];
    // 添加转场动画
    CATransition *transition = [CATransition animation];
    
    transition.type = @"oglFlip";
    
    transition.subtype = kCATransitionFromRight;
    
    transition.duration = 1.0;
    
    // 如果将view添加到导航的view上，会被显示在最上层
    [self.view.layer addAnimation:transition forKey:nil];
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
