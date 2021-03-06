/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString, UIColor;

@interface FBRichStoryAttributedInlineStyle : NSObject {

	long long _style;
	NSString* _fontName;
	UIColor* _backgroundColor;
	NSRange _range;

}

@property (nonatomic,readonly) NSRange range;                          //@synthesize range=_range - In the implementation block
@property (nonatomic,readonly) long long style;                        //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSString * fontName;               //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) BOOL containsFontTraits; 
@property (nonatomic,readonly) unsigned fontTraits; 
-(id)initWithStyle:(long long)arg1 backgroundColor:(id)arg2 range:(NSRange)arg3 ;
-(BOOL)containsFontTraits;
-(unsigned)fontTraits;
-(id)initWithFontName:(id)arg1 backgroundColor:(id)arg2 range:(NSRange)arg3 ;
-(UIColor *)backgroundColor;
-(long long)style;
-(NSString *)fontName;
-(NSRange)range;
@end

