/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentConnectionSectionComponentListener <NSObject>
@required
-(void)didTapLikeOnCommentOrReply:(id)arg1;
-(void)activateComposerForComment:(id)arg1 mentioningAuthorOfReply:(id)arg2;
-(void)hideCommentComposerDuringEditingForCommentOrReply:(id)arg1;
-(void)unhideCommentComposerAfterEditingForCommentOrReply:(id)arg1;
-(void)switchToEditModeWithCommentOrReply:(id)arg1;
-(void)exitEditModeWithCommentOrReply:(id)arg1;
-(void)scrollToCommentOrReplyBeingEdited:(id)arg1;
-(void)didReceiveCommentsAfterInitialLoad:(id)arg1 atIndexes:(id)arg2;
-(void)unfocusReplyThread;

@end
