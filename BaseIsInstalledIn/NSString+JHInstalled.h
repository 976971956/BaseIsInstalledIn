//
//  NSString+JHInstalled.h
//  BaseIsInstalledIn
//
//  Created by 李江湖 on 2018/8/31.
//  Copyright © 2018年 李江湖. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]
@interface NSString (JHInstalled)

/**
 获取手机外壳颜色

 @return 手机外壳16进制字符串
 */
+ (NSString *)ljh_deviceColor;

/**
 16进制颜色转化

 @param hexColor 16进制字符串 #000000
 @return 转化后的颜色
 */
+ (UIColor *)getColor:(NSString *)hexColor;
/**
 二进制转换成十六进制
 
 @param binary 二进制数
 @return 十六进制数
 */
+ (NSString *)getHexByBinary:(NSString *)binary;
/**
 二进制转换为十进制
 
 @param binary 二进制数
 @return 十进制数
 */
+ (NSInteger)getDecimalByBinary:(NSString *)binary;
/**
 十进制转换为二进制
 
 @param decimal 十进制数
 @return 二进制数
 */
+ (NSString *)getBinaryByDecimal:(NSInteger)decimal;
/**
 十进制转换十六进制
 
 @param decimal 十进制数
 @return 十六进制数
 */
+ (NSString *)getHexByDecimal:(NSInteger)decimal;

/**
 十六进制转换为字符串

 @param hexString 十六进制字符串
 @return 字符串
 */
+ (NSString *)convertHexStrToString:(NSString *)hexString;
/**
 十六进制转换为二进制
 
 @param hex 十六进制数
 @return 二进制数
 */
+ (NSString *)getBinaryByHex:(NSString *)hex;

/**
 字符串转换为十六进制

 @param string 字符串
 @return 16进制字符串
 */
+ (NSString *)hexStringFromString:(NSString *)string;
@end
