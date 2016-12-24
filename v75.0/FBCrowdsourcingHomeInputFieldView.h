/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, UITextField;

@interface FBCrowdsourcingHomeInputFieldView : UIView {

	UIImageView* _icon;
	UIView* _seperator;
	unsigned long long _type;
	UITextField* _textField;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)type;
-(id)initWithType:(unsigned long long)arg1 ;
-(UITextField *)textField;
-(void)_setupView;
@end

