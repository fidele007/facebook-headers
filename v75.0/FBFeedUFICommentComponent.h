/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@interface FBFeedUFICommentComponent : CKCompositeComponent
+(id)newWithComment:(id)arg1 feedbackTarget:(id)arg2 editingComment:(id)arg3 cancelEditingAction:(CKTypedComponentAction<>)arg4 commitEditingAction:(CKTypedComponentAction<>)arg5 secondaryButtonAction:(CKTypedComponentAction<>)arg6 toolbox:(id)arg7 ;
-(void)didTapReplyButton:(id)arg1 withComment:(id)arg2 ;
-(void)didTapReplyRow;
-(void)composerDidEndEditing;
@end

