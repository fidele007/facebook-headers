/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBProfileWizardViewController.h>
#import <Facebook/FBProfilePictureUploadFlowControllerDelegate.h>
#import <Facebook/FBProfileVideoUploadFlowControllerDelegate.h>
#import <Facebook/FBProfileWizardPhotoUploadButtonViewDelegate.h>
#import <Facebook/FBTimelineProfilePictureViewDelegate.h>
#import <Facebook/FBProfileWizardProfilePictureAndCoverPhotoUpdateViewDelegate.h>

@class FBProfileWizardProfilePictureAndCoverPhotoUpdateView, FBProfilePictureUploadFlowController, FBProfileWizardCoverPhotoUpdateViewController, NSString;

@interface FBProfileWizardProfilePictureUpdateViewController : FBProfileWizardViewController <FBProfilePictureUploadFlowControllerDelegate, FBProfileVideoUploadFlowControllerDelegate, FBProfileWizardPhotoUploadButtonViewDelegate, FBTimelineProfilePictureViewDelegate, FBProfileWizardProfilePictureAndCoverPhotoUpdateViewDelegate> {

	FBProfileWizardProfilePictureAndCoverPhotoUpdateView* _wizardProfilePictureUpdateView;
	FBProfilePictureUploadFlowController* _uploadFlowController;
	FBProfileWizardCoverPhotoUpdateViewController* _coverPhotoController;
	BOOL _profilePicutreHasUpdated;
	BOOL _skipButtonTapped;

}

@property (nonatomic,readonly) FBProfilePictureUploadFlowController * uploadFlowController; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profileVideoWillUpload:(id)arg1 ;
-(void)profileVideoDidUploadWithServerVideoID:(id)arg1 uploadFlowController:(id)arg2 ;
-(void)profileVideoUploadDidFail:(id)arg1 uploadFlowController:(id)arg2 ;
-(void)_profilePictureViewReload:(id)arg1 ;
-(void)didTapSkip;
-(FBProfilePictureUploadFlowController *)uploadFlowController;
-(void)profilePictureWillChange:(id)arg1 ;
-(void)profilePictureDidChange:(id)arg1 ;
-(void)profilePictureFailChange:(id)arg1 ;
-(void)openProfilePhotoOrVideoForPerson:(id)arg1 uploadFlowController:(id)arg2 ;
-(void)didTapSelectFromAlbumButton:(id)arg1 ;
-(void)didTapSelectFromCameraRollButton:(id)arg1 ;
-(void)highResProfilePictureHasDownloaded;
-(void)profilePictureStartUploading;
-(void)goToNextStep;
-(id)initWithProfieWizardModel:(id)arg1 person:(id)arg2 session:(id)arg3 scenePath:(id)arg4 analyticsUUID:(id)arg5 currentStepIndex:(unsigned long long)arg6 toolbox:(id)arg7 ;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

