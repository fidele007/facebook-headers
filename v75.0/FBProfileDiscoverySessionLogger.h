/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBProfileDiscoverySessionLogger : NSObject {

	NSString* _discoverySessionID;
	NSString* _discoverySessionReferrerID;
	NSString* _discoverySessionReferrerType;

}

@property (nonatomic,copy,readonly) NSString * discoverySessionID;                        //@synthesize discoverySessionID=_discoverySessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverySessionReferrerID;                //@synthesize discoverySessionReferrerID=_discoverySessionReferrerID - In the implementation block
@property (nonatomic,copy,readonly) NSString * discoverySessionReferrerType;              //@synthesize discoverySessionReferrerType=_discoverySessionReferrerType - In the implementation block
-(NSString *)discoverySessionReferrerType;
-(id)initWithReferrerType:(id)arg1 referrerID:(id)arg2 discoverySessionID:(id)arg3 ;
-(void)_logDiscoverySessionImpression;
-(id)discoverySessionExtras;
-(NSString *)discoverySessionID;
-(NSString *)discoverySessionReferrerID;
@end
