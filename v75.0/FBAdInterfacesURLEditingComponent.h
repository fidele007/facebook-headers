/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FBAdInterfacesURLEditingComponent : CKCompositeComponent {

	CKTypedComponentAction<> _urlChangedAction;

}
+(id)newWithURLString:(id)arg1 urlChangedAction:(CKTypedComponentAction<>)arg2 errorMessage:(id)arg3 placeholder:(id)arg4 ;
+(id)newWithURLString:(id)arg1 urlChangedAction:(CKTypedComponentAction<>)arg2 errorMessage:(id)arg3 ;
-(void)returnKeyTapped:(id)arg1 text:(id)arg2 ;
-(void)textFieldDidChange:(id)arg1 text:(id)arg2 ;
@end

