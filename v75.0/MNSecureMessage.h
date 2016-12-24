/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMSecureThreadKey, MNSecureMessageContent, MNSecureMessageReportableContent;

@interface MNSecureMessage : FBValueObject <NSCoding, NSCopying> {

	NSString* _messageId;
	FBMSecureThreadKey* _secureThreadKey;
	NSString* _senderId;
	unsigned long long _timestamp;
	long long _messageLifetime;
	MNSecureMessageContent* _content;
	MNSecureMessageReportableContent* _reportableContent;

}

@property (nonatomic,copy,readonly) NSString * messageId;                                              //@synthesize messageId=_messageId - In the implementation block
@property (nonatomic,copy,readonly) FBMSecureThreadKey * secureThreadKey;                              //@synthesize secureThreadKey=_secureThreadKey - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                               //@synthesize senderId=_senderId - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long messageLifetime;                                              //@synthesize messageLifetime=_messageLifetime - In the implementation block
@property (nonatomic,copy,readonly) MNSecureMessageContent * content;                                  //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) MNSecureMessageReportableContent * reportableContent;              //@synthesize reportableContent=_reportableContent - In the implementation block
-(NSString *)senderId;
-(FBMSecureThreadKey *)secureThreadKey;
-(long long)messageLifetime;
-(MNSecureMessageReportableContent *)reportableContent;
-(id)initWithMessageId:(id)arg1 secureThreadKey:(id)arg2 senderId:(id)arg3 timestamp:(unsigned long long)arg4 messageLifetime:(long long)arg5 content:(id)arg6 reportableContent:(id)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)timestamp;
-(MNSecureMessageContent *)content;
-(NSString *)messageId;
@end

