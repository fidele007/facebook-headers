/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBComposerAudiencePickerController.h>

@protocol FBComposerAudiencePickerControllerDelegate;
@class FBUserSession, FBPickerViewController, FBPrivacyPickerUpdateListenerAnnouncer, NSString;

@interface FBPrivacyPickerViewController : UIViewController <FBComposerAudiencePickerController> {

	FBUserSession* _session;
	FBPickerViewController* _pickerController;
	FBPrivacyPickerUpdateListenerAnnouncer* _updateAnnouncer;
	id<FBComposerAudiencePickerControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBComposerAudiencePickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCancel:(id)arg1 ;
-(void)_didTapDone:(id)arg1 ;
-(void)showContentState;
-(void)configureWithAvailablePrivacySettings:(id)arg1 selectedAudience:(id)arg2 showTagExpansionOptions:(BOOL)arg3 ;
-(void)activateFBComposerAudienceDataSourceWithTaggableCollection:(id)arg1 ;
-(void)availablePrivacySettingsChanged:(id)arg1 audienceTouchedByUser:(BOOL)arg2 ;
-(void)compositionAudienceChanged:(id)arg1 ;
-(void)taggedAndMentionedUsersChanged:(id)arg1 ;
-(void)pickerControllerWasDismissedByTappingOutsidePopover;
-(void)toggleTagExpansion:(id)arg1 withPrivacy:(id)arg2 ;
-(void)setDelegate:(id<FBComposerAudiencePickerControllerDelegate>)arg1 ;
-(id<FBComposerAudiencePickerControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
@end

