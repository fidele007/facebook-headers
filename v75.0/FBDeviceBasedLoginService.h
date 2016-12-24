/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAppService.h>

@class FBUserSession, FBTimer, NSString;

@interface FBDeviceBasedLoginService : NSObject <FBAppService> {

	FBUserSession* _session;
	FBTimer* _retryTimer;
	BOOL _isError;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)_removeServerNonceForAccount:(id)arg1 ;
-(void)_fetchingDBLNoncesIfNecessary;
-(void)createTimerWithInterval:(double)arg1 ;
-(void)_destroyTimer;
-(void)_removeServerNonceForAccountID:(id)arg1 andNonce:(id)arg2 ;
-(void)_fetch;
-(void)_handleFetchingResponse:(id)arg1 status:(id)arg2 ;
-(void)_handleFetchError:(id)arg1 status:(id)arg2 ;
-(void)_removeDBLInfoIfNecessary;
-(void)setIsError:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)_updateTimer;
@end

