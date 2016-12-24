/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBOutgoingMessageTarget;

@interface MNMessageSendQueueKey : FBValueObject <NSCopying> {

	FBOutgoingMessageTarget* _target;
	unsigned long long _type;

}

@property (nonatomic,copy,readonly) FBOutgoingMessageTarget * target;              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                            //@synthesize type=_type - In the implementation block
-(id)initWithTarget:(id)arg1 type:(unsigned long long)arg2 ;
-(unsigned long long)type;
-(FBOutgoingMessageTarget *)target;
@end

