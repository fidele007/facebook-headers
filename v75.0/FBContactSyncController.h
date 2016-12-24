/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPollingDelegate.h>

@protocol FBPolling, FBContactSyncExecutionProtocol;
@class FBUserSession, NSString;

@interface FBContactSyncController : NSObject <FBPollingDelegate> {

	FBUserSession* _session;
	id<FBPolling> _pollingSource;
	id<FBContactSyncExecutionProtocol> _executor;

}

@property (nonatomic,retain) id<FBContactSyncExecutionProtocol> executor;              //@synthesize executor=_executor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleContactSyncOn:(id)arg1 ;
-(id<FBContactSyncExecutionProtocol>)executor;
-(void)setExecutor:(id<FBContactSyncExecutionProtocol>)arg1 ;
-(void)pollingSourceDidFire:(id)arg1 ;
-(void)handleContactSyncOff:(id)arg1 ;
-(void)start;
-(id)initWithSession:(id)arg1 ;
@end
