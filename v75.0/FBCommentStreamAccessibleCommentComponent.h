/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBMemComment;

@interface FBCommentStreamAccessibleCommentComponent : CKCompositeComponent {

	FBMemComment* _comment;
	CKTypedComponentAction<> _replyOverlayAction;

}
+(id)newWithComment:(id)arg1 renderAsInlineReply:(BOOL)arg2 containerLayoutDefinition:(id)arg3 commentLayoutDefinition:(id)arg4 options:(FBProfileScrollingBehavior)arg5 toolbox:(id)arg6 cellTapAction:(CKTypedComponentAction<>)arg7 replyRowAction:(CKTypedComponentAction<>)arg8 replyOverlayAction:(CKTypedComponentAction<>)arg9 replyToCommentAction:(CKTypedComponentAction<>)arg10 likeCommentAction:(CKTypedComponentAction<>)arg11 secondaryButtonAction:(CKTypedComponentAction<>)arg12 dimmedTapAction:(CKTypedComponentAction<>)arg13 vpvLoggingWorkingRangeListener:(id)arg14 commentStateListenerAnnouncer:(id)arg15 useInlineReplyExpansionComponent:(BOOL)arg16 ;
-(void)overlayTapped:(id)arg1 ;
@end
