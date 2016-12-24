/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBBackgroundLocationSendQueueExperimentContext : FBExperimentContext {

	long long _maxUpdatesPerRequest;
	long long _waitTimeSec;
	BOOL _useNewSendQueue;

}

@property (assign,nonatomic) long long maxUpdatesPerRequest;              //@synthesize maxUpdatesPerRequest=_maxUpdatesPerRequest - In the implementation block
@property (assign,nonatomic) long long waitTimeSec;                       //@synthesize waitTimeSec=_waitTimeSec - In the implementation block
@property (assign,nonatomic) BOOL useNewSendQueue;                        //@synthesize useNewSendQueue=_useNewSendQueue - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(long long)maxUpdatesPerRequest;
-(BOOL)useNewSendQueue;
-(long long)waitTimeSec;
-(void)setMaxUpdatesPerRequest:(long long)arg1 ;
-(void)setWaitTimeSec:(long long)arg1 ;
-(void)setUseNewSendQueue:(BOOL)arg1 ;
@end

