/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBServiceTransactionTokenDelegate.h>
#import <Facebook/FBNetworkerRequestDelegate.h>

@protocol FBNetworkDispatch;
@class NSString;

@interface FBService : NSObject <FBServiceTransactionTokenDelegate, FBNetworkerRequestDelegate> {

	id<FBNetworkDispatch> _networker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didCancelWithStatus:(id)arg2 ;
-(id)sendRequest:(id)arg1 callbackQueue:(id)arg2 successCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 configurationCallback:(/*^block*/id)arg5 ;
-(id)initWithNetworker:(id)arg1 ;
-(id)errorWithType:(unsigned long long)arg1 underlyingError:(id)arg2 ;
-(void)serviceShouldCancelRequest:(id)arg1 ;
-(void)serviceShouldChangePriorityForRequest:(id)arg1 newPriority:(long long)arg2 ;
@end

