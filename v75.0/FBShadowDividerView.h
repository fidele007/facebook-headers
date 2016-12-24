/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBShadowDividerView : UIView {

	UIView* _dividerView;
	UIView* _shadowView;
	unsigned long long _mode;
	unsigned long long _direction;

}

@property (assign,nonatomic) unsigned long long mode;                     //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) unsigned long long direction;              //@synthesize direction=_direction - In the implementation block
@property (nonatomic,readonly) BOOL isHorizontal; 
-(id)initWithShadowDirection:(unsigned long long)arg1 mode:(unsigned long long)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)direction;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(BOOL)isHorizontal;
@end

