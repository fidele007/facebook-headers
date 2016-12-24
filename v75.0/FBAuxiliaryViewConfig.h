/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBUIConfig.h>

@class UIColor, NSAttributedString, UIFont, NSString;

@interface FBAuxiliaryViewConfig : FBValueObject <FBUIConfig> {

	unsigned long long _glyphName;
	unsigned long long _glyphSize;
	UIColor* _glyphColor;
	NSAttributedString* _text;
	UIFont* _textFallbackFont;
	UIColor* _textFallbackColor;
	unsigned long long _arrangement;
	double _spacing;

}

@property (nonatomic,readonly) unsigned long long glyphName;                  //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphSize;                  //@synthesize glyphSize=_glyphSize - In the implementation block
@property (nonatomic,copy,readonly) UIColor * glyphColor;                     //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * text;                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) UIFont * textFallbackFont;                //@synthesize textFallbackFont=_textFallbackFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * textFallbackColor;              //@synthesize textFallbackColor=_textFallbackColor - In the implementation block
@property (nonatomic,readonly) unsigned long long arrangement;                //@synthesize arrangement=_arrangement - In the implementation block
@property (nonatomic,readonly) double spacing;                                //@synthesize spacing=_spacing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithGlyphName:(unsigned long long)arg1 glyphSize:(unsigned long long)arg2 glyphColor:(id)arg3 text:(id)arg4 textFallbackFont:(id)arg5 textFallbackColor:(id)arg6 arrangement:(unsigned long long)arg7 spacing:(double)arg8 ;
+(Class)viewClass;
-(unsigned long long)glyphSize;
-(unsigned long long)arrangement;
-(id)textWithFontAndColorFallback;
-(UIFont *)textFallbackFont;
-(UIColor *)textFallbackColor;
-(id)_initWithGlyphName:(unsigned long long)arg1 glyphSize:(unsigned long long)arg2 glyphColor:(id)arg3 text:(id)arg4 textFallbackFont:(id)arg5 textFallbackColor:(id)arg6 arrangement:(unsigned long long)arg7 spacing:(double)arg8 ;
-(unsigned long long)glyphName;
-(NSAttributedString *)text;
-(double)spacing;
-(UIColor *)glyphColor;
@end

