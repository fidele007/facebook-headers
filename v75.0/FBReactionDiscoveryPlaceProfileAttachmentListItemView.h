/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, FBRichTextView, FBReactionSinglePlaceDetailsView, UIView, FBReactionControlAlphaChangeOnHighlight;

@interface FBReactionDiscoveryPlaceProfileAttachmentListItemView : UIControl {

	UIImageView* _savedImageView;
	FBRichTextView* _titleView;
	FBRichTextView* _subtitleView;
	FBReactionSinglePlaceDetailsView* _detailView;
	UIView* _imageView;
	UIView* _separator;
	FBReactionControlAlphaChangeOnHighlight* _highlightControl;
	BOOL _isLast;
	BOOL _isSaved;
	UIEdgeInsets _insets;

}

@property (assign,nonatomic) BOOL isLast;                      //@synthesize isLast=_isLast - In the implementation block
@property (assign,nonatomic) BOOL isSaved;                     //@synthesize isSaved=_isSaved - In the implementation block
@property (assign,nonatomic) UIEdgeInsets insets;              //@synthesize insets=_insets - In the implementation block
+(id)createAccessibilityStringForRestaurantWithTitle:(id)arg1 subtitle:(id)arg2 starRating:(id)arg3 priceRange:(id)arg4 placeOpenStatus:(id)arg5 ;
-(BOOL)isLast;
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 subtitle:(id)arg3 priceRange:(id)arg4 placeOpenStatus:(id)arg5 starRating:(id)arg6 imageView:(id)arg7 ;
-(void)setIsLast:(BOOL)arg1 ;
-(void)setIsSaved:(BOOL)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)removeTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(UIEdgeInsets)insets;
-(void)setInsets:(UIEdgeInsets)arg1 ;
-(BOOL)isSaved;
@end

