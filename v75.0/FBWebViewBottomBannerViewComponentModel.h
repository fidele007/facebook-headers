/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString;

@interface FBWebViewBottomBannerViewComponentModel : NSObject {

	NSString* _title;
	NSString* _subtitle;
	unsigned long long _style;
	id<NSObject> _target;
	SEL _action;

}

@property (nonatomic,copy,readonly) NSString * title;                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;              //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic,__weak) id<NSObject> target;              //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                              //@synthesize action=_action - In the implementation block
+(id)newWithTitle:(id)arg1 subTitle:(id)arg2 style:(unsigned long long)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 style:(unsigned long long)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(void)setTarget:(id<NSObject>)arg1 ;
-(SEL)action;
-(NSString *)title;
-(unsigned long long)style;
-(id<NSObject>)target;
-(void)setAction:(SEL)arg1 ;
-(NSString *)subtitle;
@end

