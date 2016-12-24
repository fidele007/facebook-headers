/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString, CLLocation;

@interface FBNearbyPlacesBrowseQueryIntentTarget : FBIntentTarget {

	BOOL _openMap;
	NSString* _locationID;
	NSString* _locationPageName;
	NSString* _queryString;
	CLLocation* _userLocation;

}

@property (nonatomic,copy,readonly) NSString * locationID;                    //@synthesize locationID=_locationID - In the implementation block
@property (nonatomic,copy,readonly) NSString * locationPageName;              //@synthesize locationPageName=_locationPageName - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString;                   //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * userLocation;                //@synthesize userLocation=_userLocation - In the implementation block
@property (nonatomic,readonly) BOOL openMap;                                  //@synthesize openMap=_openMap - In the implementation block
+(id)nearbyPlacesBrowseQueryTargetWithLocationID:(id)arg1 locationPageName:(id)arg2 queryString:(id)arg3 userLocation:(id)arg4 openMap:(BOOL)arg5 ;
-(id)fallbackURLs;
-(NSString *)locationPageName;
-(BOOL)openMap;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)queryString;
-(NSString *)locationID;
-(CLLocation *)userLocation;
@end
