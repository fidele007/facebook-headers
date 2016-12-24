/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSError;

@interface FBImageStreamingResponse : NSObject {

	BOOL _lastImageFlag;
	CGImageRef _image;
	unsigned long long _imageFlag;
	unsigned long long _imageSource;
	NSError* _error;

}

@property (nonatomic,readonly) CGImageRef image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) unsigned long long imageFlag;                //@synthesize imageFlag=_imageFlag - In the implementation block
@property (nonatomic,readonly) BOOL lastImageFlag;                          //@synthesize lastImageFlag=_lastImageFlag - In the implementation block
@property (nonatomic,readonly) unsigned long long imageSource;              //@synthesize imageSource=_imageSource - In the implementation block
@property (nonatomic,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
+(id)newWithError:(id)arg1 ;
+(id)newWithImage:(CGImageRef)arg1 imageFlag:(unsigned long long)arg2 lastImageFlag:(BOOL)arg3 source:(unsigned long long)arg4 ;
+(id)newWithImage:(CGImageRef)arg1 imageFlag:(unsigned long long)arg2 lastImageFlag:(BOOL)arg3 source:(unsigned long long)arg4 error:(id)arg5 ;
-(unsigned long long)imageSource;
-(BOOL)lastImageFlag;
-(unsigned long long)imageFlag;
-(void)dealloc;
-(CGImageRef)image;
-(BOOL)isCached;
-(NSError *)error;
@end

