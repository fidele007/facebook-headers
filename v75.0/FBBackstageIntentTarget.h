/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString;

@interface FBBackstageIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _directThreadID;

}

@property (nonatomic,copy,readonly) NSString * FBID;                        //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * directThreadID;              //@synthesize directThreadID=_directThreadID - In the implementation block
+(id)replyTargetWithID:(id)arg1 directThreadID:(id)arg2 ;
-(NSString *)FBID;
-(id)fallbackURLs;
-(NSString *)directThreadID;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

