/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerFlowDelegate.h>

@class FBEventPermalinkChangeListenerAnnouncer, FBEventAnalyticTracker, NSString;

@interface FBEventCheckinComposerFlowDelegate : NSObject <FBComposerFlowDelegate> {

	FBEventPermalinkChangeListenerAnnouncer* _changeAnnouncer;
	FBEventAnalyticTracker* _tracker;
	NSString* _eventFBID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompletedWithResult:(id)arg1 ;
-(void)logCheckinPosted:(id)arg1 ;
-(id)initWithEventFBID:(id)arg1 changeAnnouncer:(id)arg2 tracker:(id)arg3 ;
@end

