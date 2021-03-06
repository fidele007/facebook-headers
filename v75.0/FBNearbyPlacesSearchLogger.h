/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNearbyPlacesBaseLogger.h>

@class NSString;

@interface FBNearbyPlacesSearchLogger : FBNearbyPlacesBaseLogger {

	double _searchControllerInitializedTime;
	BOOL _didUserEnterFirstTypeaheadText;
	NSString* _clientSessionID;
	NSString* _placesTypeaheadSessionID;
	NSString* _placesTypeaheadSearchResultListID;
	NSString* _locationTypeaheadSessionID;
	NSString* _locationTypeaheadSearchResultListID;

}

@property (nonatomic,copy) NSString * clientSessionID;                                           //@synthesize clientSessionID=_clientSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * placesTypeaheadSessionID;                         //@synthesize placesTypeaheadSessionID=_placesTypeaheadSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * placesTypeaheadSearchResultListID;                //@synthesize placesTypeaheadSearchResultListID=_placesTypeaheadSearchResultListID - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationTypeaheadSessionID;                       //@synthesize locationTypeaheadSessionID=_locationTypeaheadSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationTypeaheadSearchResultListID;              //@synthesize locationTypeaheadSearchResultListID=_locationTypeaheadSearchResultListID - In the implementation block
@property (nonatomic,readonly) BOOL didUserEnterFirstTypeaheadText;                              //@synthesize didUserEnterFirstTypeaheadText=_didUserEnterFirstTypeaheadText - In the implementation block
+(id)_stringForFailureType:(unsigned long long)arg1 ;
+(id)_stringForSearchType:(unsigned long long)arg1 ;
+(unsigned long long)searchTypeForIsLocationSearch:(BOOL)arg1 ;
-(id)analyticsModule;
-(void)logCategoryMenusSelectionWithCategoryName:(id)arg1 isNullState:(BOOL)arg2 ;
-(void)logTappedNearbyCardFailureTryAgainButton:(unsigned long long)arg1 ;
-(void)logCategorySelectionWithCategoryName:(id)arg1 selectionIDs:(id)arg2 overallRow:(unsigned long long)arg3 sectionRow:(unsigned long long)arg4 selectionType:(id)arg5 ;
-(id)initWithEntryPoint:(unsigned long long)arg1 ;
-(void)setClientSessionID:(NSString *)arg1 ;
-(void)refreshTypeaheadSessionIDs;
-(NSString *)clientSessionID;
-(void)refreshPlacesTypeaheadSessionID;
-(void)refreshLocationTypeaheadSessionID;
-(id)_commonExtrasWithSearchType:(unsigned long long)arg1 ;
-(void)_logLocationTypeaheadSearchReceivedResultsWithQuery:(id)arg1 locationIDs:(id)arg2 searchType:(unsigned long long)arg3 resultFromCache:(BOOL)arg4 isPrefetch:(BOOL)arg5 ;
-(void)_logSearchTypeaheadReceivedResultsWithQuery:(id)arg1 placeIDs:(id)arg2 searchType:(unsigned long long)arg3 resultFromCache:(BOOL)arg4 ;
-(void)assertResultListIDNotNilForSearchType:(unsigned long long)arg1 ;
-(id)_selectedSearchResultCommonExtrasWithSelectionIDs:(id)arg1 selectionType:(id)arg2 searchType:(unsigned long long)arg3 ;
-(void)_logUserSelectionEvent:(id)arg1 ;
-(id)_nullStateLocationResultsForOptions:(long long)arg1 ;
-(id)_nullStateTopicResultsForOptions:(long long)arg1 ;
-(id)_typeaheadResultListIDForSearchType:(unsigned long long)arg1 ;
-(id)_typeaheadSessionIDForSearchType:(unsigned long long)arg1 ;
-(void)updateSearchControllerInitializationTime;
-(void)updateTypeaheadSearchResultListID:(id)arg1 isLocationSearch:(BOOL)arg2 ;
-(void)logEvent:(id)arg1 withSearchType:(unsigned long long)arg2 ;
-(void)logPrefetchCategoryOnViewLoadedWithPrefetchedData:(BOOL)arg1 ;
-(void)logTypeaheadReceivedResultsWithQuery:(id)arg1 placeIDs:(id)arg2 searchType:(unsigned long long)arg3 resultFromCache:(BOOL)arg4 isPrefetch:(BOOL)arg5 ;
-(void)logSearchImpressionWithQuery:(id)arg1 placeIDs:(id)arg2 searchType:(unsigned long long)arg3 ;
-(void)logFirstTypeaheadSearchTextChangeWithSearchType:(unsigned long long)arg1 ;
-(void)logPlaceEntitySelectionWithPageID:(id)arg1 overallRow:(unsigned long long)arg2 sectionRow:(unsigned long long)arg3 pageSessionID:(id)arg4 userLocation:(id)arg5 ;
-(void)logLocationSelectionWithLocationID:(id)arg1 locationName:(id)arg2 locationCoords:(id)arg3 overallRow:(unsigned long long)arg4 sectionRow:(unsigned long long)arg5 isCurrentUserLocation:(BOOL)arg6 hasLocationServicesEnabled:(BOOL)arg7 isNullState:(BOOL)arg8 ;
-(void)logTappedSearchFieldButtonWithSearchType:(unsigned long long)arg1 ;
-(void)logSearchNullStateImpressionWithLocationOption:(long long)arg1 ;
-(void)logSearchNullStateImpressionWithTopicOption:(long long)arg1 ;
-(void)logSearchMoreCategoriesImpression;
-(NSString *)placesTypeaheadSessionID;
-(NSString *)placesTypeaheadSearchResultListID;
-(NSString *)locationTypeaheadSessionID;
-(NSString *)locationTypeaheadSearchResultListID;
-(BOOL)didUserEnterFirstTypeaheadText;
@end

