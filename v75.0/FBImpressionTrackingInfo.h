/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, NSNumber;

@interface FBImpressionTrackingInfo : FBValueObject <NSCopying> {

	BOOL _sponsoredValue;
	BOOL _needsThirdPartyPing;
	BOOL _isAutoScroll;
	NSString* _sponsorableID;
	NSString* _parentSponsorableID;
	NSArray* _sponsorableTrackingCodes;
	NSArray* _sponsorableImpressionURLs;
	double _impressionTime;
	NSNumber* _rowIndex;
	unsigned long long _impressionType;

}

@property (nonatomic,readonly) BOOL sponsoredValue;                                   //@synthesize sponsoredValue=_sponsoredValue - In the implementation block
@property (nonatomic,copy,readonly) NSString * sponsorableID;                         //@synthesize sponsorableID=_sponsorableID - In the implementation block
@property (nonatomic,copy,readonly) NSString * parentSponsorableID;                   //@synthesize parentSponsorableID=_parentSponsorableID - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sponsorableTrackingCodes;               //@synthesize sponsorableTrackingCodes=_sponsorableTrackingCodes - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sponsorableImpressionURLs;              //@synthesize sponsorableImpressionURLs=_sponsorableImpressionURLs - In the implementation block
@property (nonatomic,readonly) double impressionTime;                                 //@synthesize impressionTime=_impressionTime - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * rowIndex;                              //@synthesize rowIndex=_rowIndex - In the implementation block
@property (nonatomic,readonly) BOOL needsThirdPartyPing;                              //@synthesize needsThirdPartyPing=_needsThirdPartyPing - In the implementation block
@property (nonatomic,readonly) BOOL isAutoScroll;                                     //@synthesize isAutoScroll=_isAutoScroll - In the implementation block
@property (nonatomic,readonly) unsigned long long impressionType;                     //@synthesize impressionType=_impressionType - In the implementation block
+(id)sponsorableIDForSponsorable:(id)arg1 parentSponsorable:(id)arg2 ;
-(BOOL)sponsoredValue;
-(NSString *)sponsorableID;
-(unsigned long long)impressionType;
-(NSArray *)sponsorableTrackingCodes;
-(id)initWithSponsoredValue:(BOOL)arg1 sponsorableID:(id)arg2 parentSponsorableID:(id)arg3 sponsorableTrackingCodes:(id)arg4 sponsorableImpressionURLs:(id)arg5 impressionTime:(double)arg6 rowIndex:(id)arg7 needsThirdPartyPing:(BOOL)arg8 isAutoScroll:(BOOL)arg9 impressionType:(unsigned long long)arg10 ;
-(NSString *)parentSponsorableID;
-(NSArray *)sponsorableImpressionURLs;
-(double)impressionTime;
-(BOOL)needsThirdPartyPing;
-(BOOL)isAutoScroll;
-(NSNumber *)rowIndex;
-(id)uniqueID;
@end

