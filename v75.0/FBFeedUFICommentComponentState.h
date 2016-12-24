/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBFeedUFICommentComponentState : NSObject {

	BOOL _shouldShowReplyComposer;
	BOOL _shouldActivateComposer;
	BOOL _showRepliesInline;

}

@property (nonatomic,readonly) BOOL shouldShowReplyComposer;              //@synthesize shouldShowReplyComposer=_shouldShowReplyComposer - In the implementation block
@property (nonatomic,readonly) BOOL shouldActivateComposer;               //@synthesize shouldActivateComposer=_shouldActivateComposer - In the implementation block
@property (nonatomic,readonly) BOOL showRepliesInline;                    //@synthesize showRepliesInline=_showRepliesInline - In the implementation block
+(id)stateWithShouldShowReplyComposer:(BOOL)arg1 shouldActivateComposer:(BOOL)arg2 showRepliesInline:(BOOL)arg3 ;
-(BOOL)shouldActivateComposer;
-(BOOL)showRepliesInline;
-(BOOL)shouldShowReplyComposer;
@end

