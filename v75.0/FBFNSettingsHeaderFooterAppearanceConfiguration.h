/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class UIColor;

@interface FBFNSettingsHeaderFooterAppearanceConfiguration : NSObject {

	unsigned long long _labelStyle;
	unsigned long long _labelFontWeight;
	UIColor* _textColor;
	UIColor* _linkColor;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) unsigned long long labelStyle;                   //@synthesize labelStyle=_labelStyle - In the implementation block
@property (assign,nonatomic) unsigned long long labelFontWeight;              //@synthesize labelFontWeight=_labelFontWeight - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;                             //@synthesize insets=_insets - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) UIColor * linkColor;                             //@synthesize linkColor=_linkColor - In the implementation block
-(unsigned long long)labelFontWeight;
-(void)setLabelFontWeight:(unsigned long long)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(void)setLinkColor:(UIColor *)arg1 ;
-(UIColor *)linkColor;
-(void)setLabelStyle:(unsigned long long)arg1 ;
-(unsigned long long)labelStyle;
@end

