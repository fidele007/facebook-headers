/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBProfileDiscoverySessionLogger;

@interface FBProfileDiscoveryBucketListSessionLogger : NSObject {

	NSString* _bucketListSessionID;
	FBProfileDiscoverySessionLogger* _discoverySessionLogger;

}

@property (nonatomic,copy,readonly) NSString * bucketListSessionID;                                   //@synthesize bucketListSessionID=_bucketListSessionID - In the implementation block
@property (nonatomic,readonly) FBProfileDiscoverySessionLogger * discoverySessionLogger;              //@synthesize discoverySessionLogger=_discoverySessionLogger - In the implementation block
-(FBProfileDiscoverySessionLogger *)discoverySessionLogger;
-(id)initWithDiscoverySessionLogger:(id)arg1 ;
-(void)_logEventWithExtras:(id)arg1 ;
-(id)bucketListSessionExtras;
-(void)logBucketCandidateImpression:(id)arg1 bucketIdx:(unsigned long long)arg2 viewStyle:(id)arg3 isLast:(BOOL)arg4 sectionIdx:(unsigned long long)arg5 ;
-(void)logBucketListSessionImpression;
-(void)logBucketListCandidateImpression:(id)arg1 ;
-(void)logCogClickOnBucketList;
-(NSString *)bucketListSessionID;
-(void)logBucketListCandidateClickWithBucket:(id)arg1 analyticsInfo:(id)arg2 ;
-(void)logBucketListCandidateVPV:(id)arg1 analyticsInfo:(id)arg2 ;
@end
