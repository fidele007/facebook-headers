/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSString, NSArray, NSNumber, FBAdGeoLocations;

@interface FBAdCustomTargettingOptions : FBGraphQLInput {

	NSString* _rawSpec;
	NSArray* _fieldsRetainedFromRawSpec;
	NSArray* _genders;
	NSNumber* _ageMax;
	NSNumber* _ageMin;
	FBAdGeoLocations* _geoLocations;
	NSArray* _interestIds;
	NSArray* _localeIds;
	NSArray* _connectionIds;
	NSArray* _excludedConnectionIds;
	NSArray* _friendsOfConnectionIds;
	NSArray* _flexibleSpec;
	NSArray* _includedCustomAudienceIds;
	NSArray* _excludedCustomAudienceIds;

}

@property (nonatomic,copy) NSString * rawSpec;                               //@synthesize rawSpec=_rawSpec - In the implementation block
@property (nonatomic,copy) NSArray * fieldsRetainedFromRawSpec;              //@synthesize fieldsRetainedFromRawSpec=_fieldsRetainedFromRawSpec - In the implementation block
@property (nonatomic,copy) NSArray * genders;                                //@synthesize genders=_genders - In the implementation block
@property (nonatomic,copy) NSNumber * ageMax;                                //@synthesize ageMax=_ageMax - In the implementation block
@property (nonatomic,copy) NSNumber * ageMin;                                //@synthesize ageMin=_ageMin - In the implementation block
@property (nonatomic,copy) FBAdGeoLocations * geoLocations;                  //@synthesize geoLocations=_geoLocations - In the implementation block
@property (nonatomic,copy) NSArray * interestIds;                            //@synthesize interestIds=_interestIds - In the implementation block
@property (nonatomic,copy) NSArray * localeIds;                              //@synthesize localeIds=_localeIds - In the implementation block
@property (nonatomic,copy) NSArray * connectionIds;                          //@synthesize connectionIds=_connectionIds - In the implementation block
@property (nonatomic,copy) NSArray * excludedConnectionIds;                  //@synthesize excludedConnectionIds=_excludedConnectionIds - In the implementation block
@property (nonatomic,copy) NSArray * friendsOfConnectionIds;                 //@synthesize friendsOfConnectionIds=_friendsOfConnectionIds - In the implementation block
@property (nonatomic,copy) NSArray * flexibleSpec;                           //@synthesize flexibleSpec=_flexibleSpec - In the implementation block
@property (nonatomic,copy) NSArray * includedCustomAudienceIds;              //@synthesize includedCustomAudienceIds=_includedCustomAudienceIds - In the implementation block
@property (nonatomic,copy) NSArray * excludedCustomAudienceIds;              //@synthesize excludedCustomAudienceIds=_excludedCustomAudienceIds - In the implementation block
-(FBAdGeoLocations *)geoLocations;
-(NSArray *)flexibleSpec;
-(NSArray *)genders;
-(void)setAgeMax:(NSNumber *)arg1 ;
-(void)setAgeMin:(NSNumber *)arg1 ;
-(void)setGenders:(NSArray *)arg1 ;
-(void)setGeoLocations:(FBAdGeoLocations *)arg1 ;
-(void)setFlexibleSpec:(NSArray *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)ageMax;
-(NSNumber *)ageMin;
-(NSArray *)interestIds;
-(void)setInterestIds:(NSArray *)arg1 ;
-(NSArray *)localeIds;
-(void)setLocaleIds:(NSArray *)arg1 ;
-(NSArray *)excludedConnectionIds;
-(void)setExcludedConnectionIds:(NSArray *)arg1 ;
-(NSArray *)includedCustomAudienceIds;
-(void)setIncludedCustomAudienceIds:(NSArray *)arg1 ;
-(NSArray *)excludedCustomAudienceIds;
-(void)setExcludedCustomAudienceIds:(NSArray *)arg1 ;
-(NSArray *)connectionIds;
-(void)setConnectionIds:(NSArray *)arg1 ;
-(NSArray *)friendsOfConnectionIds;
-(void)setFriendsOfConnectionIds:(NSArray *)arg1 ;
-(NSArray *)fieldsRetainedFromRawSpec;
-(void)setFieldsRetainedFromRawSpec:(NSArray *)arg1 ;
-(NSString *)rawSpec;
-(void)setRawSpec:(NSString *)arg1 ;
@end

