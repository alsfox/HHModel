//
//  NSString+URLEncode.h
//
//  Created by Kevin Renskers on 31-10-13.
//  Copyright (c) 2013 Kevin Renskers. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (URLEncode)

/** Encode转码 */
- (NSString *)URLEncode;
- (NSString *)URLEncodeUsingEncoding:(NSStringEncoding)encoding;

/** Encode 解码 */
- (NSString *)URLDecode;
- (NSString *)URLDecodeUsingEncoding:(NSStringEncoding)encoding;


@end
