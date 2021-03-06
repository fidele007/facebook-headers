/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamingEventEntity.h>

@class NSArray;

@interface FBStreamingEventWatchEntity : FBStreamingEventEntity {

	BOOL _isPast;
	BOOL _isForBroadcaster;
	long long _broadcastType;
	NSArray* _viewers;

}

@property (nonatomic,copy,readonly) NSArray * viewers;              //@synthesize viewers=_viewers - In the implementation block
-(id)actorId;
-(BOOL)isActorVerified;
-(BOOL)isFocal;
-(id)initWithViewers:(id)arg1 isPast:(BOOL)arg2 isForBroadcaster:(BOOL)arg3 broadcastType:(long long)arg4 ;
-(NSArray *)viewers;
-(id)init;
-(unsigned long long)type;
-(id)attributedText;
@end

