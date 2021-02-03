//
//  VideoCameraWrapper.h
//  AccuraSDK
//
//  Created by Chang Alex on 1/26/20.
//  Copyright © 2020 Elite Development LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "VideoCameraWrapperDelegate.h"
#import "SDKModels.h"
#import "Firebase.h"
#import "ResultModel.h"

typedef NS_ENUM(NSUInteger, CameraFacing)
{
    CAMERA_FACING_BACK,
    CAMERA_FACING_FRONT
};

typedef NS_ENUM(NSUInteger, CardSide)
{
    BACK_CARD_SCAN,
    FRONT_CARD_SCAN
};

CameraFacing Camerafacing;
CardSide ScanCard;

@interface AccuraCameraWrapper : NSObject

{
    BOOL _isCapturing;
    BOOL _isMotion;
    NSThread *thread;
//    SDKModel sdkm;
}


@property (nonatomic, strong) id<VideoCameraWrapperDelegate> delegate;


//@property NSMutableDictionary *ocrDataSet;


- (SDKModels *)loadEngine:(NSString *)url;
-(void)setDefaultDialogs:(bool)isShowErrorDialogs;
- (NSMutableArray *)getOCRList;

-(id)initWithDelegate:(UIViewController<VideoCameraWrapperDelegate>*)delegate andImageView:(UIImageView *)iv andLabelMsg:(UILabel*)l andurl:(NSString*)url cardId:(int)cardId countryID:(int)countryID isScanOCR:(bool)isScanOCR andLabelMsgTop:(UILabel*)msgTop andcardName:(NSString*)cardName andcardType:(int)cardType andMRZDocType:(int)MRZDocumentType;
-(id)initWithDelegate:(UIViewController<VideoCameraWrapperDelegate>*)delegate andImageView:(UIImageView *)iv andLabelMsg:(UILabel*)l andurl:(int)url  isBarcodeEnable:(bool)isBE countryID:(int)countryID setBarcodeType:(NSString*)setBarcodeType;

-(id)initWithDelegate:(UIViewController<VideoCameraWrapperDelegate>*)delegate andImageView:(UIImageView *)iv andMsgLabel:(UILabel*)l andfeedBackframeMessage:(NSString*)feedBackframeMessage andfeedBackAwayMessage:(NSString*)feedBackAwayMessage andfeedBackOpenEyesMessage:(NSString*)feedBackOpenEyesMessage andfeedBackCloserMessage:(NSString*)feedBackCloserMessage andfeedBackCenterMessage:(NSString*)feedBackCenterMessage andfeedBackMultipleFaceMessage:(NSString*)feedBackMultipleFaceMessage andfeedBackFaceSteady:(NSString*)feedBackFaceSteady andfeedBackLowLightMessage:(NSString*)feedBackLowLightMessage andfeedBackBlurFaceMessage:(NSString*)feedBackBlurFaceMessage andfeedBackGlareFaceMessage:(NSString*)feedBackGlareFaceMessage andcheckLivess:(bool)checkLivenss;

-(void)startCamera;
-(void)stopCamera;
-(void)ChangedOrintation:(CGFloat)width height:(CGFloat)height;

-(void)processWithArray:(NSArray*)imageDataArray andarrTextData:(NSArray*)ad;

-(void)processWithBack1:(NSString*)stCard  andisCheckBack:(bool)isCheckBack;
-(void)drawFeatures:(UIImage *)image11;
-(void)setHologramDetection:(BOOL)hologram;
-(void)setFaceBlurPercentage:(int)faceBlur;
-(void)setLowLightTolerance:(int)lowLight;
-(void)setMotionThreshold:(int)motion;
-(void)setGlarePercentage:(int)intMin intMax:(int)intMax;
-(void)setCheckPhotoCopy:(BOOL)isPhoto;
-(void)accuraSDK;
-(void)SetCameraFacing:(CameraFacing)camera;
-(void)SwitchCamera;
-(void)setBlurPercentage:(int)blur;
-(void)andCardSide:(CardSide)scanCardFirst;
-(void)showLogFile:(bool)isShowLogs;
-(void)CloseOCR;



@end
