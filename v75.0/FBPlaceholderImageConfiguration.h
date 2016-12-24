/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIFont;

@interface FBPlaceholderImageConfiguration : FBValueObject <NSCopying> {

	UIColor* _textColor;
	UIColor* _fillColor;
	UIFont* _font;
	CGSize _imageSize;

}

@property (nonatomic,copy,readonly) UIColor * textColor;              //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * fillColor;              //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy,readonly) UIFont * font;                    //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) CGSize imageSize;                      //@synthesize imageSize=_imageSize - In the implementation block
-(id)initWithTextColor:(id)arg1 fillColor:(id)arg2 font:(id)arg3 imageSize:(CGSize)arg4 ;
-(CGSize)imageSize;
-(UIFont *)font;
-(UIColor *)textColor;
-(UIColor *)fillColor;
@end
