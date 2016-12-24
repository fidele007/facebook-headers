/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBFacecastReactionsInputViewDelegate;
@class NSMutableArray, FBCrowdNoiseReactionButton, UIView;

@interface FBFacecastReactionsInputView : UIView {

	NSMutableArray* _faceButtons;
	FBCrowdNoiseReactionButton* _selectedFaceButton;
	UIView* _selectionIndicator;
	id<FBFacecastReactionsInputViewDelegate> _delegate;

}
-(void)cancelAllReactionButtonEvents;
-(void)_didPushButton:(id)arg1 ;
-(void)_didReleaseButton:(id)arg1 ;
-(void)_didCommitButton:(id)arg1 ;
-(void)_layoutSelectionIndicatorWithSelectedState:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 supportedReactionsMetadata:(id)arg3 viewerFeedbackReactionInfo:(id)arg4 delegate:(id)arg5 ;
-(id)reactionButtonAtIndex:(unsigned long long)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
