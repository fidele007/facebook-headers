/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString;

@interface FBParticleEffectAnimationConfig : FBValueObject <NSCopying> {

	UIImage* _texture;
	long long _framerate;
	long long _numberOfSprites;
	long long _plays;
	NSString* _type;
	CGSize _size;

}

@property (nonatomic,copy,readonly) UIImage * texture;                 //@synthesize texture=_texture - In the implementation block
@property (nonatomic,readonly) long long framerate;                    //@synthesize framerate=_framerate - In the implementation block
@property (nonatomic,readonly) long long numberOfSprites;              //@synthesize numberOfSprites=_numberOfSprites - In the implementation block
@property (nonatomic,readonly) long long plays;                        //@synthesize plays=_plays - In the implementation block
@property (nonatomic,readonly) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (nonatomic,copy,readonly) NSString * type;                   //@synthesize type=_type - In the implementation block
-(id)initWithTexture:(id)arg1 framerate:(long long)arg2 numberOfSprites:(long long)arg3 plays:(long long)arg4 size:(CGSize)arg5 type:(id)arg6 ;
-(long long)numberOfSprites;
-(CGSize)size;
-(NSString *)type;
-(long long)plays;
-(UIImage *)texture;
-(long long)framerate;
@end
