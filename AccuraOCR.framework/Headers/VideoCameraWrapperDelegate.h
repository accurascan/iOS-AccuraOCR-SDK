//
//  VideoCameraWrapperDelegate.h
//  AccuraSDK
//
//  Created by Chang Alex on 1/26/20.
//  Copyright © 2020 Elite Development LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, RecType) {
    REC_INIT = 1001,
    REC_BOTH,
    REC_FACE,
    REC_MRZ
};

typedef NS_ENUM(NSUInteger, RecogType) {
    OCR,
    PDF417,
    MRZ
};

@protocol VideoCameraWrapperDelegate <NSObject>
-(void)recognizeSucceedBarcode:(NSString*)message;
-(void)processedImage:(UIImage*)image;
-(void)recognizeFailed:(NSString*)message;
-(void)recognizeSucceed:(NSMutableDictionary*)scanedInfo recType:(RecType)recType bRecDone:(BOOL)bRecDone bFaceReplace:(BOOL)bFaceReplace bMrzFirst:(BOOL)bMrzFirst photoImage:(UIImage*)photoImage;
- (void)matchedItem:(UIImage*)image isCardSide1:(BOOL)cs isBack:(BOOL)b isFront:(BOOL)f imagePhoto:(UIImage*)imgp imageResult:(UIImage*)imageResult;

- (void)matchedItem:(NSMutableArray* )setDataFrontKey andsetDataFrontvalue:(NSMutableArray*)setDataFrontvalue andmrzDatasacn:(NSMutableDictionary*)mrzDataSacn setDataBackKey:(NSMutableArray*)setDataBackKey setDataBackValue:(NSMutableArray*)setDataBackValue setFaceData:(NSMutableDictionary*)setFaceData setSecurityData:(NSMutableDictionary*)setSecurityData setFaceBackData:(NSMutableDictionary*)setFaceBackData setPhotoImage:(UIImage*)setPhotoImage;

@end
