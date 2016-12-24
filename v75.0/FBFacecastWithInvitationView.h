/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBFacecastWithInvitationViewDelegate;
@class FBFacecastWithAvatarsView, UILabel, FBButton, FBFacecastPrivacyButton, NSString, PABlurView;

@interface FBFacecastWithInvitationView : UIView {

	FBFacecastWithAvatarsView* _avatarsView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UILabel* _privacyDescriptionLabel;
	FBButton* _declineButton;
	FBButton* _goLiveButton;
	FBFacecastPrivacyButton* _privacyButton;
	NSString* _hostProfileID;
	NSString* _guestProfileID;
	PABlurView* _blurView;
	NSString* _broadcasterName;
	BOOL _isLandscapeVideo;
	id<FBFacecastWithInvitationViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFacecastWithInvitationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * hostProfileID;                                       //@synthesize hostProfileID=_hostProfileID - In the implementation block
-(void)_setupAvatarsViewBasedOnOrientation;
-(void)didTapDeclineButton:(id)arg1 ;
-(void)_setupGoLiveButtonBasedOnOrientation;
-(void)didTapGoLiveButton:(id)arg1 ;
-(id)getPrivacyDescriptionLabelText:(id)arg1 ;
-(void)animateAvatars;
-(id)initWithHostProfileID:(id)arg1 guestProfileID:(id)arg2 selectedPrivacy:(id)arg3 broadcasterName:(id)arg4 isLandscapeVideo:(BOOL)arg5 ;
-(NSString *)hostProfileID;
-(void)setDelegate:(id<FBFacecastWithInvitationViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBFacecastWithInvitationViewDelegate>)delegate;
@end
