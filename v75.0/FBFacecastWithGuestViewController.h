/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBWebRTCEngineListener.h>
#import <Facebook/FBFacecastWithViewerViewDelegate.h>
#import <Facebook/FBFacecastWithAudioOnlyCameraDelegate.h>
#import <Facebook/RTCVideoCaptureSessionListener.h>

@protocol FBIntentHandler, FBFacecastWithGuestViewControllerDelegate;
@class FBUserSession, FBMemFeedStory, NSString, FBComposerPrivacySetting, FBCommunicationSoundEffect, FBMemVideo, FBFacecastWithGuestLogger, FBFacecastWithAudioOnlyCamera, FBTimer, FBFacecastWithGuestEligibilityChecker, FBFacecastWithExperimentContext, UIViewController, FBFacecastWithGuestView;

@interface FBFacecastWithGuestViewController : UIViewController <FBWebRTCEngineListener, FBFacecastWithViewerViewDelegate, FBFacecastWithAudioOnlyCameraDelegate, RTCVideoCaptureSessionListener> {

	FBUserSession* _session;
	FBMemFeedStory* _story;
	NSString* _broadcasterID;
	FBComposerPrivacySetting* _privacySetting;
	FBCommunicationSoundEffect* _inviteReceivedSound;
	NSString* _broadcasterName;
	id<FBIntentHandler> _intentHandler;
	FBMemVideo* _video;
	FBFacecastWithGuestLogger* _logger;
	FBFacecastWithAudioOnlyCamera* _cameraForAudioOnlyBroadcast;
	BOOL _isAudioOnly;
	FBTimer* _guestEligibilityCheckTimer;
	FBFacecastWithGuestEligibilityChecker* _eligibilityChecker;
	FBFacecastWithExperimentContext* _facecastWithExperimentContext;
	BOOL _hasInitializedConnectionToMWS;
	FBFacecastWithGuestInterruptionState _guestInterruptionState;
	UIViewController*<FBFacecastWithGuestViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) FBFacecastWithGuestView * view; 
@property (assign,nonatomic,__weak) UIViewController*<FBFacecastWithGuestViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL inGuestFlow; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEligibleToBeGuestInVideo:(id)arg1 session:(id)arg2 broadcasterID:(id)arg3 ;
-(void)checkAndRecordEligibilityToBeGuestBasedOnNetwork;
-(BOOL)inGuestFlow;
-(id)initWithSession:(id)arg1 story:(id)arg2 broadcasterID:(id)arg3 video:(id)arg4 delegate:(id)arg5 privacySetting:(id)arg6 broadcasterName:(id)arg7 intentHandler:(id)arg8 ;
-(BOOL)interstitialsHidden;
-(void)_processGuestName:(id)arg1 ;
-(void)callStarted:(id)arg1 ;
-(void)callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)callConnectionStatusChangedFromConnectionStatus:(id)arg1 toConnectionStatus:(id)arg2 forCall:(id)arg3 ;
-(void)callEnded:(id)arg1 reason:(unsigned long long)arg2 subreason:(id)arg3 remoteEnded:(BOOL)arg4 callSummary:(id)arg5 ;
-(void)callAbortedWithFailedDeviceRequest:(unsigned long long)arg1 ;
-(void)callTransitionAborted:(id)arg1 withFailedDeviceRequest:(unsigned long long)arg2 ;
-(void)callUpdatedParticipantsFromState:(id)arg1 toState:(id)arg2 ;
-(void)callUpdatedLoudestParticipant:(id)arg1 ;
-(void)callUpdatedPeerUsersInfoFromState:(id)arg1 toState:(id)arg2 ;
-(void)facecastWithGuestViewDidReceiveInvitation:(id)arg1 ;
-(void)facecastWithGuestViewDidDismissPermissionPrompt:(id)arg1 ;
-(void)facecastWithGuestViewDidTapLinkToMicrophoneAndCameraSettings:(id)arg1 ;
-(void)facecastWithGuestViewDidDismissGuestBroadcasting:(id)arg1 ;
-(void)facecastWithGuestViewDidTapConnectionLabelRefresh:(id)arg1 ;
-(void)facecastWithGuestViewDidTapConnectionLabelClose:(id)arg1 ;
-(void)facecastWithGuestViewDidTapShare:(id)arg1 ;
-(void)facecastWithGuestViewDidReturnToBroadcast:(id)arg1 ;
-(void)facecastWithGuestViewDidDeclineInvitation:(id)arg1 ;
-(void)facecastWithGuestViewDidAcceptInvitation:(id)arg1 ;
-(void)_setupEigibilityChecker;
-(BOOL)_currentlyInCall;
-(void)_cleanupGuestEligibilityCheckTimer;
-(void)recordGuestEligibility:(BOOL)arg1 reasonIfNotEligible:(id)arg2 ;
-(void)_setupTimerToCheckAndRecordEligibilityToBeGuestIfNeeded:(BOOL)arg1 ;
-(void)_exitGuestFlow;
-(void)setupCameraForAudioOnlyBroadcast;
-(BOOL)_isAbleToSendData;
-(BOOL)_isGuestLandscape;
-(void)setupAndStartAudioOnlyBroadcast;
-(void)_callChangedFromState:(id)arg1 toState:(id)arg2 ;
-(void)_onInterruptionStateChange;
-(void)_callEnded:(id)arg1 reason:(unsigned long long)arg2 remoteEnded:(BOOL)arg3 callSummary:(id)arg4 ;
-(void)_handleHangup;
-(void)_didFailToGetCameraOrMicrophoneAccess;
-(void)facecastWithAudioOnlyCamera:(id)arg1 didUpdateStaticImage:(id)arg2 ;
-(void)rtcVideoCaptureSessionStarted;
-(void)rtcVideoCaptureSessionEnded;
-(void)rtcVideoCaptureSessionInterruptionBegan;
-(void)rtcVideoCaptureSessionInterruptionEnded;
-(void)rtcVideoCaptureSessionCameraInterruptionBegan;
-(void)rtcVideoCaptureSessionCameraInterruptionEnded;
-(void)stopAudioOnly;
-(void)setDelegate:(UIViewController*<FBFacecastWithGuestViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(UIViewController*<FBFacecastWithGuestViewControllerDelegate>)delegate;
-(BOOL)shouldAutorotate;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)dismiss;
@end

