//
//  UIColor+HexString.h
//  Hex2UIColor
//  Source From：http://my.oschina.net/leejan97/blog/307491
//  Collect By mrshyi
//

#import <UIKit/UIKit.h>

@interface UIColor (HexString)

/**
 *  传入十六进制字符串->UIColor
 *
 *  @param color 十六进制字符串 支持@“#123456”、 @“0X123456”、 @“123456”三种格式
 *
 *  @return UIColor
 */
+ (UIColor *)colorWithHexString:(NSString *)color;

/**
 *  从十六进制字符串获取UIColor颜色
 *
 *  @param color 支持@“#123456”、 @“0X123456”、 @“123456”三种格式
 *  @param alpha 透明度
 *
 *  @return UIColor
 */
+ (UIColor *)colorWithHexString:(NSString *)color alpha:(CGFloat)alpha;

/**
 *  rgba 数值-> UIColor
 *
 *  @param R red
 *  @param G green
 *  @param B blue
 *  @param A alpha
 *
 *  @return UIColor
 */
#define RGBA_COLOR(R, G, B, A) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:A]
#define RGB_COLOR(R, G, B) [UIColor colorWithRed:((R) / 255.0f) green:((G) / 255.0f) blue:((B) / 255.0f) alpha:1.0f]

@end
