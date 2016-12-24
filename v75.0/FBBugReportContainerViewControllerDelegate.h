/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBBugReportContainerViewControllerDelegate <NSObject>
@required
-(void)didDismissBugReportingFlow;
-(void)sendGeneralFeedback:(id)arg1 successBlock:(/*^block*/id)arg2;
-(void)presentPhotoPermissionsRequest;
-(void)setChosenCategory:(id)arg1;
-(id)chosenCategory;
-(void)resetNumReportAfterShakeOn;
-(void)setShakeToReportEnabled;
-(void)setShakeToReportDisabled;
-(void)presentHelpCenterForAbusiveContent;
-(void)presentHelpCenterForPrivacy;
-(void)presentHelpCenterForGeneralFeedback;
-(void)sendBugWithDescription:(id)arg1 category:(id)arg2 successBlock:(/*^block*/id)arg3;
-(void)setBugDescription:(id)arg1;
-(id)bugDescription;
-(void)willChangeCategory;
-(void)dismissBugComposerAndAllowUserToTakeScreenshot;
-(void)dismissBugComposerAndStartVideoRecording;
-(void)incrementNumCancelIfShakeOn;
-(void)resetNumCancelAfterShakeOff;
-(void)incrementNumReportIfShakeOff;

@end
