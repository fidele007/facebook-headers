/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMSyncedThreadKey, FBStringWithRedactedDescription, NSString;

@interface MNAPNSMessageReaction : FBValueObject <NSCopying> {

	FBMSyncedThreadKey* _threadKey;
	FBStringWithRedactedDescription* _text;
	NSString* _senderId;

}

@property (nonatomic,copy,readonly) FBMSyncedThreadKey * threadKey;                      //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) FBStringWithRedactedDescription * text;              //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderId;                                 //@synthesize senderId=_senderId - In the implementation block
-(NSString *)senderId;
-(id)initWithThreadKey:(id)arg1 text:(id)arg2 senderId:(id)arg3 ;
-(FBStringWithRedactedDescription *)text;
-(FBMSyncedThreadKey *)threadKey;
@end

