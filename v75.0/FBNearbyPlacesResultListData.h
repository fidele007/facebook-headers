/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLLocation, NSString, FBNearbyPlacesAdvancedFiltersState, FBNearbyPlacesResultListQueryTopic, FBPlacesMapRegion, NSArray;

@interface FBNearbyPlacesResultListData : FBValueObject <NSCopying> {

	BOOL _isInitialSearch;
	BOOL _hasNextPage;
	BOOL _isNearbySearch;
	CLLocation* _requestUserLocation;
	CLLocation* _requestCenter;
	NSString* _requestRegionID;
	FBNearbyPlacesAdvancedFiltersState* _requestFiltersState;
	unsigned long long _requestSearchType;
	FBNearbyPlacesResultListQueryTopic* _requestQueryTopic;
	FBPlacesMapRegion* _requestRegion;
	FBPlacesMapRegion* _resultRegion;
	NSArray* _cellInformations;
	NSString* _resultListID;
	NSString* _cursorToken;
	unsigned long long _cacheRadius;
	NSArray* _filters;

}

@property (nonatomic,copy,readonly) CLLocation * requestUserLocation;                                      //@synthesize requestUserLocation=_requestUserLocation - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * requestCenter;                                            //@synthesize requestCenter=_requestCenter - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestRegionID;                                            //@synthesize requestRegionID=_requestRegionID - In the implementation block
@property (nonatomic,copy,readonly) FBNearbyPlacesAdvancedFiltersState * requestFiltersState;              //@synthesize requestFiltersState=_requestFiltersState - In the implementation block
@property (nonatomic,readonly) unsigned long long requestSearchType;                                       //@synthesize requestSearchType=_requestSearchType - In the implementation block
@property (nonatomic,copy,readonly) FBNearbyPlacesResultListQueryTopic * requestQueryTopic;                //@synthesize requestQueryTopic=_requestQueryTopic - In the implementation block
@property (nonatomic,copy,readonly) FBPlacesMapRegion * requestRegion;                                     //@synthesize requestRegion=_requestRegion - In the implementation block
@property (nonatomic,copy,readonly) FBPlacesMapRegion * resultRegion;                                      //@synthesize resultRegion=_resultRegion - In the implementation block
@property (nonatomic,copy,readonly) NSArray * cellInformations;                                            //@synthesize cellInformations=_cellInformations - In the implementation block
@property (nonatomic,copy,readonly) NSString * resultListID;                                               //@synthesize resultListID=_resultListID - In the implementation block
@property (nonatomic,copy,readonly) NSString * cursorToken;                                                //@synthesize cursorToken=_cursorToken - In the implementation block
@property (nonatomic,readonly) BOOL isInitialSearch;                                                       //@synthesize isInitialSearch=_isInitialSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasNextPage;                                                           //@synthesize hasNextPage=_hasNextPage - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheRadius;                                             //@synthesize cacheRadius=_cacheRadius - In the implementation block
@property (nonatomic,readonly) BOOL isNearbySearch;                                                        //@synthesize isNearbySearch=_isNearbySearch - In the implementation block
@property (nonatomic,copy,readonly) NSArray * filters;                                                     //@synthesize filters=_filters - In the implementation block
-(NSArray *)cellInformations;
-(FBPlacesMapRegion *)resultRegion;
-(BOOL)isInitialSearch;
-(CLLocation *)requestUserLocation;
-(CLLocation *)requestCenter;
-(NSString *)requestRegionID;
-(FBNearbyPlacesAdvancedFiltersState *)requestFiltersState;
-(unsigned long long)requestSearchType;
-(FBNearbyPlacesResultListQueryTopic *)requestQueryTopic;
-(FBPlacesMapRegion *)requestRegion;
-(NSString *)resultListID;
-(NSString *)cursorToken;
-(unsigned long long)cacheRadius;
-(BOOL)isNearbySearch;
-(id)initWithRequestUserLocation:(id)arg1 requestCenter:(id)arg2 requestRegionID:(id)arg3 requestFiltersState:(id)arg4 requestSearchType:(unsigned long long)arg5 requestQueryTopic:(id)arg6 requestRegion:(id)arg7 resultRegion:(id)arg8 cellInformations:(id)arg9 resultListID:(id)arg10 cursorToken:(id)arg11 isInitialSearch:(BOOL)arg12 hasNextPage:(BOOL)arg13 cacheRadius:(unsigned long long)arg14 isNearbySearch:(BOOL)arg15 filters:(id)arg16 ;
-(NSArray *)filters;
-(BOOL)hasNextPage;
@end

