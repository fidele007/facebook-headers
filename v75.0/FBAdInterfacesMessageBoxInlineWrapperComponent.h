/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBAdInterfacesMessage, FBAdInterfacesComponentToolbox;

@interface FBAdInterfacesMessageBoxInlineWrapperComponent : CKCompositeComponent {

	FBAdInterfacesMessage* _message;
	FBAdInterfacesComponentToolbox* _toolbox;

}

@property (nonatomic,retain) FBAdInterfacesMessage * message;                       //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) FBAdInterfacesComponentToolbox * toolbox;              //@synthesize toolbox=_toolbox - In the implementation block
+(id)newWithMessage:(id)arg1 actionStyle:(unsigned long long)arg2 logAction:(CKTypedComponentAction<>)arg3 toolbox:(id)arg4 ;
-(FBAdInterfacesComponentToolbox *)toolbox;
-(void)setToolbox:(FBAdInterfacesComponentToolbox *)arg1 ;
-(void)didTapComponent:(id)arg1 ;
-(void)linkTapped:(id)arg1 withCheckingResults:(id)arg2 ;
-(FBAdInterfacesMessage *)message;
-(void)setMessage:(FBAdInterfacesMessage *)arg1 ;
@end
