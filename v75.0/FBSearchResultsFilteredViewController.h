/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBSearchResultsActivityListener.h>
#import <Facebook/FBSearchResultsPilltersBarViewControllerDelegate.h>
#import <Facebook/FBSearchResultsSERPViewControllerProtocol.h>

@protocol FBSearchResultsSERPViewControllerProtocol;
@class FBSearchResultsAnnouncers, FBSearchResultsPilltersViewController, UIViewController, NSString, FBSerpConfig, NSDictionary, UIScrollView;

@interface FBSearchResultsFilteredViewController : UIViewController <FBSearchResultsActivityListener, FBSearchResultsPilltersBarViewControllerDelegate, FBSearchResultsSERPViewControllerProtocol> {

	FBSearchResultsAnnouncers* _announcers;
	FBSearchResultsPilltersViewController* _pilltersViewController;
	UIViewController*<FBSearchResultsSERPViewControllerProtocol> _SERPViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long resultType; 
@property (nonatomic,copy,readonly) NSString * resultsSessionID; 
@property (nonatomic,readonly) FBSerpConfig * serpConfig; 
@property (nonatomic,copy,readonly) NSString * analyticsModule; 
@property (nonatomic,copy,readonly) NSDictionary * analyticsExtras; 
@property (nonatomic,readonly) UIScrollView * contentScrollView; 
@property (nonatomic,copy,readonly) NSString * verticalToLog; 
@property (nonatomic,copy,readonly) NSString * postSearchIntentLog; 
@property (nonatomic,copy,readonly) NSString * resultsSessionLoggingUnitId; 
@property (getter=isFocused,nonatomic,readonly) BOOL focused; 
+(BOOL)_shouldShowPilltersBarForFilterStyle:(unsigned long long)arg1 ;
-(NSString *)analyticsModule;
-(NSDictionary *)analyticsExtras;
-(NSString *)resultsSessionID;
-(NSString *)verticalToLog;
-(NSString *)postSearchIntentLog;
-(NSString *)resultsSessionLoggingUnitId;
-(id)currentFilterTypeSets;
-(BOOL)supportMapToggleButton;
-(BOOL)isMapButtonEnabled;
-(id)titleForMapToggleButton;
-(void)didTapOnMapButton;
-(void)resultsDidReceiveInitialContent:(id)arg1 ;
-(FBSerpConfig *)serpConfig;
-(id)filteredSemantic;
-(void)loadHeadIfEmpty;
-(BOOL)_shouldShowPilltersBar;
-(void)subscribeForInitialContentReceiveEvent;
-(void)applyFilterModifiedStates:(id)arg1 ;
-(void)pilltersBarViewController:(id)arg1 applyFiltersWithModifiedStates:(id)arg2 ;
-(void)setNeedsToYieldImpressionWithSource:(id)arg1 ;
-(void)startEarlyLoad;
-(void)flushImpressionData;
-(id)lastGraphSearchQuery;
-(void)setHostViewControllerForSurvey:(id)arg1 ;
-(id)filtersTitle;
-(id)downloaderFilters;
-(unsigned long long)filtersColorScheme;
-(void)applyFilterChangeset:(id)arg1 expectedFilters:(id)arg2 ;
-(id)newFilterableControllerWithFiltersChangeset:(id)arg1 expectedFilters:(id)arg2 ;
-(id)newReloadedControllerWithQueryRewriteModel:(id)arg1 ;
-(void)notifyFocused;
-(void)notifyUnfocused;
-(id)initWithSERPViewController:(id)arg1 userSession:(id)arg2 scenePath:(id)arg3 announcers:(id)arg4 ;
-(BOOL)isFocused;
-(void)viewWillLayoutSubviews;
-(UIScrollView *)contentScrollView;
-(void)viewDidLoad;
-(unsigned long long)resultType;
@end

