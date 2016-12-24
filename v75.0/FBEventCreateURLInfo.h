/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBEventCreateURLInfo : NSObject {

	NSString* _urlScheme;
	NSString* _groupThreadFbid;
	NSArray* _recipientFbids;

}

@property (nonatomic,copy,readonly) NSString * groupThreadFbid;              //@synthesize groupThreadFbid=_groupThreadFbid - In the implementation block
@property (nonatomic,copy,readonly) NSArray * recipientFbids;                //@synthesize recipientFbids=_recipientFbids - In the implementation block
-(BOOL)isCanonical;
-(NSArray *)recipientFbids;
-(NSString *)groupThreadFbid;
-(id)initWithGroupThreadFbid:(id)arg1 recipientFbids:(id)arg2 urlScheme:(id)arg3 ;
-(id)initWithOtherUserFbid:(id)arg1 urlScheme:(id)arg2 ;
-(id)url;
-(id)initWithURL:(id)arg1 ;
@end
