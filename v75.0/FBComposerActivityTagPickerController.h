/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBComposerActivityTagPickerViewControllerDelegate.h>
#import <Facebook/FBComposerDestinationNavigationListener.h>
#import <Facebook/FBPlacePickerViewControllerDelegate.h>
#import <Facebook/FBComposerExpressionPickerViewControllerDelegate.h>
#import <Facebook/FBComposerPickerController.h>
#import <Facebook/FBComposerCompositionStateChangedListener.h>

@protocol FBComposerUpdateHandler, FBComposerActivityTagPickerControllerDelegate;
@class FBActivitySharingViewController, NSString, FBComposerCompositionState, FBComposerExpressionPickerViewController, FBPlacePickerV2NearbyFetcher, FBPlacePickerBaseViewController, UIViewController, FBComposerActivityTagPickerViewController, FBUserSession, FBComposerActivityTagPickerModelController, FBNearbyPlace, FBComposerActivityPickerOpenType;

@interface FBComposerActivityTagPickerController : NSObject <FBComposerActivityTagPickerViewControllerDelegate, FBComposerDestinationNavigationListener, FBPlacePickerViewControllerDelegate, FBComposerExpressionPickerViewControllerDelegate, FBComposerPickerController, FBComposerCompositionStateChangedListener> {

	FBActivitySharingViewController* _activitySharingViewController;
	NSString* _actorFBID;
	id<FBComposerUpdateHandler> _composerUpdateHandler;
	FBComposerCompositionState* _compositionState;
	FBComposerExpressionPickerViewController* _expressionViewController;
	FBPlacePickerV2NearbyFetcher* _nearbyFetcher;
	FBPlacePickerBaseViewController* _placePicker;
	UIViewController* _presentableViewController;
	BOOL _shouldCloseParentDestination;
	FBComposerActivityTagPickerViewController* _tagPickerViewController;
	FBUserSession* _userSession;
	BOOL _shouldHideTabBar;
	id<FBComposerActivityTagPickerControllerDelegate> _delegate;
	FBComposerActivityTagPickerModelController* _prefetchController;
	FBNearbyPlace* _selectedPlace;
	FBComposerActivityPickerOpenType* _openType;

}

@property (assign,nonatomic,__weak) id<FBComposerActivityTagPickerControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) FBComposerActivityTagPickerModelController * prefetchController;                //@synthesize prefetchController=_prefetchController - In the implementation block
@property (nonatomic,retain) FBNearbyPlace * selectedPlace;                                                  //@synthesize selectedPlace=_selectedPlace - In the implementation block
@property (nonatomic,retain) FBComposerActivityPickerOpenType * openType;                                    //@synthesize openType=_openType - In the implementation block
@property (assign) BOOL shouldHideTabBar;                                                                    //@synthesize shouldHideTabBar=_shouldHideTabBar - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompositionStateChangedFromPreviousCompositionState:(id)arg1 toCurrentCompositionState:(id)arg2 ;
-(BOOL)placePickerDidCancel:(id)arg1 ;
-(void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4 ;
-(void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2 ;
-(void)placePickerDidRemoveCurrentPlace:(id)arg1 ;
-(FBNearbyPlace *)selectedPlace;
-(id)presentableViewControllerWithNavigationPayload:(id)arg1 ;
-(unsigned long long)popoverStyle;
-(CGSize)popoverContentSizeForOrientation:(long long)arg1 ;
-(void)dismissPopoverController;
-(void)_prefetchNearbyPlacesIfNecessary;
-(void)_activityTaggingCancelled;
-(BOOL)_hasUserTaggedPlace;
-(BOOL)_willPresentPlacePicker:(id)arg1 ;
-(void)_activityTaggingFinishedWithSelectedTaggedActivity:(id)arg1 willPresentPlacePicker:(BOOL)arg2 ;
-(void)_showPlacePickerForAssociatedPlaces:(id)arg1 ;
-(void)_activityTaggingFinishedWithClearedTaggedActivity;
-(void)_activityTaggingFinishedWithSelectedTaggedPlace:(id)arg1 location:(id)arg2 placeIsUserSelected:(BOOL)arg3 suggestedPhoto:(BOOL)arg4 ;
-(void)composerActivityPlacePickerDidSkip:(id)arg1 ;
-(void)composerActivityPlacePickerDidTapBack:(id)arg1 ;
-(void)_activityTaggingUpdatedWithSelectedTaggedActivity:(id)arg1 ;
-(void)_activityTaggingDidSelectSticker:(id)arg1 tabTitle:(id)arg2 ;
-(void)setPrefetchController:(FBComposerActivityTagPickerModelController *)arg1 ;
-(void)tagPickerViewControllerDidFinishWithActivity:(id)arg1 canceled:(BOOL)arg2 ;
-(void)tagPickerViewControllerDidFinishWithClearedCurrentActivity;
-(void)expressionPickerViewController:(id)arg1 finishedWithDidCancel:(BOOL)arg2 clearedCurrentActivity:(BOOL)arg3 ;
-(void)expressionPickerViewController:(id)arg1 finishedWithTaggableActivityComposition:(id)arg2 ;
-(void)expressionPickerViewController:(id)arg1 updatedWithTaggableActivityComposition:(id)arg2 ;
-(void)expressionPickerViewController:(id)arg1 selectedSticker:(id)arg2 tabTitle:(id)arg3 ;
-(void)setOpenType:(FBComposerActivityPickerOpenType *)arg1 ;
-(FBComposerActivityPickerOpenType *)openType;
-(FBComposerActivityTagPickerModelController *)prefetchController;
-(BOOL)shouldHideTabBar;
-(id)initWithUserSession:(id)arg1 nearbyFetcher:(id)arg2 updateHandler:(id)arg3 shouldCloseParentDestination:(BOOL)arg4 ;
-(void)setShouldHideTabBar:(BOOL)arg1 ;
-(void)setDelegate:(id<FBComposerActivityTagPickerControllerDelegate>)arg1 ;
-(id<FBComposerActivityTagPickerControllerDelegate>)delegate;
-(void)setSelectedPlace:(FBNearbyPlace *)arg1 ;
@end

