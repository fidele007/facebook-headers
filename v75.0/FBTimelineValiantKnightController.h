/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValiantKnightViewControllerDelegate.h>

@class FBUserSession, NSString;

@interface FBTimelineValiantKnightController : NSObject <FBValiantKnightViewControllerDelegate> {

	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_personTimelineViewControllerForPerson:(id)arg1 timelineAnalytics:(id)arg2 actionType:(id)arg3 friendRequestSendReference:(id)arg4 ;
-(id)replacementViewControllerForValiantKnightViewController:(id)arg1 withAvatar:(id)arg2 friendRequestSendReference:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end
