/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBPopoverControllerDelegate.h>
#import <Facebook/FBSimpleSearchViewControllerDelegate.h>
#import <Facebook/FBSearchResultsActivityListener.h>
#import <Facebook/FBSearchTypeaheadActivityListener.h>

@protocol FBSearchTextFieldProtocol, FBNavigationCoordinator;
@class FBUserSession, UIView, FBPopoverController, FBSimpleSearchViewController, FBGraphSearchInputViewController, FBSearchResultsViewController, UIViewController, NSString, NSAttributedString, FBSearchTypeaheadActivityListenerAnnouncer;

@interface FBSearchPopoverController : NSObject <FBPopoverControllerDelegate, FBSimpleSearchViewControllerDelegate, FBSearchResultsActivityListener, FBSearchTypeaheadActivityListener> {

	FBUserSession* _session;
	UIView* _hostView;
	UIView*<FBSearchTextFieldProtocol> _searchField;
	FBPopoverController* _popoverController;
	FBSimpleSearchViewController* _simpleSearchViewController;
	FBGraphSearchInputViewController* _graphSearchViewController;
	FBSearchResultsViewController* _resultsViewController;
	id<FBNavigationCoordinator> _navigationCoordinator;
	UIViewController* _originatingViewController;
	NSString* _cachedSearchQuery;
	NSAttributedString* _originalSearchFieldPlaceholderText;
	FBSearchTypeaheadActivityListenerAnnouncer* _graphSearchAnnouncer;
	BOOL _initiallyPresentingPopover;
	BOOL _searchTextWasCentered;
	BOOL _useAnimation;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setUseContentWidthForPopoverSize:(BOOL)arg1 ;
-(BOOL)fb_popoverControllerShouldDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)dismissPopoversAnimated:(BOOL)arg1 ;
-(BOOL)shouldRestoreSearchStateForViewController:(id)arg1 ;
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 searchField:(id)arg3 ;
-(BOOL)canPresentTypeaheadPopover;
-(void)presentTypeaheadWithVisibleViewController:(id)arg1 hostView:(id)arg2 ;
-(void)graphSearchContentWasUpdated;
-(void)graphSearchDidTapOnSuggestion:(id)arg1 position:(unsigned long long)arg2 ;
-(void)graphSearchDidTapOnRecentSearchEditButtonWithLogFilter:(id)arg1 ;
-(void)graphSearchWillOpenSearchResults;
-(void)resultsWithContext:(id)arg1 didReceiveClickOnNode:(id)arg2 atIndex:(long long)arg3 ;
-(BOOL)simpleSearchViewController:(id)arg1 needsToOpenURL:(id)arg2 ;
-(void)simpleSearchViewController:(id)arg1 needsToOpenSuggestion:(id)arg2 ;
-(void)simpleSearchViewController:(id)arg1 needsToOpenResultsViewController:(id)arg2 ;
-(void)simpleSearchViewControllerUpdatedContentSize:(id)arg1 ;
-(void)_statusBarFrameDidChangeNotification:(id)arg1 ;
-(void)_highlightSearchField;
-(CGSize)_popoverInitialSize;
-(CGPoint)_typeaheadPopoverPointWithtypeaheadSize:(CGSize)arg1 ;
-(double)_maxHeightForTypeaheadPopover;
-(CGSize)_contentSizeForTypeaheadPopoverWithMaxHeight:(double)arg1 ;
-(void)_updateContentSizeForTypeaheadPopoverWithSize:(CGSize)arg1 ;
-(CGSize)_graphSearchTypeaheadNullStatePopoverSize;
-(CGSize)_simpleSearchTypeaheadNullStatePopoverSize;
-(void)_synchronizePopoverSizeIfNeeded;
-(void)_resetSearchField;
-(void)_resetSearchStackState;
-(CGPoint)_resultsPopoverPoint;
-(void)_adjustPopoverPoint;
-(CGSize)_simpleSearchResultsPopoverSize;
-(void)_dismissTypeaheadPopoverAnimated;
-(void)_updateContentSizeForTypeaheadPopover;
-(void)_restoreTypeaheadAsResultsAreDismissed;
-(CGSize)_graphSearchMaxTypeaheadPopoverSize;
-(CGSize)_defaultTypeaheadPopoverSize;
-(double)_maxPopoverWidth;
-(void)dealloc;
@end

