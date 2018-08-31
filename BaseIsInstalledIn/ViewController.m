//
//  ViewController.m
//  BaseIsInstalledIn
//
//  Created by 李江湖 on 2018/8/31.
//  Copyright © 2018年 李江湖. All rights reserved.
//

#import "ViewController.h"
#import "ViewController1.h"
#import "NSString+JHInstalled.h"
@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextField *textFile;
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end

@implementation ViewController
-(id)storyboardPushStoryName:(NSString *)name identifier:(NSString *)identifer{
    return [[UIStoryboard storyboardWithName:name bundle:nil] instantiateViewControllerWithIdentifier:identifer];
}
- (void)viewDidLoad {
    [super viewDidLoad];
    
    // Do any additional setup after loading the view, typically from a nib.
}

- (IBAction)zhuanhuan:(UIButton *)sender {
    NSString *num16 =[NSString hexStringFromString:self.textFile.text];
    NSString *num2 = [NSString getBinaryByHex:num16];
    
    NSString *num17 = [NSString getHexByBinary:num2];
    NSString *str = [NSString convertHexStrToString:num17];
    self.textView.text = num2;

}
- (IBAction)toControll:(id)sender {
    ViewController1 *vc = [self storyboardPushStoryName:@"Main" identifier:@"ViewController1"];
    [self presentViewController:vc animated:YES completion:nil];
    // 添加转场动画
    CATransition *transition = [CATransition animation];
    
    transition.type = @"oglFlip";
    
    transition.subtype = kCATransitionFromRight;
    
    transition.duration = 1.0;
    
    // 如果将view添加到导航的view上，会被显示在最上层
    [self.view.layer addAnimation:transition forKey:nil];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
