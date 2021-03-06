/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBImageProcessingConcurrentRequest.h>

@class UIImage, NSDictionary;

@interface FBImageProcessingFaceCropRequest : FBImageProcessingConcurrentRequest {

	UIImage* _image;
	NSDictionary* _faces;
	NSDictionary* _faceCropJPEGs;

}

@property (nonatomic,retain) NSDictionary * faceCropJPEGs;              //@synthesize faceCropJPEGs=_faceCropJPEGs - In the implementation block
-(NSDictionary *)faceCropJPEGs;
-(id)initWithImage:(id)arg1 faces:(id)arg2 completion:(/*^block*/id)arg3 cancel:(/*^block*/id)arg4 ;
-(id)_dataFromCrop:(CGImageRef)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 colorSpace:(CGColorSpaceRef)arg5 bitmapInfo:(unsigned)arg6 ;
-(void)setFaceCropJPEGs:(NSDictionary *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)executeWithContext:(id)arg1 ;
@end

