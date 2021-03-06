/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBAdInterfacesComponentToolbox, NSString;

@interface FBAdInterfacesMessageBannerComponent : CKCompositeComponent {

	FBAdInterfacesComponentToolbox* _toolbox;
	unsigned long long _type;
	NSString* _message;
	CKTypedComponentAction<> _logAction;

}

@property (assign,nonatomic) CKTypedComponentAction<> logAction;              //@synthesize logAction=_logAction - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * message;                                //@synthesize message=_message - In the implementation block
+(id)newWithType:(unsigned long long)arg1 actionType:(unsigned long long)arg2 text:(id)arg3 actionTitle:(id)arg4 action:(CKTypedComponentAction<>)arg5 logAction:(CKTypedComponentAction<>)arg6 enableDropShadow:(BOOL)arg7 toolbox:(id)arg8 ;
-(void)linkTapped:(id)arg1 withCheckingResults:(id)arg2 ;
-(void)setLogAction:(CKTypedComponentAction<>)arg1 ;
-(CKTypedComponentAction<>)logAction;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned long long)type;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
@end

