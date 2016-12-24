/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage;

@interface FBThrowbackShareActionItem : NSObject {

	unsigned long long _action;
	NSString* _title;
	UIImage* _icon;

}

@property (nonatomic,readonly) unsigned long long action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                         //@synthesize icon=_icon - In the implementation block
+(id)newWithTitle:(id)arg1 icon:(id)arg2 action:(unsigned long long)arg3 ;
-(unsigned long long)action;
-(NSString *)title;
-(UIImage *)icon;
@end

