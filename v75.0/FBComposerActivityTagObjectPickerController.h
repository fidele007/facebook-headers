/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerActivityTagObjectPickerViewControllerDelegate.h>
#import <Facebook/FBComposerPickerController.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerUpdateHandler;
@class UIViewController, FBComposerCompositionState, FBUserSession, NSString;

@interface FBComposerActivityTagObjectPickerController : NSObject <FBComposerActivityTagObjectPickerViewControllerDelegate, FBComposerPickerController, FBComposerCompositionStateChangedListener> {

	UIViewController* _activityTagObjectPickerViewController;
	FBComposerCompositionState* _compositionState;
	id<FBComposerUpdateHandler> _updateHandler;
	FBUserSession* _userSession;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(id)presentableViewControllerWithNavigationPayload:(id)arg1 ;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(id)initWithUserSession:(id)arg1 updateHandler:(id)arg2 ;
-(void)composerActivityTagObjectPicker:(id)arg1 didPickTaggableActivity:(id)arg2 isFreeformEntry:(BOOL)arg3 ;
@end

