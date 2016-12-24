/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBAdPaymentsLearnMoreFooterViewDelegate;
@class UIImageView, FBRichTextView;

@interface FBAdPaymentsLearnMoreFooterView : UIView {

	UIImageView* _iconView;
	FBRichTextView* _textView;
	id<FBAdPaymentsLearnMoreFooterViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAdPaymentsLearnMoreFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didTapOnLearnMoreLink:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBAdPaymentsLearnMoreFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBAdPaymentsLearnMoreFooterViewDelegate>)delegate;
@end
