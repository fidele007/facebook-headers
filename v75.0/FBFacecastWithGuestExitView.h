/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBFacecastWithGuestExitViewDelegate;
@class FBFacecastWithAvatarsView, UILabel, FBFacecastPrivacyButton, FBButton, PABlurView;

@interface FBFacecastWithGuestExitView : UIView {

	FBFacecastWithAvatarsView* _avatarsView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _availablityLabel;
	FBFacecastPrivacyButton* _privacyButton;
	FBButton* _returnButton;
	FBButton* _shareButton;
	PABlurView* _blurView;
	id<FBFacecastWithGuestExitViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFacecastWithGuestExitViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapShareButton:(id)arg1 ;
-(void)_didTapReturnButton:(id)arg1 ;
-(id)initWithHostProfileID:(id)arg1 guestProfileID:(id)arg2 selectedPrivacy:(id)arg3 broadcasterName:(id)arg4 ;
-(void)animateAvatars;
-(void)setDelegate:(id<FBFacecastWithGuestExitViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBFacecastWithGuestExitViewDelegate>)delegate;
@end
