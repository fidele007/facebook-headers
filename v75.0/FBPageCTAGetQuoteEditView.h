/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBPageCTAGetQuoteEditViewDelegate;
@class UILabel, UIView, UIImageView;

@interface FBPageCTAGetQuoteEditView : UIView {

	UILabel* _formTitleLabel;
	UILabel* _editFormLabel;
	UIView* _backgroundView;
	UIImageView* _editFormIconImageView;
	id<FBPageCTAGetQuoteEditViewDelegate> _delegate;
	UILabel* _updatedLabel;
	UIImageView* _updatedIconImageView;

}

@property (nonatomic,retain) UILabel * updatedLabel;                          //@synthesize updatedLabel=_updatedLabel - In the implementation block
@property (nonatomic,retain) UIImageView * updatedIconImageView;              //@synthesize updatedIconImageView=_updatedIconImageView - In the implementation block
-(void)_didTapEditForm;
-(UILabel *)updatedLabel;
-(UIImageView *)updatedIconImageView;
-(id)initWithFormTitle:(id)arg1 delegate:(id)arg2 ;
-(void)showUpdatedStatusWithFormTitle:(id)arg1 ;
-(void)setUpdatedLabel:(UILabel *)arg1 ;
-(void)setUpdatedIconImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
