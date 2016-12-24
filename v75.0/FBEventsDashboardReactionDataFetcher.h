/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionDataFetcherListener.h>

@protocol FBEventsDashboardReactionDataFetcherDelegate;
@class FBUserSession, FBScenePath, FBEventsDiscoverSuggestionContext, NSMutableSet, FBReactionDataFetcher, NSString, NSMutableOrderedSet;

@interface FBEventsDashboardReactionDataFetcher : NSObject <FBReactionDataFetcherListener> {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	FBEventsDiscoverSuggestionContext* _suggestionContext;
	long long _pageNumber;
	NSMutableSet* _loadedUnitIds;
	NSMutableSet* _loadedUnitProfileIdsSet;
	BOOL _isDiscoverDashboardSurface;
	BOOL _isDiscoverListSurface;
	FBReactionDataFetcher* _reactionDataFetcher;
	NSString* _referrer;
	NSString* _surface;
	id<FBEventsDashboardReactionDataFetcherDelegate> _delegate;
	NSMutableOrderedSet* _loadedUnitProfileIds;

}

@property (nonatomic,copy,readonly) NSString * referrer;                                                    //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,copy,readonly) NSString * surface;                                                     //@synthesize surface=_surface - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsDashboardReactionDataFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSMutableOrderedSet * loadedUnitProfileIds;                                      //@synthesize loadedUnitProfileIds=_loadedUnitProfileIds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_dataFetcher:(id)arg1 didRemoveUnits:(id)arg2 fromLoadedUnits:(id)arg3 ;
-(void)_dataFetcher:(id)arg1 didLoadUnits:(id)arg2 sessionId:(id)arg3 networkTime:(unsigned long long)arg4 hasNextPage:(BOOL)arg5 ;
-(void)dataFetcherWillStartLoading:(id)arg1 userInfo:(id)arg2 ;
-(void)loadFailedForDataFetcher:(id)arg1 sessionId:(id)arg2 cancelled:(BOOL)arg3 error:(id)arg4 userInfo:(id)arg5 ;
-(void)dataFetcher:(id)arg1 didMoveUnit:(id)arg2 toPosition:(unsigned long long)arg3 ;
-(void)dataFetcher:(id)arg1 didAddUnit:(id)arg2 toPosition:(unsigned long long)arg3 ;
-(void)dataFetcher:(id)arg1 didReplaceUnit:(id)arg2 withUnit:(id)arg3 ;
-(void)dataFetcher:(id)arg1 didFailToReloadUnit:(id)arg2 withError:(id)arg3 ;
-(void)dataFetcher:(id)arg1 willAttemptToReloadUnit:(id)arg2 ;
-(void)dataFetcher:(id)arg1 didUpdateExpirationCondition:(id)arg2 ;
-(void)dataFetcher:(id)arg1 didReplaceUnits:(id)arg2 fromLoadedUnits:(id)arg3 withNewUnits:(id)arg4 loadedFromCache:(BOOL)arg5 sessionId:(id)arg6 networkTime:(unsigned long long)arg7 hasNextPage:(BOOL)arg8 userInfo:(id)arg9 ;
-(void)loadMoreIfNeeded;
-(id)initWithSession:(id)arg1 referrer:(id)arg2 surface:(id)arg3 suggestionContext:(id)arg4 scenePath:(id)arg5 ;
-(NSMutableOrderedSet *)loadedUnitProfileIds;
-(void)setLoadedUnitProfileIds:(NSMutableOrderedSet *)arg1 ;
-(NSString *)referrer;
-(void)setDelegate:(id<FBEventsDashboardReactionDataFetcherDelegate>)arg1 ;
-(void)dealloc;
-(id<FBEventsDashboardReactionDataFetcherDelegate>)delegate;
-(NSString *)surface;
@end

