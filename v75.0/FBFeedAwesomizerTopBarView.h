/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@class UILabel, UIView, NSString, UIButton;

@interface FBFeedAwesomizerTopBarView : UIView <FBAccessibilityInvalidationEventsListener> {

	unsigned long long _styles;
	UILabel* _titleLabel;
	UIView* _bottomBorder;
	NSString* _title;
	UIButton* _closeButton;

}

@property (nonatomic,copy) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIButton * closeButton;              //@synthesize closeButton=_closeButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didReceiveAccessibilityInvalidation;
-(id)initWithThemeColor:(id)arg1 style:(unsigned long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(UIButton *)closeButton;
-(void)updateFont;
@end

