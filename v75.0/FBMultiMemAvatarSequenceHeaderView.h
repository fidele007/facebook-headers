/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMultiMemAvatarSequenceHeaderDelegate;
@class UIView, UIScrollView, FBUserSession, NSArray;

@interface FBMultiMemAvatarSequenceHeaderView : UIView {

	long long _numberOfSections;
	UIView* _barIndicator;
	UIScrollView* _headerContainerView;
	FBUserSession* _session;
	NSArray* _buttons;
	UIView* _indicatorBackgroundView;
	UIView* _indicatorBar;
	UIView* _leftIndicatorClipView;
	UIView* _rightIndicatorClipView;
	BOOL _updateStartedWithBarOffscreen;
	BOOL _updateBarInResponseToContainerScroll;
	id<FBMultiMemAvatarSequenceHeaderDelegate> _delegate;
	double _indicatorProgress;

}

@property (assign,nonatomic,__weak) id<FBMultiMemAvatarSequenceHeaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double indicatorProgress;                                                //@synthesize indicatorProgress=_indicatorProgress - In the implementation block
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(void)willBeginUpdatingBarPositionFromScroll;
-(void)didEndUpdatingBarPositionFromScroll;
-(void)setIndicatorProgress:(double)arg1 ;
-(void)updateCountText:(long long)arg1 forItemAtIndex:(long long)arg2 ;
-(void)updateButtonFrames;
-(void)updateIndicatorFrames;
-(id)_createHeaderButtonAtIndex:(long long)arg1 config:(id)arg2 ;
-(CGRect)_indicatorBarFrameForButtonIndex:(long long)arg1 ;
-(double)indicatorProgress;
-(void)setDelegate:(id<FBMultiMemAvatarSequenceHeaderDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMultiMemAvatarSequenceHeaderDelegate>)delegate;
-(void)buttonTapped:(id)arg1 ;
@end

