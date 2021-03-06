/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FBMessengerInboxCounts : FBValueObject <NSCopying> {

	unsigned long long _unseenThreadCount;
	unsigned long long _recentUnreadThreadCount;

}

@property (nonatomic,readonly) unsigned long long unseenThreadCount;                    //@synthesize unseenThreadCount=_unseenThreadCount - In the implementation block
@property (nonatomic,readonly) unsigned long long recentUnreadThreadCount;              //@synthesize recentUnreadThreadCount=_recentUnreadThreadCount - In the implementation block
-(unsigned long long)recentUnreadThreadCount;
-(unsigned long long)unseenThreadCount;
-(id)initWithUnseenThreadCount:(unsigned long long)arg1 recentUnreadThreadCount:(unsigned long long)arg2 ;
@end

