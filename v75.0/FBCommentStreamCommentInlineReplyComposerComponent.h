/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKStatefulViewComponent.h>

@protocol FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate;
@class FBCommentComposerViewController, FBCommentStreamKeyboardAwareInsetManager;

@interface FBCommentStreamCommentInlineReplyComposerComponent : CKStatefulViewComponent {

	FBCommentComposerViewController* _composerViewController;
	FBCommentStreamKeyboardAwareInsetManager* _insetManager;
	id<FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate> _composerDelegate;

}

@property (nonatomic,readonly) FBCommentComposerViewController * composerViewController;                                               //@synthesize composerViewController=_composerViewController - In the implementation block
@property (nonatomic,readonly) FBCommentStreamKeyboardAwareInsetManager * insetManager;                                                //@synthesize insetManager=_insetManager - In the implementation block
@property (nonatomic,readonly) id<FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate> composerDelegate;              //@synthesize composerDelegate=_composerDelegate - In the implementation block
+(id)newWithCommentComposerViewController:(id)arg1 composerDelegate:(id)arg2 insetManager:(id)arg3 ;
-(id<FBCommentStreamCommentInlineReplyComposerComponentControllerDelegate>)composerDelegate;
-(FBCommentComposerViewController *)composerViewController;
-(FBCommentStreamKeyboardAwareInsetManager *)insetManager;
@end

