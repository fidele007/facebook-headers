/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBNotificationsRichNotificationsInteractionHelper : NSObject
+(void)logCurationEventWithInteraction:(id)arg1 extras:(id)arg2 notification:(id)arg3 session:(id)arg4 ;
+(BOOL)shouldLogClickForInteraction:(id)arg1 ;
+(BOOL)shouldLogDownstreamActionForInteraction:(id)arg1 ;
+(void)logDownstreamActionForInteraction:(id)arg1 extras:(id)arg2 withDownstreamActionsTracker:(id)arg3 ;
+(BOOL)shouldMarkAsReadForInteraction:(id)arg1 ;
+(BOOL)shouldCollapseImmediatelyForInteraction:(id)arg1 ;
+(BOOL)shouldCollapseAfterDelayForInteraction:(id)arg1 ;
+(BOOL)shouldCollapseOnNextNotificationsViewVisit:(id)arg1 ;
+(BOOL)isInteractionEventRelated:(id)arg1 ;
+(BOOL)isInteractionLikeRelated:(id)arg1 ;
+(BOOL)isInteractionCommentRelated:(id)arg1 ;
+(BOOL)isInteractionFriendingRelated:(id)arg1 ;
@end

