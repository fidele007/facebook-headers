/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBInternalSettingsActionItem : NSObject {

	NSString* _title;
	/*^block*/id _actionBlock;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)initWithTitle:(id)arg1 actionBlock:(/*^block*/id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)performAction;
@end

