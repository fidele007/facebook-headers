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

@interface FBCommentStreamCommentReplyPagerComponent : CKCompositeComponent {

	FBMemComment* _comment;
	CKTypedComponentAction<> _pagerTappedAction;

}
+(id)newWithComment:(id)arg1 pagerCount:(unsigned long long)arg2 layoutDefinition:(id)arg3 pagerTappedAction:(CKTypedComponentAction<>)arg4 cellTapAction:(CKTypedComponentAction<>)arg5 dimmedTapAction:(CKTypedComponentAction<>)arg6 type:(unsigned long long)arg7 options:(FBProfileScrollingBehavior)arg8 useInlineReplyExpansionStyling:(BOOL)arg9 useNewPagerText:(BOOL)arg10 session:(id)arg11 ;
-(void)didTapPager:(id)arg1 ;
@end

