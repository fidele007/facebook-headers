/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReachabilityListener.h>
#import <Facebook/FBInvalidating.h>

@protocol OS_dispatch_queue;
@class NSObject, FBAttributionRequest, NSString, NSTimer, FBUserSession, FBPreferences, FBReachabilityAnnouncer;

@interface FBAttributionGenerator : NSObject <FBReachabilityListener, FBInvalidating> {

	NSObject*<OS_dispatch_queue> _queue;
	FBAttributionRequest* _currentRequest;
	id _applicationActiveObserver;
	id _applicationInactiveObserver;
	id _screenshotObserver;
	NSString* _analyticsModule;
	NSTimer* _poller;
	FBUserSession* _session;
	FBPreferences* _preferences;
	int _pollCount;
	FBReachabilityAnnouncer* _reachabilityAnnouncer;
	BOOL _valid;
	NSString* _deviceID;
	NSString* _userFBID;

}

@property (nonatomic,retain) FBAttributionRequest * currentRequest;              //@synthesize currentRequest=_currentRequest - In the implementation block
@property (nonatomic,copy) NSString * deviceID;                                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,copy) NSString * userFBID;                                  //@synthesize userFBID=_userFBID - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;               //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                  //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,retain) NSTimer * poller;                                   //@synthesize poller=_poller - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (getter=isValid,nonatomic,readonly) BOOL valid;                        //@synthesize valid=_valid - In the implementation block
+(id)sharedDelegate;
-(NSString *)userFBID;
-(NSString *)analyticsModule;
-(void)reachabilityStateChangedTo:(unsigned long long)arg1 from:(unsigned long long)arg2 ;
-(void)setUserFBID:(NSString *)arg1 ;
-(void)registerPossibleConversionForDigitalGood:(id)arg1 fbid:(id)arg2 urlSchemesCopy:(id)arg3 tracking:(id)arg4 iconUrl:(id)arg5 showNotification:(BOOL)arg6 delegate:(id)arg7 ;
-(void)updateUserFBID:(id)arg1 ;
-(void)observeApplication;
-(void)registerPossibleConversionForDigitalGood:(id)arg1 fbid:(id)arg2 urlSchemesCopy:(id)arg3 tracking:(id)arg4 iconUrl:(id)arg5 delegate:(id)arg6 ;
-(void)registerPossibleConversionForDigitalGood:(id)arg1 fbid:(id)arg2 urlSchemesCopy:(id)arg3 clientToken:(id)arg4 iconUrl:(id)arg5 delegate:(id)arg6 ;
-(void)observeReachabilityStatus;
-(void)unobserveApplication;
-(void)unobserveReachabilityStatus;
-(void)updateAdvertisingID;
-(void)startPolling:(double)arg1 ;
-(void)_registerPossibleConversion:(id)arg1 ;
-(void)logEvent:(id)arg1 forStoreEntity:(id)arg2 entityLocations:(id)arg3 ;
-(NSTimer *)poller;
-(BOOL)shouldPoll;
-(void)schedulePoll;
-(void)setPoller:(NSTimer *)arg1 ;
-(id)_constructLogExtraFromDelegates:(id)arg1 ;
-(void)registerPossibleConversion:(id)arg1 tracking:(id)arg2 delegate:(id)arg3 ;
-(void)logEvent:(id)arg1 forStoreEntity:(id)arg2 ;
-(void)setCurrentRequest:(FBAttributionRequest *)arg1 ;
-(void)invalidate;
-(BOOL)isValid;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)initWithSession:(id)arg1 ;
-(FBAttributionRequest *)currentRequest;
-(void)stopPolling;
-(void)setDeviceID:(NSString *)arg1 ;
-(NSString *)deviceID;
@end

