/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerAudiencePickerControllerDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBComposerPickerController.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerAudiencePickerController, FBComposerUpdateHandler;
@class FBComposerCompositionState, UIViewController, FBComposerMutableTaggableCollectionProvider, FBComposerSelectablePrivacy, FBUserSession, NSString;

@interface FBComposerPrivacySelectionFlowController : NSObject <FBComposerAudiencePickerControllerDelegate, FBPopoverControllerDelegate, FBComposerPickerController, FBComposerCompositionStateChangedListener> {

	FBComposerCompositionState* _currentCompositionState;
	UIViewController*<FBComposerAudiencePickerController> _pickerController;
	FBComposerMutableTaggableCollectionProvider* _mutableTaggableCollectionProvider;
	FBComposerSelectablePrivacy* _selectablePrivacy;
	FBUserSession* _userSession;
	id<FBComposerUpdateHandler> _updateHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(id)presentableViewControllerWithNavigationPayload:(id)arg1 ;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(void)audiencePickerControllerDidTapCancelNavigationButton:(id)arg1 ;
-(void)audiencePickerControllerDidTapDoneNavigationButton:(id)arg1 finishedWithAvailablePrivacySettings:(id)arg2 selectedAudience:(id)arg3 ;
-(void)audiencePickerController:(id)arg1 changedWithAvailablePrivacySettings:(id)arg2 selectedAudience:(id)arg3 ;
-(void)audiencePickerController:(id)arg1 userDidMakeSelection:(id)arg2 shouldDismiss:(BOOL)arg3 ;
-(id)initWithUserSession:(id)arg1 updateHandler:(id)arg2 mutableTaggableCollectionProvider:(id)arg3 ;
-(void)dealloc;
@end

