/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNPresenceUpdating.h>

@protocol OS_dispatch_queue, MNPresenceCacheListener;
@class NSObject, NSDictionary, NSString;

@interface MNPresenceCache : NSObject <MNPresenceUpdating> {

	NSObject*<OS_dispatch_queue> _updateQueue;
	id<MNPresenceCacheListener> _listener;
	NSDictionary* _personIdToPresenceMap;

}

@property (copy) NSDictionary * personIdToPresenceMap;              //@synthesize personIdToPresenceMap=_personIdToPresenceMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updatePresence:(id)arg1 shouldClearExisting:(BOOL)arg2 ;
-(void)setPersonIdToPresenceMap:(NSDictionary *)arg1 ;
-(NSDictionary *)personIdToPresenceMap;
-(id)allTrackedPresenceValues;
-(id)allUserIds;
-(void)configureWithUpdateQueue:(id)arg1 listener:(id)arg2 ;
-(id)onlineUserIds;
-(id)presenceForPersonWithId:(id)arg1 ;
@end

