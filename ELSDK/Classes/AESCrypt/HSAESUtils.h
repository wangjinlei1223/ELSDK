
/**
 *  Just a port for NSData+AES & NSString+AES
 *
 */

#import <Foundation/Foundation.h>

#include <sys/types.h>
#include <sys/sysctl.h>
#import <zlib.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <arpa/inet.h>
#include <unistd.h>

#import <AdSupport/AdSupport.h>
#import <AdSupport/ASIdentifierManager.h>
#import <CommonCrypto/CommonDigest.h>

@interface HSAESUtils : NSObject

+ (NSData *)AES256EncryptData:(NSData *)data withKey:(NSString *)key;
+ (NSData *)AES256DecryptData:(NSData *)data withKey:(NSString *)key;

+ (NSData *)dataWithBase64EncodedString:(NSString *)string;

+ (NSString *)base64EncodingWithData:(NSData *)data;
+ (NSString *)base64EncodingData:(NSData *)data WithLineLength:(NSUInteger)lineLength ;
	
+ (BOOL)data:(NSData *)data hasPrefixBytes:(const void *)prefix length:(NSUInteger)length;
+ (BOOL)data:(NSData *)data hasSuffixBytes:(const void *)suffix length:(NSUInteger)length;

+ (NSString *)AES256EncryptString:(NSString *)string withKey:(NSString *)key;
+ (NSString *)AES256DecryptString:(NSString *)string withKey:(NSString *)key;

@end
