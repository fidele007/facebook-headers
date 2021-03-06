/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSString;

@interface FBAccountConfirmationMegaphonePrimaryButtonComponentModel : NSObject {

	BOOL _enabled;
	NSString* _buttonTitle;
	CKTypedComponentAction<> _buttonTapAction;

}

@property (nonatomic,copy,readonly) NSString * buttonTitle;                           //@synthesize buttonTitle=_buttonTitle - In the implementation block
@property (nonatomic,readonly) CKTypedComponentAction<> buttonTapAction;              //@synthesize buttonTapAction=_buttonTapAction - In the implementation block
@property (nonatomic,readonly) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
+(id)newWithButtonTitle:(id)arg1 withButtonTapAction:(CKTypedComponentAction<>)arg2 withEnabled:(BOOL)arg3 ;
-(CKTypedComponentAction<>)buttonTapAction;
-(BOOL)enabled;
-(NSString *)buttonTitle;
@end

