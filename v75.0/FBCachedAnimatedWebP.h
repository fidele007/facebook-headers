/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCachedImage.h>

@class NSData, FLAnimatedImage;

@interface FBCachedAnimatedWebP : FBCachedImage {

	NSData* _data;
	CGImageRef _image;
	unsigned long long _frameCount;
	FLAnimatedImage* _animatedImage;

}
-(id)initWithData:(id)arg1 fileURL:(id)arg2 ;
-(void)decodeIfNeeded;
-(void)setImage:(CGImageRef)arg1 ;
-(void)dealloc;
-(CGImageRef)image;
-(unsigned long long)cost;
-(id)extraData;
@end

