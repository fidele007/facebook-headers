/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFont, UIColor;

@interface FIGFontMetric : NSObject {

	UIFont* _font;
	unsigned long long _fontSize;
	UIColor* _color;
	unsigned long long _lineHeight;
	long long _tracking;

}

@property (nonatomic,readonly) UIFont * font;                              //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) unsigned long long fontSize;                //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,readonly) UIColor * color;                            //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) unsigned long long lineHeight;              //@synthesize lineHeight=_lineHeight - In the implementation block
@property (nonatomic,readonly) long long tracking;                         //@synthesize tracking=_tracking - In the implementation block
+(id)fontMetricForType:(unsigned long long)arg1 ;
-(id)initWithFont:(id)arg1 fontSize:(unsigned long long)arg2 color:(id)arg3 lineHeight:(unsigned long long)arg4 tracking:(long long)arg5 ;
-(unsigned long long)lineHeight;
-(UIFont *)font;
-(UIColor *)color;
-(unsigned long long)fontSize;
-(long long)tracking;
@end

