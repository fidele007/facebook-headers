/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class AVAssetImageGenerator, NSObject, NSMutableDictionary, UIImage, FBVideoProcessor, FBVideoProcessorConfig, FBVideoProcessorFilterConfig, NSArray;

@interface FBFilmStripThumbnailGenerator : NSObject {

	AVAssetImageGenerator* _imageGenerator;
	NSObject*<OS_dispatch_queue> _serialQueue;
	CGSize _thumbnailSize;
	double _scale;
	NSMutableDictionary* _handlersByTime;
	double _cropOriginXProportion;
	double _cropOriginYProportion;
	UIImage* _overlayImage;
	FBVideoProcessor* _videoProcessor;
	FBVideoProcessorConfig* _videoProcessorConfig;
	FBVideoProcessorFilterConfig* _filterConfig;
	NSArray* _requestedTimes;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	/*^block*/id _handler;
	BOOL _enableColorFilter;

}
-(void)_enableFiltersModeWithFilter:(id)arg1 ;
-(void)updatePlayerFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2 ;
-(void)updateFilmCropOriginWithXProportion:(double)arg1 YProportion:(double)arg2 ;
-(void)_generateImageInSerialQueueForTimes:(id)arg1 callbackQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_handleImageGeneratorCompleteInSerialQueueWithRequestedTime:(SCD_Struct_FB100)arg1 image:(id)arg2 error:(id)arg3 ;
-(id)initWithColorFilter:(BOOL)arg1 ;
-(void)generateImageForTimes:(id)arg1 callbackQueue:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)_callHandler:(/*^block*/id)arg1 inQueue:(id)arg2 withTime:(SCD_Struct_FB100)arg3 image:(id)arg4 error:(id)arg5 ;
-(void)setAsset:(id)arg1 thumbnailSize:(CGSize)arg2 scale:(double)arg3 ;
-(void)setOverlayImage:(id)arg1 ;
@end

