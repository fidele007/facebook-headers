/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIColor;

@interface FIGFontMetricInternal : NSObject {

	unsigned long long _fontWeight;
	UIColor* _color;
	SCD_Struct_FI1042 _fontSizeMetric;

}

@property (nonatomic,readonly) SCD_Struct_FI1042 fontSizeMetric;              //@synthesize fontSizeMetric=_fontSizeMetric - In the implementation block
@property (nonatomic,readonly) unsigned long long fontWeight;                 //@synthesize fontWeight=_fontWeight - In the implementation block
@property (nonatomic,readonly) UIColor * color;                               //@synthesize color=_color - In the implementation block
-(id)initWithFontSizeMetric:(SCD_Struct_FI1042)arg1 fontWeight:(unsigned long long)arg2 color:(id)arg3 ;
-(SCD_Struct_FI1042)fontSizeMetric;
-(UIColor *)color;
-(unsigned long long)fontWeight;
@end
