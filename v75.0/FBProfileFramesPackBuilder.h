/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, FBMemImage, FBMemProfileSegmentationMaskResult;

@interface FBProfileFramesPackBuilder : NSObject {

	NSString* _cameraTitle;
	NSString* _categoryId;
	UIImage* _frameImage;
	UIImage* _removeFrameThumbnail;
	NSString* _frameId;
	NSString* _frameUri;
	NSString* _sourceMediaID;
	FBMemImage* _currentPageImage;
	BOOL _defaultToStagingGround;
	FBMemProfileSegmentationMaskResult* _alphaMask;

}
+(id)profileFramesPack;
+(id)profileFramesPackFromExistingProfileFramesPack:(id)arg1 ;
-(id)withFrameImage:(id)arg1 ;
-(id)withDefaultToStagingGround:(BOOL)arg1 ;
-(id)withCategoryId:(id)arg1 ;
-(id)withSourceMediaID:(id)arg1 ;
-(id)withFrameId:(id)arg1 ;
-(id)withFrameUri:(id)arg1 ;
-(id)withCameraTitle:(id)arg1 ;
-(id)withAlphaMask:(id)arg1 ;
-(id)withRemoveFrameThumbnail:(id)arg1 ;
-(id)withCurrentPageImage:(id)arg1 ;
-(id)build;
@end

