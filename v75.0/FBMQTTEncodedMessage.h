/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, NSNumber;

@interface FBMQTTEncodedMessage : NSObject {

	int _qos;
	NSString* _topic;
	NSData* _payload;
	double _rawReceiveTime;
	NSNumber* _messageID;

}

@property (nonatomic,copy) NSString * topic;                     //@synthesize topic=_topic - In the implementation block
@property (assign,nonatomic) int qos;                            //@synthesize qos=_qos - In the implementation block
@property (assign,nonatomic) double rawReceiveTime;              //@synthesize rawReceiveTime=_rawReceiveTime - In the implementation block
@property (nonatomic,copy) NSNumber * messageID;                 //@synthesize messageID=_messageID - In the implementation block
@property (nonatomic,copy) NSData * payload;                     //@synthesize payload=_payload - In the implementation block
+(id)messageWithTopic:(id)arg1 payload:(id)arg2 ;
+(id)messageWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 ;
+(id)messageWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 rawReceiveTime:(double)arg4 ;
-(id)initWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 rawReceiveTime:(double)arg4 ;
-(void)setRawReceiveTime:(double)arg1 ;
-(id)initWithTopic:(id)arg1 payload:(id)arg2 qos:(int)arg3 ;
-(double)rawReceiveTime;
-(id)description;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(void)setQos:(int)arg1 ;
-(int)qos;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(NSNumber *)messageID;
-(void)setMessageID:(NSNumber *)arg1 ;
@end

