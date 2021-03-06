/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBEventShareInfo : NSObject {

	BOOL _isReply;
	NSString* _eventId;
	NSString* _groupThreadFbid;
	NSString* _canonicalFbid;
	NSArray* _recipientFbids;

}

@property (nonatomic,copy,readonly) NSString * eventId;                      //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupThreadFbid;              //@synthesize groupThreadFbid=_groupThreadFbid - In the implementation block
@property (nonatomic,copy,readonly) NSString * canonicalFbid;                //@synthesize canonicalFbid=_canonicalFbid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipientFbids;                //@synthesize recipientFbids=_recipientFbids - In the implementation block
@property (nonatomic,readonly) BOOL isReply;                                 //@synthesize isReply=_isReply - In the implementation block
-(NSArray *)recipientFbids;
-(id)initWithEvent:(id)arg1 canonicalFbid:(id)arg2 ;
-(NSString *)groupThreadFbid;
-(id)initWithEvent:(id)arg1 groupThreadFbid:(id)arg2 ;
-(id)initWithEventId:(id)arg1 recipientFbids:(id)arg2 groupThreadFbid:(id)arg3 canonicalFbid:(id)arg4 isReply:(BOOL)arg5 ;
-(id)initWithEvent:(id)arg1 recipientFbids:(id)arg2 ;
-(NSString *)canonicalFbid;
-(id)url;
-(id)initWithURL:(id)arg1 ;
-(NSString *)eventId;
-(BOOL)isReply;
@end

