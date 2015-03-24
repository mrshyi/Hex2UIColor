//
//  UIColor+HexStringPlus.h
//  Hex2UIColor
//  Source From：https://github.com/emadhegab/MHHexColoring
//  Collect By mrshyi
//

#import <UIKit/UIKit.h>

@interface UIColor (HexStringPlus)

/**
 *  十六进制->UIColor
 *
 *  @param hexString 支持 #RGB / #ARGB / #RRGGBB / #AARRGGBB
 *
 *  @return
 */
+ (UIColor *) colorWithHexString: (NSString *) hexString;

/**
 *  RGBA 数值 -> UIColor
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
