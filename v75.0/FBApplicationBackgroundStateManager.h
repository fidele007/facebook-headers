/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBBackgroundStateManaging.h>

@class NSString;

@interface FBApplicationBackgroundStateManager : NSObject <FBBackgroundStateManaging> {

	BOOL _cachedSupportsBackgroundRefreshStatus;
	BOOL _supportsBackgroundRefreshStatus;
	BOOL _applicationBecomingActive;

}

@property (assign,getter=isApplicationBecomingActive,nonatomic) BOOL applicationBecomingActive;              //@synthesize applicationBecomingActive=_applicationBecomingActive - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedBackgroundStateManager;
-(BOOL)isApplicationBackgrounded;
-(BOOL)isApplicationActive;
-(BOOL)isApplicationInactive;
-(void)setApplicationBecomingActive:(BOOL)arg1 ;
-(BOOL)supportsBackgroundRefreshStatus;
-(BOOL)isApplicationBecomingActive;
-(long long)applicationState;
-(unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(/*^block*/id)arg2 ;
-(void)endBackgroundTask:(unsigned long long)arg1 ;
-(void)setMinimumBackgroundFetchInterval:(double)arg1 ;
-(long long)backgroundRefreshStatus;
@end

