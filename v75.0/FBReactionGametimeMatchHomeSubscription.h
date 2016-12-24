/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionSurfaceSubscription.h>

@protocol FBGraphQLSubscriptionHandle, FBReactionSurfaceSubscriptionDelegate;
@class FBReactionContext, NSString;

@interface FBReactionGametimeMatchHomeSubscription : NSObject <FBReactionSurfaceSubscription> {

	FBReactionContext* _reactionContext;
	id<FBGraphQLSubscriptionHandle> _subscriptionHandle;
	id<FBReactionSurfaceSubscriptionDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBReactionSurfaceSubscriptionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)newWithReactionContext:(id)arg1 ;
-(void)_didReceiveResponsePayload:(id)arg1 ;
-(id)_initWithReactionContext:(id)arg1 ;
-(void)setDelegate:(id<FBReactionSurfaceSubscriptionDelegate>)arg1 ;
-(void)dealloc;
-(id<FBReactionSurfaceSubscriptionDelegate>)delegate;
-(void)subscribe;
@end

