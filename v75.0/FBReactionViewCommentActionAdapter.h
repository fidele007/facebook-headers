/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionBaseActionAdapter.h>

@class FBMemComment, FBMemFeedStory, NSString;

@interface FBReactionViewCommentActionAdapter : FBReactionBaseActionAdapter {

	FBMemComment* _comment;
	FBMemFeedStory* _story;
	NSString* _style;

}
+(id)intentTargetForStory:(id)arg1 focusedCommentID:(id)arg2 parentCommentID:(id)arg3 style:(id)arg4 ;
+(id)interactionTypeForStyle:(id)arg1 ;
-(void)performActionWithExtras:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(BOOL)performMagicTap;
-(id)_commonLoggingExtras;
@end
