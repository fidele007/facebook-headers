/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKTextureInfo.h>

@interface IGTextureInfo : GLKTextureInfo {

	BOOL _containsMipmaps;
	unsigned _name;
	unsigned _target;
	unsigned _width;
	unsigned _height;
	int _alphaState;
	int _textureOrigin;

}

@property (assign) unsigned name;                     //@synthesize name=_name - In the implementation block
@property (assign) unsigned target;                   //@synthesize target=_target - In the implementation block
@property (assign) unsigned width;                    //@synthesize width=_width - In the implementation block
@property (assign) unsigned height;                   //@synthesize height=_height - In the implementation block
@property (assign) int alphaState;                    //@synthesize alphaState=_alphaState - In the implementation block
@property (assign) int textureOrigin;                 //@synthesize textureOrigin=_textureOrigin - In the implementation block
@property (assign) BOOL containsMipmaps;              //@synthesize containsMipmaps=_containsMipmaps - In the implementation block
-(id)initWithName:(unsigned)arg1 target:(unsigned)arg2 width:(unsigned)arg3 height:(unsigned)arg4 ;
-(void)setAlphaState:(int)arg1 ;
-(void)setTextureOrigin:(int)arg1 ;
-(void)setContainsMipmaps:(BOOL)arg1 ;
-(void)setName:(unsigned)arg1 ;
-(unsigned)name;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(unsigned)width;
-(unsigned)height;
-(void)setWidth:(unsigned)arg1 ;
-(void)setHeight:(unsigned)arg1 ;
-(int)alphaState;
-(int)textureOrigin;
-(BOOL)containsMipmaps;
@end

