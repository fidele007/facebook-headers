/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBWebImageViewListener.h>
#import <Facebook/FBComponentControllerWorkingRangeListenerProviding.h>
#import <Facebook/FBComponentControllerWorkingRangeListening.h>

@class NSString;

@interface FBWebImageWrapperLoggingComponentController : CKComponentController <FBWebImageViewListener, FBComponentControllerWorkingRangeListenerProviding, FBComponentControllerWorkingRangeListening> {

	BOOL _isInViewport;
	long long _imageLoadState;

}

@property (assign,nonatomic) BOOL isInViewport;                     //@synthesize isInViewport=_isInViewport - In the implementation block
@property (assign,nonatomic) long long imageLoadState;              //@synthesize imageLoadState=_imageLoadState - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMount;
-(void)componentEnteredVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(void)componentExitedVisibleRangeWithLayout:(const CKComponentLayout*)arg1 timestamp:(double)arg2 ;
-(id)workingRangeListenerForComponent:(id)arg1 ;
-(id)initWithComponent:(id)arg1 ;
-(void)logInfo;
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)webImageView:(id)arg1 didUpdateLoadProgress:(double)arg2 ;
-(void)webImageView:(id)arg1 didFailDownloadingWithError:(id)arg2 ;
-(long long)imageLoadState;
-(BOOL)isInViewport;
-(void)setIsInViewport:(BOOL)arg1 ;
-(void)setImageLoadState:(long long)arg1 ;
@end

