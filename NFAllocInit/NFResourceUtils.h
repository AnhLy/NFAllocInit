//
//  NFResourceUtils.h
//
//  Copyright 2012 NextFaze. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, FileType) {
    FileTypePNG,
    FileTypeJPG,
    FileTypeVideo,
    FileTypePDF,
    FileTypePlist, // FileTypeXML ?
    FileTypeJson,
    FileTypeText,
    FileTypeUnknown
};

NS_ASSUME_NONNULL_BEGIN

@interface NFResourceUtils : NSObject

+ (FileType)determineFileType:(NSString *)fileName;
+ (void)saveImage:(UIImage *)image withFileName:(NSString *)imageName;
+ (UIImage *)loadImage:(NSString *)fileName;
+ (BOOL)deleteImage:(NSString *)fileName;

+ (BOOL)fileExistsInMainBundle:(nullable NSString *)fileName ofType:(nullable NSString *)fileExtension;

// expects a text file with on array entry per line
+ (NSArray *)arrayFromFile:(NSString *)fileName;

+ (BOOL)isValidEmailAddress:(NSString *)emailAddress;

@end

NS_ASSUME_NONNULL_END
