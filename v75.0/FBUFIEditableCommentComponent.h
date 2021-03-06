/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBUFIEditableCommentBodyComponent;

@interface FBUFIEditableCommentComponent : CKCompositeComponent {

	CKTypedComponentAction<> _didBeginEditingAction;
	CKTypedComponentAction<> _cancelEditingAction;
	CKTypedComponentAction<> _commitEditingAction;
	FBUFIEditableCommentBodyComponent* _bodyComponent;

}
+(id)newWithComment:(id)arg1 layoutDefinition:(id)arg2 toolbox:(id)arg3 mentionController:(id)arg4 didBeginEditingAction:(CKTypedComponentAction<>)arg5 cancelEditingAction:(CKTypedComponentAction<>)arg6 commitEditingAction:(CKTypedComponentAction<>)arg7 ;
+(id)initialState;
-(void)bodyComponentDidBeginEditing:(id)arg1 ;
-(void)bodyComponentDidUpdateText:(id)arg1 ;
-(void)didTapCancelButtonComponent:(id)arg1 ;
-(void)didTapUpdateButtonComponent:(id)arg1 ;
@end

