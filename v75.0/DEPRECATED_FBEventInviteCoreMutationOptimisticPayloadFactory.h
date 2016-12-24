/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBEventInviteCoreMutationOptimisticPayloadFactoryProtocol.h>

@class FBMemEvent, NSString;

@interface DEPRECATED_FBEventInviteCoreMutationOptimisticPayloadFactory : NSObject <FBEventInviteCoreMutationOptimisticPayloadFactoryProtocol> {

	FBMemEvent* _event;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)optimisticPayload:(id)arg1 ;
-(id)rollbackOptimisticPayload:(id)arg1 ;
-(void)_updateOptimisticInviteeEventCounts:(id)arg1 forInviteeIds:(id)arg2 ;
-(long long)_oldEventCountForInvitee:(id)arg1 ;
-(id)_personWithGraphQLID:(id)arg1 eventCount:(long long)arg2 ;
-(id)initWithEvent:(id)arg1 ;
@end

