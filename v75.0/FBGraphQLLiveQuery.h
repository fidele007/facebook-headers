/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLSubscriptionHandle.h>
#import <Facebook/FBLithiumClientListener.h>

@class NSString;

@interface FBGraphQLLiveQuery : NSObject <FBGraphQLSubscriptionHandle, FBLithiumClientListener> {

	shared_ptr<facebook::GraphQLLiveQuerySubscriber>* _subscriber;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)startLiveQueryForQuery:(id)arg1 configurationID:(id)arg2 userSession:(id)arg3 persistent:(BOOL)arg4 callbackQueue:(id)arg5 updateBlock:(/*^block*/id)arg6 statusChangeBlock:(/*^block*/id)arg7 errorBlock:(/*^block*/id)arg8 ;
+(void)setLiveQueriesDisabled:(BOOL)arg1 ;
+(id)startLiveQueryForQuery:(id)arg1 configurationID:(id)arg2 lithiumClient:(id)arg3 persistent:(BOOL)arg4 consistentLookasideCache:(id)arg5 callbackQueue:(id)arg6 updateBlock:(/*^block*/id)arg7 statusChangeBlock:(/*^block*/id)arg8 errorBlock:(/*^block*/id)arg9 ;
+(BOOL)liveQueriesDisabled;
-(id)initWithBaseQuery:(id)arg1 configurationID:(id)arg2 lithiumClient:(id)arg3 persistent:(BOOL)arg4 consistentLookasideCache:(id)arg5 callbackQueue:(id)arg6 updateBlock:(/*^block*/id)arg7 statusChangeBlock:(/*^block*/id)arg8 errorBlock:(/*^block*/id)arg9 ;
-(void)lithiumClientDidInvalidate:(id)arg1 ;
-(void)cancel;
-(NSString *)description;
-(void)start;
-(id)handleType;
-(void)unsubscribe;
@end
