/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBFacecastWithViewDelegate.h>
#import <Facebook/FBFacecastWithGuestExitViewDelegate.h>
#import <Facebook/FBFacecastWithInvitationViewDelegate.h>

@protocol FBFacecastWithViewProtocol, FBFacecastWithViewerViewDelegate;
@class FBUserSession, NSString, UIView, FBFacecastWithInvitationView, FBFacecastWithGuestExitView, FBComposerPrivacySetting, FBMemVideo, SPAccessPhotoPermissionPromptView, FBWebRTCPeerVideoView;

@interface FBFacecastWithGuestView : UIView <FBFacecastWithViewDelegate, FBFacecastWithGuestExitViewDelegate, FBFacecastWithInvitationViewDelegate> {

	FBUserSession* _session;
	NSString* _broadcasterID;
	UIView*<FBFacecastWithViewProtocol> _withView;
	FBFacecastWithInvitationView* _invitationView;
	FBFacecastWithGuestExitView* _exitView;
	FBComposerPrivacySetting* _privacySetting;
	NSString* _broadcasterName;
	FBMemVideo* _video;
	SPAccessPhotoPermissionPromptView* _cameraPermissionPromptView;
	FBWebRTCPeerVideoView* _cameraView;
	id<FBFacecastWithViewerViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFacecastWithViewerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL guestEnabled; 
@property (assign,nonatomic) BOOL invitationHidden; 
@property (assign,nonatomic) BOOL exitViewHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGuestEnabled:(BOOL)arg1 ;
-(void)dismissConnectionLabel;
-(void)presentConnectionLabelForUser:(id)arg1 state:(unsigned long long)arg2 ;
-(void)setGuestName:(id)arg1 ;
-(void)setUpWebRTCViews;
-(void)facecastWithViewDidTapGuestXButton:(id)arg1 ;
-(void)facecastWithViewDidTapConnectionLabelRefresh:(id)arg1 ;
-(void)facecastWithViewDidTapGuestCameraFlipButton:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)facecastWithViewDidTapConnectionLabelClose:(id)arg1 ;
-(void)configureViewsForAudioOnlyWithPlaceholder:(id)arg1 ;
-(void)configureViewsForVideo;
-(void)_refreshBasedOnOrientation;
-(void)_didTapLinkToMicrophoneAndCameraSettings;
-(void)_didClosePermissionView;
-(void)facecastWithGuestExitViewDidTapReturn:(id)arg1 ;
-(void)facecastWithGuestExitViewDidTapShare:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 broadcasterID:(id)arg2 video:(id)arg3 session:(id)arg4 privacySetting:(id)arg5 broadcasterName:(id)arg6 ;
-(void)setInvitationHidden:(BOOL)arg1 ;
-(BOOL)invitationHidden;
-(void)setExitViewHidden:(BOOL)arg1 ;
-(BOOL)exitViewHidden;
-(void)showPermissionPrompt;
-(BOOL)permissionsPromptViewHidden;
-(void)invitationViewDidTapDecline:(id)arg1 ;
-(void)invitationViewDidTapGoLive:(id)arg1 ;
-(BOOL)guestEnabled;
-(void)setDelegate:(id<FBFacecastWithViewerViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<FBFacecastWithViewerViewDelegate>)delegate;
@end

