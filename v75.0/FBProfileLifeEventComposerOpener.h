/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMLESuggestionViewControllerDelegate.h>
#import <Facebook/FBComposerAvatarPickerControllerDelegate.h>
#import <Facebook/FBPlacePickerViewControllerDelegate.h>

@protocol FBNavigationCoordinator, FBComposerFlowDelegate;
@class FBUserSession, NSString, FBComposerAvatarPickerController, FBMLESuggestion, FBComposerEventDate, UIView, NSDictionary, UIViewController, FBEventsAndMLEPlacePickerViewController, NSNumber;

@interface FBProfileLifeEventComposerOpener : NSObject <FBMLESuggestionViewControllerDelegate, FBComposerAvatarPickerControllerDelegate, FBPlacePickerViewControllerDelegate> {

	FBUserSession* _session;
	NSString* _targetID;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBComposerAvatarPickerController* _avatarPicker;
	FBMLESuggestion* _selectedLifeEvent;
	FBMLESuggestion* _customLifeEvent;
	FBComposerEventDate* _earliestDateAllowed;
	UIView* _sourceView;
	NSDictionary* _mleTypeToTitle;
	UIViewController* _simplifiedAvatarPickerViewController;
	FBEventsAndMLEPlacePickerViewController* _placePickerViewController;
	FBComposerEventDate* _defaultEventDate;
	id<FBComposerFlowDelegate> _composerFlowDelegate;
	NSNumber* _preFilledYear;

}

@property (nonatomic,retain) NSNumber * preFilledYear;              //@synthesize preFilledYear=_preFilledYear - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)showAvatarPickerFromSourceView:(id)arg1 withAuthor:(id)arg2 withPublishTarget:(id)arg3 ;
-(void)_presentPlacePicker;
-(void)_openLifeEventComposerWithBootstrapContent:(id)arg1 startingStyleContext:(id)arg2 sourceView:(id)arg3 ;
-(void)_updateSelectedLifeEventWithTitle:(id)arg1 ;
-(BOOL)placePickerDidCancel:(id)arg1 ;
-(void)lifeEventPicker:(id)arg1 didFinishWith:(id)arg2 schoolType:(id)arg3 earliestDateAllowed:(id)arg4 ;
-(void)lifeEventPickerDidCancel:(id)arg1 ;
-(void)avatarPickerControllerDidFinishCanceled:(BOOL)arg1 withSelection:(id)arg2 ;
-(void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4 ;
-(void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2 ;
-(void)placePickerDidRemoveCurrentPlace:(id)arg1 ;
-(id)initWithSession:(id)arg1 targetID:(id)arg2 navigationCoordinator:(id)arg3 composerFlowDelegate:(id)arg4 ;
-(void)showLifeEventSuggestionsFromSourceView:(id)arg1 composerSourceType:(id)arg2 composerContentOrigin:(id)arg3 ;
-(void)avatarPickerControllerPopoverDidDismiss;
-(NSNumber *)preFilledYear;
-(void)setPreFilledYear:(NSNumber *)arg1 ;
@end

