/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary;

@interface MNMessageSendHistory : FBValueObject <NSCoding, NSCopying> {

	BOOL _isMontageMessage;
	long long _messageContentType;
	long long _mqttAttempts;
	long long _graphAttempts;
	long long _extentionAttempts;
	unsigned long long _startTimestamp;
	unsigned long long _lastAttemptMessageSendMethod;
	NSString* _lastSendError;
	long long _numOfFailure;
	long long _numOfRestoration;
	long long _numOfManualRetry;
	long long _sizeInBytesOfSubAttachments;
	long long _numberOfSubAttachments;
	long long _preparationAttempts;
	NSDictionary* _preparationExtraLoggingData;

}

@property (nonatomic,readonly) long long messageContentType;                                 //@synthesize messageContentType=_messageContentType - In the implementation block
@property (nonatomic,readonly) long long mqttAttempts;                                       //@synthesize mqttAttempts=_mqttAttempts - In the implementation block
@property (nonatomic,readonly) long long graphAttempts;                                      //@synthesize graphAttempts=_graphAttempts - In the implementation block
@property (nonatomic,readonly) long long extentionAttempts;                                  //@synthesize extentionAttempts=_extentionAttempts - In the implementation block
@property (nonatomic,readonly) unsigned long long startTimestamp;                            //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long lastAttemptMessageSendMethod;              //@synthesize lastAttemptMessageSendMethod=_lastAttemptMessageSendMethod - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastSendError;                                //@synthesize lastSendError=_lastSendError - In the implementation block
@property (nonatomic,readonly) long long numOfFailure;                                       //@synthesize numOfFailure=_numOfFailure - In the implementation block
@property (nonatomic,readonly) long long numOfRestoration;                                   //@synthesize numOfRestoration=_numOfRestoration - In the implementation block
@property (nonatomic,readonly) long long numOfManualRetry;                                   //@synthesize numOfManualRetry=_numOfManualRetry - In the implementation block
@property (nonatomic,readonly) long long sizeInBytesOfSubAttachments;                        //@synthesize sizeInBytesOfSubAttachments=_sizeInBytesOfSubAttachments - In the implementation block
@property (nonatomic,readonly) long long numberOfSubAttachments;                             //@synthesize numberOfSubAttachments=_numberOfSubAttachments - In the implementation block
@property (nonatomic,readonly) long long preparationAttempts;                                //@synthesize preparationAttempts=_preparationAttempts - In the implementation block
@property (nonatomic,readonly) BOOL isMontageMessage;                                        //@synthesize isMontageMessage=_isMontageMessage - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * preparationExtraLoggingData;              //@synthesize preparationExtraLoggingData=_preparationExtraLoggingData - In the implementation block
-(id)initWithMessageContentType:(long long)arg1 mqttAttempts:(long long)arg2 graphAttempts:(long long)arg3 extentionAttempts:(long long)arg4 startTimestamp:(unsigned long long)arg5 lastAttemptMessageSendMethod:(unsigned long long)arg6 lastSendError:(id)arg7 numOfFailure:(long long)arg8 numOfRestoration:(long long)arg9 numOfManualRetry:(long long)arg10 sizeInBytesOfSubAttachments:(long long)arg11 numberOfSubAttachments:(long long)arg12 preparationAttempts:(long long)arg13 isMontageMessage:(BOOL)arg14 preparationExtraLoggingData:(id)arg15 ;
-(long long)messageContentType;
-(long long)mqttAttempts;
-(long long)graphAttempts;
-(long long)extentionAttempts;
-(unsigned long long)lastAttemptMessageSendMethod;
-(NSString *)lastSendError;
-(long long)numOfFailure;
-(long long)numOfRestoration;
-(long long)numOfManualRetry;
-(long long)sizeInBytesOfSubAttachments;
-(long long)numberOfSubAttachments;
-(long long)preparationAttempts;
-(BOOL)isMontageMessage;
-(NSDictionary *)preparationExtraLoggingData;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)startTimestamp;
@end

