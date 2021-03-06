/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, FBOutgoingMessageContent, NSDictionary, FBExtensibleMessageData;

@interface FBOutgoingMessage : FBValueObject <NSCopying, NSCoding> {

	NSString* _offlineThreadingId;
	FBOutgoingMessageContent* _content;
	NSDictionary* _clientTags;
	FBExtensibleMessageData* _extensibleMessageData;
	long long _messageLifeTime;

}

@property (nonatomic,copy,readonly) NSString * offlineThreadingId;                                //@synthesize offlineThreadingId=_offlineThreadingId - In the implementation block
@property (nonatomic,copy,readonly) FBOutgoingMessageContent * content;                           //@synthesize content=_content - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * clientTags;                                    //@synthesize clientTags=_clientTags - In the implementation block
@property (nonatomic,copy,readonly) FBExtensibleMessageData * extensibleMessageData;              //@synthesize extensibleMessageData=_extensibleMessageData - In the implementation block
@property (nonatomic,readonly) long long messageLifeTime;                                         //@synthesize messageLifeTime=_messageLifeTime - In the implementation block
-(NSString *)offlineThreadingId;
-(NSDictionary *)clientTags;
-(FBExtensibleMessageData *)extensibleMessageData;
-(long long)messageLifeTime;
-(id)initWithOfflineThreadingId:(id)arg1 content:(id)arg2 clientTags:(id)arg3 extensibleMessageData:(id)arg4 messageLifeTime:(long long)arg5 ;
-(FBOutgoingMessageContent *)content;
@end

