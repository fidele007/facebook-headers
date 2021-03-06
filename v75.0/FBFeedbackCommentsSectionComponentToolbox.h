/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class FBUserSession, FBUFICommentToolbox, FBCommentStreamFeedbackAnalyticsManager, FBCommentStreamViewControllerAnalyticsFunnel, FBCommentStreamCellStyle, FBUFICommentLayoutDefinition, FBCommentStreamInlineReplyExpansionUIOptions, FBFeedbackViewStateListenerAnnouncer, FBSectionComponentToolbox, FBCommentComposerActivationListenerAnnouncer, FBCommentStreamUserBanListenerAnnouncer, FBCommentStreamCommentAuthorReactionListenerAnnouncer, FBCommentStreamReflowForcingListenerAnnouncer, FBCommentStreamDataSourceUpdateListenerAnnouncer;

@interface FBFeedbackCommentsSectionComponentToolbox : NSObject {

	FBUserSession* _session;
	FBUFICommentToolbox* _ufiToolbox;
	FBCommentStreamFeedbackAnalyticsManager* _analyticsManager;
	FBCommentStreamViewControllerAnalyticsFunnel* _analyticsFunnel;
	/*^block*/id _vpvLoggingWorkingRangeListenerProvider;
	FBCommentStreamCellStyle* _cellStyle;
	FBUFICommentLayoutDefinition* _commentLayoutDefinition;
	FBUFICommentLayoutDefinition* _replyLayoutDefinition;
	FBCommentStreamInlineReplyExpansionUIOptions* _inlineReplyExpansionOptions;
	FBFeedbackViewStateListenerAnnouncer* _viewStateAnnouncer;
	FBSectionComponentToolbox* _sectionComponentToolbox;
	FBCommentComposerActivationListenerAnnouncer* _composerActivationAnnouncer;
	FBCommentStreamUserBanListenerAnnouncer* _userBanAnnouncer;
	FBCommentStreamCommentAuthorReactionListenerAnnouncer* _commentAuthorReactionAnnouncer;
	FBCommentStreamReflowForcingListenerAnnouncer* _listKitConversion_reflowForcingAnnouncer;
	FBCommentStreamDataSourceUpdateListenerAnnouncer* _listKitConversion_dataSourceUpdateAnnouncer;
	FBCommentEditingDependencyProviders _commentEditingDependencyProviders;

}

