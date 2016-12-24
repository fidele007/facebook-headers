/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@interface FBGeneratedImageCacheKey : NSObject {

	id _functionContext;
	void* _drawFunction;
	void* _sizeFunction;
	CGSize _imageSize;

}

@property (nonatomic,readonly) id functionContext;              //@synthesize functionContext=_functionContext - In the implementation block
@property (nonatomic,readonly) void* drawFunction;              //@synthesize drawFunction=_drawFunction - In the implementation block
@property (nonatomic,readonly) void* sizeFunction;              //@synthesize sizeFunction=_sizeFunction - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                //@synthesize imageSize=_imageSize - In the implementation block
+(id)keyWithFunctionContext:(id)arg1 drawFunction:(void*)arg2 sizeFunction:(void*)arg3 imageSize:(CGSize)arg4 ;
-(void*)drawFunction;
-(id)functionContext;
-(void*)sizeFunction;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(CGSize)imageSize;
@end
