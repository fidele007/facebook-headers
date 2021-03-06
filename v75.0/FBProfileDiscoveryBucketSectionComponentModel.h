/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemProfileDiscoveryBucket, FBProfileDiscoveryBucketAnalyticsInfo;

@interface FBProfileDiscoveryBucketSectionComponentModel : FBValueObject <NSCopying> {

	FBMemProfileDiscoveryBucket* _bucket;
	FBProfileDiscoveryBucketAnalyticsInfo* _analyticsInfo;

}

@property (nonatomic,copy,readonly) FBMemProfileDiscoveryBucket * bucket;                               //@synthesize bucket=_bucket - In the implementation block
@property (nonatomic,copy,readonly) FBProfileDiscoveryBucketAnalyticsInfo * analyticsInfo;              //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
-(FBProfileDiscoveryBucketAnalyticsInfo *)analyticsInfo;
-(id)initWithBucket:(id)arg1 analyticsInfo:(id)arg2 ;
-(FBMemProfileDiscoveryBucket *)bucket;
@end

