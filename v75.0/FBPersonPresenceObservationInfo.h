/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSHashTable, NSMutableDictionary, FBSyncPresence;

@interface FBPersonPresenceObservationInfo : NSObject {

	NSHashTable* _observers;
	NSMutableDictionary* _blockObservers;
	FBSyncPresence* _currentPresence;

}

@property (nonatomic,retain) NSHashTable * observers;                           //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * blockObservers;              //@synthesize blockObservers=_blockObservers - In the implementation block
@property (nonatomic,copy) FBSyncPresence * currentPresence;                    //@synthesize currentPresence=_currentPresence - In the implementation block
-(NSMutableDictionary *)blockObservers;
-(void)setBlockObservers:(NSMutableDictionary *)arg1 ;
-(FBSyncPresence *)currentPresence;
-(void)setCurrentPresence:(FBSyncPresence *)arg1 ;
-(id)init;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
@end

