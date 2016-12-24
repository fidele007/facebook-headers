/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSearchNullStateRecommendationsControllerDelegate.h>
#import <Facebook/FBSearchNullStateCombinedEndpointControllerDelegate.h>
#import <Facebook/FBGraphSearchNullStateContentLoaderProtocol.h>

@protocol FBSearchNullStateCombinedEndpointControllerProtocol;
@class NSString, FBUserSession, FBSearchNullStateRecommendationsController, NSArray, NSAttributedString, NSDate;

@interface FBGraphSearchGeneralNullStateContentLoader : NSObject <FBSearchNullStateRecommendationsControllerDelegate, FBSearchNullStateCombinedEndpointControllerDelegate, FBGraphSearchNullStateContentLoaderProtocol> {

	FBUserSession* _session;
	id<FBSearchNullStateCombinedEndpointControllerProtocol> _mixedSuggestionsController;
	FBSearchNullStateRecommendationsController* _searchRecommendationsController;
	NSArray* _nullStateModules;
	NSAttributedString* _recentSearchesSectionTitle;
	NSAttributedString* _recommendationsSectionTitle;
	NSArray* _recentSearchesSuggestions;
	NSArray* _recommendations;
	NSDate* _lastRecentSearchesDownloadDate;
	NSDate* _lastRecommendationsRefreshDate;
	BOOL _hasEditableSearchHistory;
	BOOL _requestingRecentSearches;
	BOOL _requestingRecommendations;
	BOOL _suggestedSearchesRequireUpdate;
	unsigned long long _loaderType;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL isNullStateReady; 
@property (nonatomic,readonly) BOOL isNullStateLoading; 
@property (nonatomic,readonly) unsigned long long numberOfRecentSearches; 
@property (nonatomic,copy,readonly) NSString * namespaceForPerfLogging; 
-(void)loadNullStateFromCache:(BOOL)arg1 ;
-(BOOL)isNullStateReady;
-(id)nullStateModulesWithLoggingDataIsInitialAppearance:(BOOL)arg1 ;
-(void)clearAllNullState;
-(void)requestTailModuleAsScrollPositionsReachingEnd;
-(BOOL)isNullStateLoading;
-(NSString *)namespaceForPerfLogging;
-(void)logNullStateContent;
-(id)removedSuggestionsIfNeeded;
-(id)initWithSession:(id)arg1 type:(unsigned long long)arg2 ;
-(void)_requestRecentSearchesIfNeeded;
-(void)_requestCombinedEndpointContentIfNeeded;
-(void)_requestRecommendationsIfNeeded;
-(void)_insertToRecentSearches:(id)arg1 deduplicationPolicy:(unsigned long long)arg2 ;
-(BOOL)_hasRecentSearchesInNullState;
-(BOOL)_hasRecommendationsInNullState;
-(id)_recentSearchSuggestionFromSuggestion:(id)arg1 ;
-(void)_handleRecentSearchesResponse:(id)arg1 ;
-(BOOL)_isRecommendationsFresh;
-(unsigned long long)_recentSearchesModuleType;
-(BOOL)_isWithinTTL;
-(id)_logTextFromSuggestion:(id)arg1 ;
-(void)updateNullStateModulesWithRefreshedTopModule:(id)arg1 ;
-(void)updateSuggestedSearches;
-(void)onServiceStart;
-(void)onServiceStop;
-(void)onAppBecomeActive;
-(BOOL)shouldLoadFromDiskForSearchNullStateCombinedEndpointController:(id)arg1 ;
-(void)updateNullStateModules;
-(void)notifyLoadingDidFinish;
-(void)recordRequestStatusForPerfLoggerForEndpointName:(id)arg1 isFresh:(BOOL)arg2 lastResultsDate:(id)arg3 alreadyLoading:(BOOL)arg4 ;
-(void)notifyLoadingDidFail:(id)arg1 ;
-(void)nullStateLoadingFinished;
-(void)refreshCombinedEndpointSection;
-(void)recommendationsLoadedForViewer:(id)arg1 ;
-(void)recommendationsFailedToLoadWithError:(id)arg1 ;
-(void)reloadRecommendations;
-(void)insertToRecentSearches:(id)arg1 deduplicationPolicy:(unsigned long long)arg2 ;
-(BOOL)_isDuplicate:(id)arg1 and:(id)arg2 ;
-(void)insertToRecentSearches:(id)arg1 ;
-(id)recentSearchesModule;
-(id)initWithSession:(id)arg1 ;
-(unsigned long long)numberOfRecentSearches;
-(void)clearRecentSearches;
@end
