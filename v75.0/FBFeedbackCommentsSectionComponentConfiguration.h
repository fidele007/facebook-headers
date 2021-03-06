/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBMemFeedback, NSString;

@interface FBFeedbackCommentsSectionComponentConfiguration : NSObject {

	BOOL _shouldAllowCommentTapActions;
	BOOL _shouldShowNoCommentIndicator;
	FBMemFeedback* _feedback;
	NSString* _focusedCommentID;
	NSString* _focusedReplyID;

}

@property (nonatomic,readonly) FBMemFeedback * feedback;                       //@synthesize feedback=_feedback - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedCommentID;               //@synthesize focusedCommentID=_focusedCommentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedReplyID;                 //@synthesize focusedReplyID=_focusedReplyID - In the implementation block
@property (nonatomic,readonly) BOOL shouldAllowCommentTapActions;              //@synthesize shouldAllowCommentTapActions=_shouldAllowCommentTapActions - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNoCommentIndicator;              //@synthesize shouldShowNoCommentIndicator=_shouldShowNoCommentIndicator - In the implementation block
+(id)newWithFeedback:(id)arg1 focusedCommentID:(id)arg2 focusedReplyID:(id)arg3 shouldAllowCommentTapActions:(BOOL)arg4 shouldShowNoCommentIndicator:(BOOL)arg5 ;
-(NSString *)focusedCommentID;
-(NSString *)focusedReplyID;
-(BOOL)shouldShowNoCommentIndicator;
-(BOOL)shouldAllowCommentTapActions;
-(FBMemFeedback *)feedback;
@end

