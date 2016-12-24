/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <Facebook/FBUIConfig.h>

@class NSAttributedString, UIFont, UIColor, NSString;

@interface FBFooterViewConfig : FBValueObject <FBUIConfig> {

	NSAttributedString* _title;
	UIFont* _titleFallbackFont;
	UIColor* _titleFallbackColor;
	unsigned long long _glyphName;
	unsigned long long _glyphSize;
	UIColor* _glyphColor;
	double _height;
	UIColor* _backgroundColor;

}

@property (nonatomic,copy,readonly) NSAttributedString * title;                //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) UIFont * titleFallbackFont;                //@synthesize titleFallbackFont=_titleFallbackFont - In the implementation block
@property (nonatomic,copy,readonly) UIColor * titleFallbackColor;              //@synthesize titleFallbackColor=_titleFallbackColor - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphName;                   //@synthesize glyphName=_glyphName - In the implementation block
@property (nonatomic,readonly) unsigned long long glyphSize;                   //@synthesize glyphSize=_glyphSize - In the implementation block
@property (nonatomic,copy,readonly) UIColor * glyphColor;                      //@synthesize glyphColor=_glyphColor - In the implementation block
@property (nonatomic,readonly) double height;                                  //@synthesize height=_height - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                 //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithTitle:(id)arg1 titleFallbackFont:(id)arg2 titleFallbackColor:(id)arg3 glyphName:(unsigned long long)arg4 glyphSize:(unsigned long long)arg5 glyphColor:(id)arg6 height:(double)arg7 backgroundColor:(id)arg8 ;
+(Class)viewClass;
-(unsigned long long)glyphSize;
-(UIFont *)titleFallbackFont;
-(UIColor *)titleFallbackColor;
-(id)_initWithTitle:(id)arg1 titleFallbackFont:(id)arg2 titleFallbackColor:(id)arg3 glyphName:(unsigned long long)arg4 glyphSize:(unsigned long long)arg5 glyphColor:(id)arg6 height:(double)arg7 backgroundColor:(id)arg8 ;
-(unsigned long long)glyphName;
-(UIColor *)backgroundColor;
-(NSAttributedString *)title;
-(double)height;
-(UIColor *)glyphColor;
@end

