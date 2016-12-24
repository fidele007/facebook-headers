/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>

@protocol FBSideFeedActionableListCellContentViewDelegate;
@class FBItemView_DEPRECATED, UIButton, FBRichTextView, NSString;

@interface FBSideFeedActionableListCellContentView : UIView <FBAccessibilityInvalidationEventsListener> {

	FBItemView_DEPRECATED* _summaryView;
	UIButton* _button;
	FBRichTextView* _secondarySubtitle;
	FBRichTextView* _successfulSecondarySubtitle;
	BOOL _showSuccessfulSubtitle;
	unsigned long long _buttonType;
	UIButton* _hideButton;
	BOOL _canShowHideButton;
	unsigned long long _index;
	id<FBSideFeedActionableListCellContentViewDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long index;                                                         //@synthesize index=_index - In the implementation block
@property (assign,nonatomic,__weak) id<FBSideFeedActionableListCellContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)heightForTitle:(id)arg1 subtitle:(id)arg2 secondarySubtitle:(id)arg3 successfulSecondarySubtitle:(id)arg4 constrainedSize:(CGSize)arg5 ;
+(id)attributedProfileTitleForString:(id)arg1 ;
+(id)attributedProfileSubtitleForString:(id)arg1 useSuccessfulColor:(BOOL)arg2 ;
+(CGSize)bottomSizeWithSecondarySubtitle:(id)arg1 successfulSecondarySubtitle:(id)arg2 constrainedSize:(CGSize)arg3 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)didReceiveFontInvalidation;
-(void)setTitle:(id)arg1 subtitle:(id)arg2 secondarySubtitle:(id)arg3 successfulSecondarySubtitle:(id)arg4 thumbnailURL:(id)arg5 actionButtonGlyph:(unsigned long long)arg6 actionButtonText:(id)arg7 actionWasSuccessful:(BOOL)arg8 showSuccessfulSubtitle:(BOOL)arg9 showHideButton:(BOOL)arg10 ;
-(void)_O_hoverBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)_O_hoverEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_didTapActionButton:(id)arg1 ;
-(void)_didTapHideButton:(id)arg1 ;
-(CGSize)_bottomViewSize;
-(void)bounceButton;
-(void)animateSecondarySubtitleShowingSuccessfulSubtitle:(BOOL)arg1 ;
-(void)setDelegate:(id<FBSideFeedActionableListCellContentViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBSideFeedActionableListCellContentViewDelegate>)delegate;
-(unsigned long long)index;
-(void)setIndex:(unsigned long long)arg1 ;
@end

