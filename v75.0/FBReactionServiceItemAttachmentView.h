/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBReactionServiceItemAttachmentViewDelegate;
@class FBRichTextView, UIImageView, UIView, UIButton, FBMemProductItem;

@interface FBReactionServiceItemAttachmentView : UIView {

	FBRichTextView* _nameLabel;
	FBRichTextView* _priceLabel;
	UIImageView* _chevronView;
	UIView* _topSeparatorView;
	UIButton* _button;
	FBMemProductItem* _productItem;
	BOOL _hasPrice;
	id<FBReactionServiceItemAttachmentViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBReactionServiceItemAttachmentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithProductItem:(id)arg1 ;
-(void)itemUpdated:(id)arg1 ;
-(void)attachmentTapped;
-(void)setDelegate:(id<FBReactionServiceItemAttachmentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBReactionServiceItemAttachmentViewDelegate>)delegate;
@end

