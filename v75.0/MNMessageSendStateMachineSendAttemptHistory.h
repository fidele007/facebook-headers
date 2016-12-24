/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface MNMessageSendStateMachineSendAttemptHistory : FBValueObject <NSCopying> {

	long long _numberOfAttemptsOnExtension;
	long long _numberOfAttemptsOnMqtt;
	long long _numberOfAttemptsOnGraph;
	double _sendDuration;
	unsigned long long _lastAttemptMessageSendMethod;
	unsigned long long _lastFailedMessageSendMethod;
	NSError* _lastSendError;

}

@property (nonatomic,readonly) long long numberOfAttemptsOnExtension;                        //@synthesize numberOfAttemptsOnExtension=_numberOfAttemptsOnExtension - In the implementation block
@property (nonatomic,readonly) long long numberOfAttemptsOnMqtt;                             //@synthesize numberOfAttemptsOnMqtt=_numberOfAttemptsOnMqtt - In the implementation block
@property (nonatomic,readonly) long long numberOfAttemptsOnGraph;                            //@synthesize numberOfAttemptsOnGraph=_numberOfAttemptsOnGraph - In the implementation block
@property (nonatomic,readonly) double sendDuration;                                          //@synthesize sendDuration=_sendDuration - In the implementation block
@property (nonatomic,readonly) unsigned long long lastAttemptMessageSendMethod;              //@synthesize lastAttemptMessageSendMethod=_lastAttemptMessageSendMethod - In the implementation block
@property (nonatomic,readonly) unsigned long long lastFailedMessageSendMethod;               //@synthesize lastFailedMessageSendMethod=_lastFailedMessageSendMethod - In the implementation block
@property (nonatomic,copy,readonly) NSError * lastSendError;                                 //@synthesize lastSendError=_lastSendError - In the implementation block
-(unsigned long long)lastAttemptMessageSendMethod;
-(NSError *)lastSendError;
-(unsigned long long)lastFailedMessageSendMethod;
-(long long)numberOfAttemptsOnMqtt;
-(long long)numberOfAttemptsOnGraph;
-(long long)numberOfAttemptsOnExtension;
-(id)initWithNumberOfAttemptsOnExtension:(long long)arg1 numberOfAttemptsOnMqtt:(long long)arg2 numberOfAttemptsOnGraph:(long long)arg3 sendDuration:(double)arg4 lastAttemptMessageSendMethod:(unsigned long long)arg5 lastFailedMessageSendMethod:(unsigned long long)arg6 lastSendError:(id)arg7 ;
-(double)sendDuration;
@end
