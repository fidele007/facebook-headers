/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@protocol FBPlaceMenuItemViewDelegate;
@class UIView, FBRichTextView, UIButton, FBMemPageProduct;

@interface FBPlaceMenuListItemView : UITableViewCell {

	UIView* _bottomSeparator;
	FBRichTextView* _nameLabel;
	FBRichTextView* _descriptionLabel;
	FBRichTextView* _socialLabel;
	UIButton* _likeButton;
	FBMemPageProduct* _productItem;
	BOOL _showsBottomSeparator;
	id<FBPlaceMenuItemViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPlaceMenuItemViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL showsBottomSeparator;                                    //@synthesize showsBottomSeparator=_showsBottomSeparator - In the implementation block
-(void)itemUpdated:(id)arg1 ;
-(void)didTapLikeButton;
-(double)_availableTextWidth;
-(void)_configSocialContext;
-(id)initWithFrame:(CGRect)arg1 shouldShowAction:(BOOL)arg2 ;
-(double)calculateRowHeight;
-(void)setDelegate:(id<FBPlaceMenuItemViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBPlaceMenuItemViewDelegate>)delegate;
-(void)setShowsBottomSeparator:(BOOL)arg1 ;
-(BOOL)showsBottomSeparator;
-(void)setProduct:(id)arg1 ;
@end
