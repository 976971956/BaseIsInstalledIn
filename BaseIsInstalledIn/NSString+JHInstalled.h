//
//  NSString+JHInstalled.h
//  BaseIsInstalledIn
//
//  Created by 李江湖 on 2018/8/31.
//  Copyright © 2018年 李江湖. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (JHInstalled)
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
