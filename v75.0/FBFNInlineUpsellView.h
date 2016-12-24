/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBFNFacepileViewDataSource, FBFNInlineUpsellViewDelegate;
@class UIButton, FBFNFacepileView, FBWebImageView, FBRichTextView;

@interface FBFNInlineUpsellView : UIView {

	id<FBFNFacepileViewDataSource> _facepileViewDataSource;
	UIButton* _actionButton;
	UIButton* _closeButton;
	FBFNFacepileView* _facepileView;
	FBWebImageView* _noFriendsImageView;
	FBRichTextView* _titleTextView;
	id<FBFNInlineUpsellViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFNInlineUpsellViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCloseButton;
-(id)initWithFacepileViewDataSource:(id)arg1 hasCloseButton:(BOOL)arg2 ;
-(void)_tapActionButton;
-(CGSize)_getTextSizeForNoFacepileView:(CGSize)arg1 ;
-(CGSize)_getButtonSizeForNoFacepileView:(CGSize)arg1 ;
-(void)setDelegate:(id<FBFNInlineUpsellViewDelegate>)arg1 ;
-(void)reloadData;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBFNInlineUpsellViewDelegate>)delegate;
@end
