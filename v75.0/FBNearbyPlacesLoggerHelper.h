/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBNearbyPlacesRecommendationsLogger, FBNearbyPlacesSearchLogger, FBNearbyPlacesPerfLogger;

@interface FBNearbyPlacesLoggerHelper : NSObject {

	BOOL _willHaveNegativeSession;
	NSString* _clientSessionID;
	FBNearbyPlacesRecommendationsLogger* _recommendationsLogger;
	FBNearbyPlacesSearchLogger* _searchLogger;
	FBNearbyPlacesPerfLogger* _perfLogger;

}

@property (nonatomic,copy,readonly) NSString * clientSessionID;                                          //@synthesize clientSessionID=_clientSessionID - In the implementation block
@property (assign,nonatomic) BOOL willHaveNegativeSession;                                               //@synthesize willHaveNegativeSession=_willHaveNegativeSession - In the implementation block
@property (nonatomic,readonly) FBNearbyPlacesRecommendationsLogger * recommendationsLogger;              //@synthesize recommendationsLogger=_recommendationsLogger - In the implementation block
@property (nonatomic,readonly) FBNearbyPlacesSearchLogger * searchLogger;                                //@synthesize searchLogger=_searchLogger - In the implementation block
@property (nonatomic,readonly) FBNearbyPlacesPerfLogger * perfLogger;                                    //@synthesize perfLogger=_perfLogger - In the implementation block
+(unsigned long long)overallCellRankInTableView:(id)arg1 forIndexPath:(id)arg2 ;
+(id)graphQLIDForCellInformation:(id)arg1 ;
+(unsigned long long)greatestVisibleIndexForTableView:(id)arg1 scrollView:(id)arg2 resultListCount:(unsigned long long)arg3 ;
+(id)placeIDsFromCellInformations:(id)arg1 ;
+(unsigned long long)maxSeenResultIndexForTableView:(id)arg1 scrollView:(id)arg2 resultListCount:(unsigned long long)arg3 ;
+(id)seenResultIDsForTableView:(id)arg1 inScrollView:(id)arg2 cellInformations:(id)arg3 ;
+(unsigned long long)resultCellTapActionForComponentTapAction:(unsigned long long)arg1 ;
-(FBNearbyPlacesPerfLogger *)perfLogger;
-(id)initWithSearchContext:(id)arg1 ;
-(FBNearbyPlacesRecommendationsLogger *)recommendationsLogger;
-(void)setSearchImpressionSource:(id)arg1 ;
-(BOOL)willHaveNegativeSession;
-(FBNearbyPlacesSearchLogger *)searchLogger;
-(void)setWillHaveNegativeSession:(BOOL)arg1 ;
-(id)initWithEntryPoint:(unsigned long long)arg1 ;
-(void)refreshClientSessionID;
-(NSString *)clientSessionID;
@end

