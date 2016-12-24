/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class CKComponent;

@interface FBPulseButtonViewComponent : CKCompositeComponent {

	CKComponent* _iconComponent;
	CKComponent* _infoComponent;
	id _target;
	SEL _action;

}

@property (assign,nonatomic,__weak) id target;                           //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL action;                                 //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) CKComponent * iconComponent;              //@synthesize iconComponent=_iconComponent - In the implementation block
@property (nonatomic,readonly) CKComponent * infoComponent;              //@synthesize infoComponent=_infoComponent - In the implementation block
+(id)newWithTitle:(id)arg1 subtitle:(id)arg2 style:(FBBottomButtonViewComponentStyle)arg3 target:(id)arg4 action:(SEL)arg5 ;
-(void)buttonViewTapped:(id)arg1 ;
-(CKComponent *)iconComponent;
-(CKComponent *)infoComponent;
-(void)setTarget:(id)arg1 ;
-(SEL)action;
-(id)target;
-(void)setAction:(SEL)arg1 ;
@end

