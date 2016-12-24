/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBHttpLowerStackConfiguration.h>
@class FBTigonServiceWrapper;


@protocol FBHttpLowerStackConfiguration
@property (nonatomic,readonly) FBTigonServiceWrapper * tigonService; 
@property (nonatomic,readonly) shared_ptr<facebook::tigon::TigonRetryPolicy>* retryPolicy; 
@property (nonatomic,readonly) shared_ptr<facebook::tigon::TigonPriorityQueuePolicy>* queuePolicy; 
@property (nonatomic,readonly) shared_ptr<facebook::tigon::TigonPiggyBackPolicy>* piggyBackPolicy; 
@required
-(FBTigonServiceWrapper *)tigonService;
-(shared_ptr<facebook::tigon::TigonPriorityQueuePolicy>*)queuePolicy;
-(shared_ptr<facebook::tigon::TigonRetryPolicy>*)retryPolicy;
-(shared_ptr<facebook::tigon::TigonPiggyBackPolicy>*)piggyBackPolicy;

@end


@class FBTigonServiceWrapper;

@interface FBHttpLowerStackConfiguration : NSObject <FBHttpLowerStackConfiguration> {

	FBTigonServiceWrapper* _tigonService;
	shared_ptr<facebook::tigon::TigonRetryPolicy>* _retryPolicy;
	shared_ptr<facebook::tigon::TigonPriorityQueuePolicy>* _queuePolicy;
	shared_ptr<facebook::tigon::TigonPiggyBackPolicy>* _piggyBackPolicy;

}

@property (nonatomic,readonly) FBTigonServiceWrapper * tigonService;                                            //@synthesize tigonService=_tigonService - In the implementation block
@property (nonatomic,readonly) shared_ptr<facebook::tigon::TigonRetryPolicy>* retryPolicy;                      //@synthesize retryPolicy=_retryPolicy - In the implementation block
@property (nonatomic,readonly) shared_ptr<facebook::tigon::TigonPriorityQueuePolicy>* queuePolicy;              //@synthesize queuePolicy=_queuePolicy - In the implementation block
@property (nonatomic,readonly) shared_ptr<facebook::tigon::TigonPiggyBackPolicy>* piggyBackPolicy;              //@synthesize piggyBackPolicy=_piggyBackPolicy - In the implementation block
+(id)defaultConfiguration;
-(id)initWithRetryPolicy:(shared_ptr<facebook::tigon::TigonRetryPolicy>*)arg1 queuePolicy:(shared_ptr<facebook::tigon::TigonPriorityQueuePolicy>*)arg2 piggyBackPolicy:(shared_ptr<facebook::tigon::TigonPiggyBackPolicy>*)arg3 tigonService:(id)arg4 ;
-(FBTigonServiceWrapper *)tigonService;
-(shared_ptr<facebook::tigon::TigonPriorityQueuePolicy>*)queuePolicy;
-(shared_ptr<facebook::tigon::TigonRetryPolicy>*)retryPolicy;
-(shared_ptr<facebook::tigon::TigonPiggyBackPolicy>*)piggyBackPolicy;
@end
