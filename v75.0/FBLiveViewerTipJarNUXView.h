/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBLiveViewerTipJarNUXViewDelegate;
@class FBUserSession, FBButtonWithExtendedTapTarget, FBRichLabel, FBNetworkImageView, UITapGestureRecognizer;

@interface FBLiveViewerTipJarNUXView : UIView {

	FBUserSession* _session;
	FBButtonWithExtendedTapTarget* _dismissButton;
	FBRichLabel* _titleLabel;
	FBRichLabel* _subtitleLabel;
	FBNetworkImageView* _leftImageView;
	FBNetworkImageView* _rightImageView;
	FBNetworkImageView* _loveButtonView;
	UITapGestureRecognizer* _tapGestureRecognizer;
	id<FBLiveViewerTipJarNUXViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLiveViewerTipJarNUXViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapDismissButton:(id)arg1 ;
-(void)_didTapOnLoveButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ownerName:(id)arg3 delegate:(id)arg4 ;
-(void)setDelegate:(id<FBLiveViewerTipJarNUXViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBLiveViewerTipJarNUXViewDelegate>)delegate;
@end

