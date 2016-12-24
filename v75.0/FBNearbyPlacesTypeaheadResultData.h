/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray;

@interface FBNearbyPlacesTypeaheadResultData : FBValueObject <NSCopying> {

	NSString* _searchQuery;
	double _latitude;
	double _longitude;
	unsigned long long _cacheMeters;
	NSArray* _places;
	NSArray* _querySuggestions;
	NSString* _searchSessionID;

}

@property (nonatomic,copy,readonly) NSString * searchQuery;                  //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,readonly) double latitude;                              //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                             //@synthesize longitude=_longitude - In the implementation block
@property (nonatomic,readonly) unsigned long long cacheMeters;               //@synthesize cacheMeters=_cacheMeters - In the implementation block
@property (nonatomic,copy,readonly) NSArray * places;                        //@synthesize places=_places - In the implementation block
@property (nonatomic,copy,readonly) NSArray * querySuggestions;              //@synthesize querySuggestions=_querySuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSString * searchSessionID;              //@synthesize searchSessionID=_searchSessionID - In the implementation block
-(unsigned long long)cacheMeters;
-(NSString *)searchSessionID;
-(NSArray *)querySuggestions;
-(id)initWithSearchQuery:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 cacheMeters:(unsigned long long)arg4 places:(id)arg5 querySuggestions:(id)arg6 searchSessionID:(id)arg7 ;
-(NSString *)searchQuery;
-(NSArray *)places;
-(double)latitude;
-(double)longitude;
@end

