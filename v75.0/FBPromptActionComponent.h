/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBInlineComposerPromptSession, FBPromptToolbox;

@interface FBPromptActionComponent : CKCompositeComponent {

	FBInlineComposerPromptSession* _promptSession;
	FBPromptToolbox* _toolbox;

}
+(id)newWithPromptSession:(id)arg1 component:(id)arg2 toolbox:(id)arg3 ;
-(void)didTapPromptWithSender:(id)arg1 context:(id)arg2 ;
-(void)didTapClosePromptWithSender:(id)arg1 ;
-(void)didTapTogglePromptWithSender:(id)arg1 hideReason:(id)arg2 ;
@end

