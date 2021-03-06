/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBFeedAwesomizerProfileListCardViewControllerListener.h>

@class FBFeedAwesomizerCardAnalyticInfo, NSDate, NSMutableSet, NSMutableOrderedSet, NSMutableArray, NSString;

@interface FBFeedAwesomizerProfileListCardLogger : NSObject <FBFeedAwesomizerProfileListCardViewControllerListener> {

	long long _cardIdentifier;
	FBFeedAwesomizerCardAnalyticInfo* _analyticInfo;
	BOOL _profileSelectionAnimationsEnabled;
	NSDate* _cardOpenDate;
	double _maxContentOffsetYReached;
	NSMutableSet* _profilesThatHaveAppeared;
	NSDate* _lastTimeSpentTimeMarker;
	double _cardTimeSpent;
	double _learnMoreTimeSpent;
	BOOL _isLearnMoreOpen;
	NSMutableOrderedSet* _selectedProfiles;
	NSMutableOrderedSet* _unselectedProfiles;
	NSMutableArray* _tappedProfiles;
	unsigned long long _searchtappedCount;
	double _searchViewTimeSpent;
	double _searchLoadingTimeTaken;
	NSDate* _searchLastTimeSpentTimeMarker;
	BOOL _searchLoadingFinished;
	NSMutableArray* _tappedProfilesInSearch;
	NSString* _analyticsModule;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithProfileListCardViewControllerListenerAnnouncer:(id)arg1 analyticsModule:(id)arg2 ;
-(void)setAnalyticsModule:(id)arg1 ;
-(void)fb_applicationDidBecomeActive;
-(void)fb_applicationWillResignActive;
-(void)addToCardTimeSpent;
-(void)resetLastTimeSpentMarker;
-(void)addToLearnMoreTimeSpent;
-(void)addToSearchLoadingTimeTaken;
-(void)addToSearchTimeSpent;
-(double)profileModificationCount;
-(double)cardTotalTimeSpent;
-(void)cardWillOpenWithIdentifier:(long long)arg1 analyticInfo:(id)arg2 profileSelectionAnimationsEnabled:(BOOL)arg3 ;
-(void)cardWillCloseWithProfileProviderAnalyticInfo:(id)arg1 ;
-(void)learnMorePageWillOpen;
-(void)learnMorePageWillClose;
-(void)profileAtIndexWillAppear:(long long)arg1 ;
-(void)profileAtIndexWasOptimisticallySelected:(long long)arg1 inMode:(id)arg2 ;
-(void)profileAtIndexWasOptimisticallyUnselected:(long long)arg1 inMode:(id)arg2 ;
-(void)profileAtIndexWasSelected:(long long)arg1 ;
-(void)profileAtIndexWasUnselected:(long long)arg1 ;
-(void)didOpenSearchMode;
-(void)didCloseSearchMode;
-(void)searchLoadingFinished;
-(void)dealloc;
-(id)init;
-(void)scrollViewDidScroll:(FBScrollViewState)arg1 ;
-(void)viewDidAppear;
-(void)viewDidDisappear;
@end

