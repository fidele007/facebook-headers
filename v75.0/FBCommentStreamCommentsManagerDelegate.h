/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentStreamCommentsManagerDelegate <NSObject>
@required
-(void)commentsManager:(id)arg1 shouldRefreshFeedbackTarget:(id)arg2;
-(void)commentsManagerDidCompleteLoadingNetworkContent:(id)arg1;
-(void)commentsManager:(id)arg1 didStartEditingComment:(id)arg2;
-(void)didTapCommentToReply:(id)arg1;
-(void)didTapDimmedComment;
-(void)commentsManagerDidLoadComments:(id)arg1 fromInitialQuery:(BOOL)arg2;
-(void)commentsManagerDidUpdateDataSource:(id)arg1;
-(void)commentsManager:(id)arg1 didUpdateCommentsDisabledFields:(id)arg2;
-(void)commentsManager:(id)arg1 didReplaceCommentsController:(id)arg2;
-(BOOL)commentsManagerIsCommentsViewVisible:(id)arg1;

@end

