/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class CKComponent;

@interface FBTarotDigestEndCardContentComponent : CKCompositeComponent {

	unsigned long long _subscribeStatus;
	/*^block*/id _setSubscribeStatus;
	CKComponent* _detailComponent;
	CKComponent* _followButtonComponent;
	CKComponent* _subscribeButtonComponent;

}

@property (nonatomic,readonly) unsigned long long subscribeStatus;                  //@synthesize subscribeStatus=_subscribeStatus - In the implementation block
@property (nonatomic,copy,readonly) id setSubscribeStatus;                          //@synthesize setSubscribeStatus=_setSubscribeStatus - In the implementation block
@property (nonatomic,readonly) CKComponent * detailComponent;                       //@synthesize detailComponent=_detailComponent - In the implementation block
@property (nonatomic,readonly) CKComponent * followButtonComponent;                 //@synthesize followButtonComponent=_followButtonComponent - In the implementation block
@property (nonatomic,readonly) CKComponent * subscribeButtonComponent;              //@synthesize subscribeButtonComponent=_subscribeButtonComponent - In the implementation block
+(id)newWithPageName:(id)arg1 subscribeStatus:(unsigned long long)arg2 setSubscribeStatus:(/*^block*/id)arg3 toolbox:(id)arg4 ;
-(vector<CKComponentAnimation, std::__1::allocator<CKComponentAnimation> >*)animationsFromPreviousComponent:(id)arg1 ;
-(unsigned long long)subscribeStatus;
-(CKComponent *)detailComponent;
-(void)_didTapFollowButton;
-(void)_didTapSubscribeButton;
-(CKComponent *)followButtonComponent;
-(CKComponent *)subscribeButtonComponent;
-(id)setSubscribeStatus;
@end

