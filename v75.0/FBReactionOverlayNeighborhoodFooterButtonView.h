/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBReactionOverlayFooterViewDelegate;
@class UIControl, UILabel;

@interface FBReactionOverlayNeighborhoodFooterButtonView : UIView {

	UIControl* _neighborhoodButton;
	UILabel* _neighborhoodLabel;
	id<FBReactionOverlayFooterViewDelegate> _delegate;

}

@property (nonatomic,retain) UIControl * neighborhoodButton;                                       //@synthesize neighborhoodButton=_neighborhoodButton - In the implementation block
@property (nonatomic,retain) UILabel * neighborhoodLabel;                                          //@synthesize neighborhoodLabel=_neighborhoodLabel - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionOverlayFooterViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didPressButton;
-(id)_createButtonWithAction:(SEL)arg1 ;
-(id)_createLabelWithText:(id)arg1 ;
-(void)_layoutButton:(id)arg1 label:(id)arg2 ;
-(CGSize)_labelSize:(id)arg1 forWidth:(double)arg2 ;
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 neighborhoodName:(id)arg3 ;
-(UIControl *)neighborhoodButton;
-(void)setNeighborhoodButton:(UIControl *)arg1 ;
-(UILabel *)neighborhoodLabel;
-(void)setNeighborhoodLabel:(UILabel *)arg1 ;
-(void)setDelegate:(id<FBReactionOverlayFooterViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBReactionOverlayFooterViewDelegate>)delegate;
@end

