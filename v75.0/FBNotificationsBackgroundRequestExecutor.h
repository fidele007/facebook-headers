/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsSilentPushStoryPrefetchingManagerDelegate.h>
#import <Facebook/FBNotificationsBackgroundNotificationListRefresherDelegate.h>

@protocol FBNotificationsBackgroundRequestExecutorDelegate;
@class FBUserSession, NSMutableArray, NSString, FBNotificationsBackgroundRequestLogger;

@interface FBNotificationsBackgroundRequestExecutor : NSObject <FBNotificationsSilentPushStoryPrefetchingManagerDelegate, FBNotificationsBackgroundNotificationListRefresherDelegate> {

	id<FBNotificationsBackgroundRequestExecutorDelegate> _delegate;
	FBUserSession* _session;
	BOOL _requestOngoing;
	NSMutableArray* _ongoingRequests;
	BOOL _gotData;
	NSString* _requestIdentifier;
	FBNotificationsBackgroundRequestLogger* _logger;

}

@property (nonatomic,copy,readonly) NSString * requestIdentifier;                            //@synthesize requestIdentifier=_requestIdentifier - In the implementation block
@property (nonatomic,readonly) FBNotificationsBackgroundRequestLogger * logger;              //@synthesize logger=_logger - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)backgroundNotificationListRefresher:(id)arg1 finishedWithResult:(unsigned long long)arg2 ;
-(BOOL)_shouldRefreshForNotification:(id)arg1 ;
-(void)_finishIfApplicable;
-(id)initWithSession:(id)arg1 logger:(id)arg2 delegate:(id)arg3 ;
-(void)startExecutingRequest:(id)arg1 ;
-(void)silentPushStoryPrefetchingManager:(id)arg1 finishedWithResult:(unsigned long long)arg2 ;
-(FBNotificationsBackgroundRequestLogger *)logger;
-(NSString *)requestIdentifier;
@end