@property (nonatomic,readonly) FBUserSession * session;                                                                                     //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBUFICommentToolbox * ufiToolbox;                                                                            //@synthesize ufiToolbox=_ufiToolbox - In the implementation block
@property (nonatomic,readonly) FBCommentStreamFeedbackAnalyticsManager * analyticsManager;                                                  //@synthesize analyticsManager=_analyticsManager - In the implementation block
@property (nonatomic,readonly) FBCommentStreamViewControllerAnalyticsFunnel * analyticsFunnel;                                              //@synthesize analyticsFunnel=_analyticsFunnel - In the implementation block
@property (nonatomic,copy,readonly) id vpvLoggingWorkingRangeListenerProvider;                                                              //@synthesize vpvLoggingWorkingRangeListenerProvider=_vpvLoggingWorkingRangeListenerProvider - In the implementation block
@property (nonatomic,readonly) FBCommentEditingDependencyProviders commentEditingDependencyProviders;                                       //@synthesize commentEditingDependencyProviders=_commentEditingDependencyProviders - In the implementation block
@property (nonatomic,readonly) FBCommentStreamCellStyle * cellStyle;                                                                        //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,readonly) FBUFICommentLayoutDefinition * commentLayoutDefinition;                                                      //@synthesize commentLayoutDefinition=_commentLayoutDefinition - In the implementation block
@property (nonatomic,readonly) FBUFICommentLayoutDefinition * replyLayoutDefinition;                                                        //@synthesize replyLayoutDefinition=_replyLayoutDefinition - In the implementation block
@property (nonatomic,readonly) FBCommentStreamInlineReplyExpansionUIOptions * inlineReplyExpansionOptions;                                  //@synthesize inlineReplyExpansionOptions=_inlineReplyExpansionOptions - In the implementation block
@property (nonatomic,readonly) FBFeedbackViewStateListenerAnnouncer * viewStateAnnouncer;                                                   //@synthesize viewStateAnnouncer=_viewStateAnnouncer - In the implementation block
@property (nonatomic,readonly) FBSectionComponentToolbox * sectionComponentToolbox;                                                         //@synthesize sectionComponentToolbox=_sectionComponentToolbox - In the implementation block
@property (nonatomic,readonly) FBCommentComposerActivationListenerAnnouncer * composerActivationAnnouncer;                                  //@synthesize composerActivationAnnouncer=_composerActivationAnnouncer - In the implementation block
@property (nonatomic,readonly) FBCommentStreamUserBanListenerAnnouncer * userBanAnnouncer;                                                  //@synthesize userBanAnnouncer=_userBanAnnouncer - In the implementation block
@property (nonatomic,readonly) FBCommentStreamCommentAuthorReactionListenerAnnouncer * commentAuthorReactionAnnouncer;                      //@synthesize commentAuthorReactionAnnouncer=_commentAuthorReactionAnnouncer - In the implementation block
@property (nonatomic,readonly) FBCommentStreamReflowForcingListenerAnnouncer * listKitConversion_reflowForcingAnnouncer;                    //@synthesize listKitConversion_reflowForcingAnnouncer=_listKitConversion_reflowForcingAnnouncer - In the implementation block
@property (nonatomic,readonly) FBCommentStreamDataSourceUpdateListenerAnnouncer * listKitConversion_dataSourceUpdateAnnouncer;              //@synthesize listKitConversion_dataSourceUpdateAnnouncer=_listKitConversion_dataSourceUpdateAnnouncer - In the implementation block
-(FBSectionComponentToolbox *)sectionComponentToolbox;
-(FBCommentStreamInlineReplyExpansionUIOptions *)inlineReplyExpansionOptions;
-(FBUFICommentLayoutDefinition *)commentLayoutDefinition;
-(id)initWithSession:(id)arg1 ufiToolbox:(id)arg2 analyticsManager:(id)arg3 analyticsFunnel:(id)arg4 vpvLoggingWorkingRangeListenerProvider:(/*^block*/id)arg5 commentEditingDependencyProviders:(FBCommentEditingDependencyProviders)arg6 cellStyle:(id)arg7 commentLayoutDefinition:(id)arg8 replyLayoutDefinition:(id)arg9 inlineReplyExpansionOptions:(id)arg10 viewStateAnnouncer:(id)arg11 sectionComponentToolbox:(id)arg12 composerActivationAnnouncer:(id)arg13 userBanAnnouncer:(id)arg14 commentAuthorReactionAnnouncer:(id)arg15 listKitConversion_reflowForcingAnnouncer:(id)arg16 listKitConversion_dataSourceUpdateAnnouncer:(id)arg17 ;
-(FBCommentComposerActivationListenerAnnouncer *)composerActivationAnnouncer;
-(id)vpvLoggingWorkingRangeListenerProvider;
-(FBCommentEditingDependencyProviders)commentEditingDependencyProviders;
-(FBCommentStreamFeedbackAnalyticsManager *)analyticsManager;
-(FBCommentStreamViewControllerAnalyticsFunnel *)analyticsFunnel;
-(FBCommentStreamUserBanListenerAnnouncer *)userBanAnnouncer;
-(FBCommentStreamCommentAuthorReactionListenerAnnouncer *)commentAuthorReactionAnnouncer;
-(FBCommentStreamDataSourceUpdateListenerAnnouncer *)listKitConversion_dataSourceUpdateAnnouncer;
-(FBCommentStreamReflowForcingListenerAnnouncer *)listKitConversion_reflowForcingAnnouncer;
-(FBUFICommentLayoutDefinition *)replyLayoutDefinition;
-(FBUFICommentToolbox *)ufiToolbox;
-(FBFeedbackViewStateListenerAnnouncer *)viewStateAnnouncer;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(FBUserSession *)session;
-(FBCommentStreamCellStyle *)cellStyle;
@end

