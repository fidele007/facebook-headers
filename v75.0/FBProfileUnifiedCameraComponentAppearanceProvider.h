/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCameraCaptureButtonAppearanceProvider.h>

@class NSString;

@interface FBProfileUnifiedCameraComponentAppearanceProvider : NSObject <FBCameraCaptureButtonAppearanceProvider>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)captureButtonBorderColorForState:(unsigned long long)arg1 ;
-(double)captureButtonBorderOuterRadiusForState:(unsigned long long)arg1 ;
-(double)captureButtonBorderInnerRadiusForState:(unsigned long long)arg1 ;
-(id)captureButtonInnerCircleColorForState:(unsigned long long)arg1 ;
-(double)captureButtonInnerCircleRadiusForState:(unsigned long long)arg1 ;
-(unsigned long long)captureButtonInnerShapeForState:(unsigned long long)arg1 ;
-(id)captureButtonOuterCircleColorForState:(unsigned long long)arg1 ;
-(double)captureButtonOuterCircleRadiusForState:(unsigned long long)arg1 ;
-(id)dialColorForState:(unsigned long long)arg1 ;
-(CGSize)dialSizeForState:(unsigned long long)arg1 ;
-(double)captureButtonAnimationDuration;
@end

