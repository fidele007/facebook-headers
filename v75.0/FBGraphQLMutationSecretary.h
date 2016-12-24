/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class FBGraphQLThreadUnsafeMutationSecretary, NSObject;

@interface FBGraphQLMutationSecretary : NSObject {

	FBGraphQLThreadUnsafeMutationSecretary* _secretary;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)cancelMutation:(id)arg1 ;
-(void)registerMutation:(id)arg1 ;
-(void)mutationDidStart:(id)arg1 withRequest:(id)arg2 ;
-(void)mutationDidSucceed:(id)arg1 withPayload:(id)arg2 ;
-(void)mutationDidFail:(id)arg1 withError:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
@end

