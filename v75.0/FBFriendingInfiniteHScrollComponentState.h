/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBFriendingInfiniteHScrollComponentState : NSObject {

	unsigned long long _endReason;
	unsigned long long _lastCompletedLoadIdentifier;
	NSArray* _allObjects;

}

@property (nonatomic,readonly) unsigned long long endReason;                                //@synthesize endReason=_endReason - In the implementation block
@property (nonatomic,readonly) unsigned long long lastCompletedLoadIdentifier;              //@synthesize lastCompletedLoadIdentifier=_lastCompletedLoadIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allObjects;                                   //@synthesize allObjects=_allObjects - In the implementation block
+(id)newWithEndReason:(unsigned long long)arg1 allObjects:(id)arg2 lastCompletedLoadIdentifier:(unsigned long long)arg3 ;
-(unsigned long long)lastCompletedLoadIdentifier;
-(id)initWithEndReason:(unsigned long long)arg1 allObjects:(id)arg2 lastCompletedLoadIdentifier:(unsigned long long)arg3 ;
-(NSArray *)allObjects;
-(unsigned long long)endReason;
@end

