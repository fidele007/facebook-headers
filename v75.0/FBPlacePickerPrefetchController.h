/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPlacePickerPrefetchControllerDelegate, FBLocationManagerSubscription;
@class FBCheckinSearchController, NSDate, FBAnalyticsPrefetcherLogger, FBPrefetchPlacesListenerAnnouncer, FBNearbyDataSet, FBUserSession, CLLocation, FBPlacePickerPrefetchContext, NSString;

@interface FBPlacePickerPrefetchController : NSObject {

	FBCheckinSearchController* _searchController;
	NSDate* _lastCheckinPrefetchDate;
	FBAnalyticsPrefetcherLogger* _logger;
	FBPrefetchPlacesListenerAnnouncer* _prefetchFinishAnnouncer;
	FBNearbyDataSet* _prefetchedDataSet;
	FBUserSession* _session;
	BOOL _fetching;
	id<FBPlacePickerPrefetchControllerDelegate> _delegate;
	CLLocation* _location;
	FBPlacePickerPrefetchContext* _prefetchContext;
	long long _mode;
	NSString* _composerType;
	unsigned long long _searchHandle;
	id<FBLocationManagerSubscription> _locationManagerToken;

}

@property (assign,nonatomic) unsigned long long searchHandle;                                          //@synthesize searchHandle=_searchHandle - In the implementation block
@property (nonatomic,retain) id<FBLocationManagerSubscription> locationManagerToken;                   //@synthesize locationManagerToken=_locationManagerToken - In the implementation block
@property (assign,getter=isFetching,nonatomic) BOOL fetching;                                          //@synthesize fetching=_fetching - In the implementation block
@property (assign,nonatomic,__weak) id<FBPlacePickerPrefetchControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CLLocation * location;                                                    //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) FBPlacePickerPrefetchContext * prefetchContext;                             //@synthesize prefetchContext=_prefetchContext - In the implementation block
@property (nonatomic,readonly) NSDate * lastCheckinPrefetchDate;                                       //@synthesize lastCheckinPrefetchDate=_lastCheckinPrefetchDate - In the implementation block
@property (assign,nonatomic) long long mode;                                                           //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) FBAnalyticsPrefetcherLogger * logger;                                   //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) NSString * composerType;                                                    //@synthesize composerType=_composerType - In the implementation block
+(id)sharedPrefetchController;
-(id)cacheId;
-(void)setComposerType:(NSString *)arg1 ;
-(id)prefetchedDataSet;
-(NSDate *)lastCheckinPrefetchDate;
-(void)stopAssociatedServices;
-(void)_startPrefetchProcess;
-(BOOL)_isValidPrefetchedDataSet:(id)arg1 ;
-(BOOL)_isCurrentPrefetchContextCompatibleWith:(id)arg1 ;
-(void)_locationManagerDidCallbackWithError:(id)arg1 location:(id)arg2 ;
-(void)_fetchNearbyDataSet;
-(void)_searchControllerDidCallbackWithError:(id)arg1 nearbyDataSet:(id)arg2 searchHandle:(unsigned long long)arg3 ;
-(void)setSearchHandle:(unsigned long long)arg1 ;
-(void)_unregisterLocationToken;
-(unsigned long long)searchHandle;
-(void)startAssociatedServices;
-(BOOL)checkinPrefetchDataIsFresh:(id)arg1 ;
-(void)announcePrefetchedResultsUnchanged;
-(void)setPrefetchedDataSet:(id)arg1 prefetchContext:(id)arg2 ;
-(FBPlacePickerPrefetchContext *)prefetchContext;
-(void)setPrefetchContext:(FBPlacePickerPrefetchContext *)arg1 ;
-(NSString *)composerType;
-(id<FBLocationManagerSubscription>)locationManagerToken;
-(void)setLocationManagerToken:(id<FBLocationManagerSubscription>)arg1 ;
-(void)setFetching:(BOOL)arg1 ;
-(void)setDelegate:(id<FBPlacePickerPrefetchControllerDelegate>)arg1 ;
-(id)init;
-(id<FBPlacePickerPrefetchControllerDelegate>)delegate;
-(void)reset;
-(void)setMode:(long long)arg1 ;
-(long long)mode;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(FBAnalyticsPrefetcherLogger *)logger;
-(BOOL)isFetching;
-(id)session;
-(void)removeListener:(id)arg1 ;
-(void)setSession:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

