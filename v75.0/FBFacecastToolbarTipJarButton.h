/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBButtonWithExtendedTapTarget.h>

@interface FBFacecastToolbarTipJarButton : FBButtonWithExtendedTapTarget {

	BOOL _enabled;
	unsigned long long _style;

}

@property (assign,nonatomic) unsigned long long style;              //@synthesize style=_style - In the implementation block
-(void)setTipJarEnabled:(BOOL)arg1 ;
-(void)_refreshStyle;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 ;
@end
