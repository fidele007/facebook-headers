/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString;

@interface FBEventTabIntentTarget : FBIntentTarget {

	NSString* _FBID;
	NSString* _tab;

}

@property (nonatomic,copy,readonly) NSString * FBID;              //@synthesize FBID=_FBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * tab;               //@synthesize tab=_tab - In the implementation block
+(id)eventTargetWithFBID:(id)arg1 tab:(id)arg2 ;
-(NSString *)FBID;
-(id)fallbackURLs;
-(NSString *)tab;
-(BOOL)isEqual:(id)arg1 ;
@end
