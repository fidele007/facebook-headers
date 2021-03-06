/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNearbyPlacesSearchDataObject;
@class FBUserSession, FBNearbyPlacesSearchData, FBNearbyPlacesTypeaheadLocationResultData, FBNearbyPlacesTypeaheadResultData, NSArray;

@interface FBNearbyPlacesTypeaheadModel : NSObject {

	FBUserSession* _session;
	FBNearbyPlacesSearchData* _currentSearchData;
	id<FBNearbyPlacesSearchDataObject> _lastSearchData;
	FBNearbyPlacesTypeaheadLocationResultData* _locationResultData;
	FBNearbyPlacesTypeaheadResultData* _suggestionsResultData;
	NSArray* _searchHistoryData;
	NSArray* _menuCategories;
	NSArray* _popularCategories;
	NSArray* _allCategories;
	FBNearbyPlacesTypeaheadLocationResultData* _nullStateNearbyLocationResultData;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBNearbyPlacesSearchData * currentSearchData;                                           //@synthesize currentSearchData=_currentSearchData - In the implementation block
@property (nonatomic,copy) id<FBNearbyPlacesSearchDataObject> lastSearchData;                                          //@synthesize lastSearchData=_lastSearchData - In the implementation block
@property (nonatomic,copy) FBNearbyPlacesTypeaheadLocationResultData * locationResultData;                             //@synthesize locationResultData=_locationResultData - In the implementation block
@property (nonatomic,copy) FBNearbyPlacesTypeaheadResultData * suggestionsResultData;                                  //@synthesize suggestionsResultData=_suggestionsResultData - In the implementation block
@property (nonatomic,copy) NSArray * searchHistoryData;                                                                //@synthesize searchHistoryData=_searchHistoryData - In the implementation block
@property (nonatomic,copy) NSArray * menuCategories;                                                                   //@synthesize menuCategories=_menuCategories - In the implementation block
@property (nonatomic,copy) NSArray * popularCategories;                                                                //@synthesize popularCategories=_popularCategories - In the implementation block
@property (nonatomic,copy) NSArray * allCategories;                                                                    //@synthesize allCategories=_allCategories - In the implementation block
@property (nonatomic,copy) FBNearbyPlacesTypeaheadLocationResultData * nullStateNearbyLocationResultData;              //@synthesize nullStateNearbyLocationResultData=_nullStateNearbyLocationResultData - In the implementation block
-(id)initWithSession:(id)arg1 searchData:(id)arg2 ;
-(FBNearbyPlacesTypeaheadLocationResultData *)locationResultData;
-(FBNearbyPlacesSearchData *)currentSearchData;
-(void)setLocationResultData:(FBNearbyPlacesTypeaheadLocationResultData *)arg1 ;
-(id)searchHistoryLocations;
-(FBNearbyPlacesTypeaheadLocationResultData *)nullStateNearbyLocationResultData;
-(NSArray *)searchHistoryData;
-(NSArray *)menuCategories;
-(NSArray *)popularCategories;
-(NSArray *)allCategories;
-(void)setSearchHistoryData:(NSArray *)arg1 ;
-(BOOL)hasValidSearchData;
-(BOOL)suggestionsResultsIsEmpty;
-(BOOL)locationResultsIsEmpty;
-(void)clearPlacesAndCategoryData;
-(void)clearLocationData;
-(id)regionIDsFromLocationResults;
-(id)placeIDs;
-(void)addHistoryQuery:(id)arg1 ;
-(id<FBNearbyPlacesSearchDataObject>)lastSearchData;
-(void)setLastSearchData:(id<FBNearbyPlacesSearchDataObject>)arg1 ;
-(void)setSuggestionsResultData:(FBNearbyPlacesTypeaheadResultData *)arg1 ;
-(void)setMenuCategories:(NSArray *)arg1 ;
-(void)setPopularCategories:(NSArray *)arg1 ;
-(void)setAllCategories:(NSArray *)arg1 ;
-(void)setNullStateNearbyLocationResultData:(FBNearbyPlacesTypeaheadLocationResultData *)arg1 ;
-(FBNearbyPlacesTypeaheadResultData *)suggestionsResultData;
-(FBUserSession *)session;
@end

