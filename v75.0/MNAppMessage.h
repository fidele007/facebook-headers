/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMMessageKey, NSString, MNAbstractMessage;

@interface MNAppMessage : FBValueObject <NSCopying> {

	FBMMessageKey* _messageKey;
	NSString* _senderId;
	unsigned long long _timestamp;
	MNAbstractMessage* _abstractMessage;

}

@property (nonatomic,copy,readonly) FBMMessageKey * messageKey;                       //@synthesize messageKey=_messageKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                              //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy,readonly) MNAbstractMessage * abstractMessage;              //@synthesize abstractMessage=_abstractMessage - In the implementation block
-(NSString *)senderId;
-(id)initWithMessageKey:(id)arg1 senderId:(id)arg2 timestamp:(unsigned long long)arg3 abstractMessage:(id)arg4 ;
-(FBMMessageKey *)messageKey;
-(MNAbstractMessage *)abstractMessage;
-(unsigned long long)timestamp;
@end

