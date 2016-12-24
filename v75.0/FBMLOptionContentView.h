/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBMLOptionContentViewResponder;
@class UIButton, UIImageView, UILabel, NSDictionary;

@interface FBMLOptionContentView : UIView {

	UIButton* _button;
	UIImageView* _imageView;
	UIImageView* _chevronView;
	UILabel* _label;
	NSDictionary* _labelAttributes;
	id<FBMLOptionContentViewResponder> _responder;

}

@property (assign,nonatomic,__weak) id<FBMLOptionContentViewResponder> responder;              //@synthesize responder=_responder - In the implementation block
-(void)_didTapCancel:(id)arg1 ;
-(void)_didTapButton:(id)arg1 ;
-(id)initWithImage:(id)arg1 prompt:(id)arg2 ;
-(void)_didTapDown:(id)arg1 ;
-(void)layoutSubviews;
-(void)setResponder:(id<FBMLOptionContentViewResponder>)arg1 ;
-(id<FBMLOptionContentViewResponder>)responder;
-(void)_setHighlighted:(BOOL)arg1 ;
@end

