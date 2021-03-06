/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFeedbackTargetProtocol;
@class FBUserSession, FBCommentComposerView;

@interface FBCommentComposerPrivateCommentController : NSObject {

	FBUserSession* _session;
	FBCommentComposerView* _commentComposerView;
	id<FBFeedbackTargetProtocol> _feedbackTarget;

}
-(void)setComposerPrivateCommentModeForPrivateReply;
-(void)updatePrivateCommentsModeWithFeedback:(id)arg1 ;
-(void)toggleComposerPrivateCommentMode;
-(id)initWithSession:(id)arg1 commentComposerView:(id)arg2 feedbackTarget:(id)arg3 ;
@end

