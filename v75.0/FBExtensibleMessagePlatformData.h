/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBExtensibleMessagePlatformData : FBValueObject <NSCoding, NSCopying> {

	BOOL _ignoreForWebhook;
	unsigned long long _quickRepliesType;
	NSArray* _quickReplies;
	long long _broadcastUnitId;

}

@property (nonatomic,readonly) BOOL ignoreForWebhook;                            //@synthesize ignoreForWebhook=_ignoreForWebhook - In the implementation block
@property (nonatomic,readonly) unsigned long long quickRepliesType;              //@synthesize quickRepliesType=_quickRepliesType - In the implementation block
@property (nonatomic,copy,readonly) NSArray * quickReplies;                      //@synthesize quickReplies=_quickReplies - In the implementation block
@property (nonatomic,readonly) long long broadcastUnitId;                        //@synthesize broadcastUnitId=_broadcastUnitId - In the implementation block
-(id)initWithIgnoreForWebhook:(BOOL)arg1 quickRepliesType:(unsigned long long)arg2 quickReplies:(id)arg3 broadcastUnitId:(long long)arg4 ;
-(BOOL)ignoreForWebhook;
-(unsigned long long)quickRepliesType;
-(NSArray *)quickReplies;
-(long long)broadcastUnitId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end
