/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSString;

@interface FBEventsDashboardIntentTarget : FBIntentTarget {

	NSString* _referrer;
	NSString* _tabName;

}

@property (nonatomic,copy,readonly) NSString * referrer;              //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,copy,readonly) NSString * tabName;               //@synthesize tabName=_tabName - In the implementation block
+(id)newWithReferrer:(id)arg1 tabName:(id)arg2 ;
-(id)fallbackURLs;
-(NSString *)tabName;
-(NSString *)referrer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
@end

