/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCaptureCoordinatorBase.h>

@protocol FBMPInput;
@class FBMPPreview, FBMPLocalImageInput, FBMPVideoAssetInput;

@interface FBCCPostCaptureCoordinator : FBCaptureCoordinatorBase {

	id<FBMPInput> _currentInput;
	FBMPPreview* _preview;
	FBMPLocalImageInput* _imageInput;
	FBMPVideoAssetInput* _videoAssetInput;

}
-(void)setInputAsImage:(id)arg1 ;
-(void)setInputAsVideoAsset:(id)arg1 thumbnail:(id)arg2 outputSize:(CGSize)arg3 loopVideo:(BOOL)arg4 ;
-(void)resumeVideo;
-(id)initWithFilterFactory:(id)arg1 logger:(id)arg2 ;
-(void)setFramerateCap:(long long)arg1 ;
-(void)_clearCurrentInputs;
-(void)_replaceOrInsertInput:(id)arg1 ;
-(id)_sanityCheckBeforeExportImage;
-(void)_detachPhotoCapturer;
-(void)_addPhotoCapturerWithCompletion:(/*^block*/id)arg1 ;
-(void)filterTopologyDidChange;
-(void)exportImageWithCompletion:(/*^block*/id)arg1 ;
-(id)getVideoEditsFilterConfigs;
-(void)setMuted:(BOOL)arg1 ;
-(void)pauseVideo;
-(id)preview;
@end

