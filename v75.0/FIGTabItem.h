/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FIGTabItem : NSObject {

	NSString* _title;
	unsigned long long _badgeCount;

}

@property (nonatomic,copy,readonly) NSString * title;                      //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) unsigned long long badgeCount;              //@synthesize badgeCount=_badgeCount - In the implementation block
+(id)newWithTitle:(id)arg1 badgeCount:(unsigned long long)arg2 ;
-(id)initWithTitle:(id)arg1 image:(id)arg2 badgeCount:(unsigned long long)arg3 ;
-(NSString *)title;
-(unsigned long long)badgeCount;
@end

