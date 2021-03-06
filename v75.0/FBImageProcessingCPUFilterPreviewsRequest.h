/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBImageProcessingConcurrentRequest.h>

@class NSArray, FBFilteredUIImageMetadata, UIImage, NSString;

@interface FBImageProcessingCPUFilterPreviewsRequest : FBImageProcessingConcurrentRequest {

	NSArray* _cpuFilterStates;
	FBFilteredUIImageMetadata* _cpuFilterMetadata;
	UIImage* _stickersLayer;
	UIImage* _doodlesLayer;
	UIImage* _srcImage;
	UIImage* _image;
	NSString* _cpuFilterName;

}

@property (nonatomic,retain) UIImage * image;                     //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * cpuFilterName;              //@synthesize cpuFilterName=_cpuFilterName - In the implementation block
-(void)setCpuFilterName:(NSString *)arg1 ;
-(id)initWithImage:(id)arg1 cpuFilterStates:(id)arg2 cpuFilterMetadata:(id)arg3 stickersLayer:(id)arg4 doodlesLayer:(id)arg5 perImageCompletionBlock:(/*^block*/id)arg6 cancelBlock:(/*^block*/id)arg7 ;
-(NSString *)cpuFilterName;
-(void)setImage:(UIImage *)arg1 ;
-(UIImage *)image;
-(void)clear;
-(void)executeWithContext:(id)arg1 ;
@end

