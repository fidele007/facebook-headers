/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBUFICommentToolbox, FBCommentStreamCellStyle, FBCommentStreamInlineReplyExpansionUIOptions, FBFeedbackViewStateListenerAnnouncer, FBFeedbackUpdateListenerAnnouncer;

@interface FBFeedbackSentencesSectionComponentToolbox : NSObject {

	FBUserSession* _session;
	FBUFICommentToolbox* _ufiToolbox;
	FBCommentStreamCellStyle* _cellStyle;
	FBCommentStreamInlineReplyExpansionUIOptions* _inlineReplyExpansionOptions;
	unsigned long long _resharePreviewStyle;
	FBFeedbackViewStateListenerAnnouncer* _viewStateAnnouncer;
	FBFeedbackUpdateListenerAnnouncer* _feedbackUpdateAnnouncer;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBUFICommentToolbox * ufiToolbox;                                                        //@synthesize ufiToolbox=_ufiToolbox - In the implementation block
@property (nonatomic,readonly) FBCommentStreamCellStyle * cellStyle;                                                    //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,readonly) FBCommentStreamInlineReplyExpansionUIOptions * inlineReplyExpansionOptions;              //@synthesize inlineReplyExpansionOptions=_inlineReplyExpansionOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long resharePreviewStyle;                                                  //@synthesize resharePreviewStyle=_resharePreviewStyle - In the implementation block
@property (nonatomic,readonly) FBFeedbackViewStateListenerAnnouncer * viewStateAnnouncer;                               //@synthesize viewStateAnnouncer=_viewStateAnnouncer - In the implementation block
@property (nonatomic,readonly) FBFeedbackUpdateListenerAnnouncer * feedbackUpdateAnnouncer;                             //@synthesize feedbackUpdateAnnouncer=_feedbackUpdateAnnouncer - In the implementation block
-(FBCommentStreamInlineReplyExpansionUIOptions *)inlineReplyExpansionOptions;
-(unsigned long long)resharePreviewStyle;
-(id)initWithSession:(id)arg1 ufiToolbox:(id)arg2 cellStyle:(id)arg3 inlineReplyExpansionOptions:(id)arg4 resharePreviewStyle:(unsigned long long)arg5 viewStateAnnouncer:(id)arg6 feedbackUpdateAnnouncer:(id)arg7 ;
-(FBUFICommentToolbox *)ufiToolbox;
-(FBFeedbackUpdateListenerAnnouncer *)feedbackUpdateAnnouncer;
-(FBFeedbackViewStateListenerAnnouncer *)viewStateAnnouncer;
-(FBUserSession *)session;
-(FBCommentStreamCellStyle *)cellStyle;
@end

