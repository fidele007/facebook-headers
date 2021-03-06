/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBCommentStreamCellStyle, FBUFICommentLayoutDefinition, FBCommentComposerViewControllerConfiguration, NSDictionary, NSURL, FBMemFeedStory, NSSet, FBCommentStreamInlineReplyExpansionUIOptions, UIColor, FBNotificationsLoggingContext, NSArray;

@interface FBPermalinkViewControllerConfiguration : FBValueObject <NSCopying> {

	BOOL _shouldShowNoCommentIndicator;
	NSString* _analyticsModule;
	FBCommentStreamCellStyle* _cellStyle;
	FBUFICommentLayoutDefinition* _commentCellConfiguration;
	FBCommentComposerViewControllerConfiguration* _composerConfiguration;
	NSDictionary* _extraAnalyticsData;
	NSURL* _fallbackURL;
	FBMemFeedStory* _feedStory;
	NSString* _feedStoryGraphAPIID;
	NSString* _feedStoryGraphQLID;
	NSString* _focusedCommentID;
	NSString* _focusedReplyID;
	NSSet* _highlightedWords;
	FBCommentStreamInlineReplyExpansionUIOptions* _inlineReplyExpansionOptions;
	unsigned long long _layoutIdiom;
	NSSet* _mainThreadCommenters;
	UIColor* _mentionsBackgroundColor;
	NSString* _notificationType;
	FBNotificationsLoggingContext* _notificationsLoggingContext;
	NSArray* _parentTrackingCodes;
	unsigned long long _resharePreviewStyle;
	unsigned long long _socialSentenceType;
	NSString* _viewerFBID;

}

@property (nonatomic,copy,readonly) NSString * analyticsModule;                                                              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) FBCommentStreamCellStyle * cellStyle;                                                    //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,copy,readonly) FBUFICommentLayoutDefinition * commentCellConfiguration;                                 //@synthesize commentCellConfiguration=_commentCellConfiguration - In the implementation block
@property (nonatomic,copy,readonly) FBCommentComposerViewControllerConfiguration * composerConfiguration;                    //@synthesize composerConfiguration=_composerConfiguration - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * extraAnalyticsData;                                                       //@synthesize extraAnalyticsData=_extraAnalyticsData - In the implementation block
@property (nonatomic,copy,readonly) NSURL * fallbackURL;                                                                     //@synthesize fallbackURL=_fallbackURL - In the implementation block
@property (nonatomic,copy,readonly) FBMemFeedStory * feedStory;                                                              //@synthesize feedStory=_feedStory - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedStoryGraphAPIID;                                                          //@synthesize feedStoryGraphAPIID=_feedStoryGraphAPIID - In the implementation block
@property (nonatomic,copy,readonly) NSString * feedStoryGraphQLID;                                                           //@synthesize feedStoryGraphQLID=_feedStoryGraphQLID - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedCommentID;                                                             //@synthesize focusedCommentID=_focusedCommentID - In the implementation block
@property (nonatomic,copy,readonly) NSString * focusedReplyID;                                                               //@synthesize focusedReplyID=_focusedReplyID - In the implementation block
@property (nonatomic,copy,readonly) NSSet * highlightedWords;                                                                //@synthesize highlightedWords=_highlightedWords - In the implementation block
@property (nonatomic,copy,readonly) FBCommentStreamInlineReplyExpansionUIOptions * inlineReplyExpansionOptions;              //@synthesize inlineReplyExpansionOptions=_inlineReplyExpansionOptions - In the implementation block
@property (nonatomic,readonly) unsigned long long layoutIdiom;                                                               //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (nonatomic,copy,readonly) NSSet * mainThreadCommenters;                                                            //@synthesize mainThreadCommenters=_mainThreadCommenters - In the implementation block
@property (nonatomic,copy,readonly) UIColor * mentionsBackgroundColor;                                                       //@synthesize mentionsBackgroundColor=_mentionsBackgroundColor - In the implementation block
@property (nonatomic,copy,readonly) NSString * notificationType;                                                             //@synthesize notificationType=_notificationType - In the implementation block
@property (nonatomic,copy,readonly) FBNotificationsLoggingContext * notificationsLoggingContext;                             //@synthesize notificationsLoggingContext=_notificationsLoggingContext - In the implementation block
@property (nonatomic,copy,readonly) NSArray * parentTrackingCodes;                                                           //@synthesize parentTrackingCodes=_parentTrackingCodes - In the implementation block
@property (nonatomic,readonly) unsigned long long resharePreviewStyle;                                                       //@synthesize resharePreviewStyle=_resharePreviewStyle - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowNoCommentIndicator;                                                            //@synthesize shouldShowNoCommentIndicator=_shouldShowNoCommentIndicator - In the implementation block
@property (nonatomic,readonly) unsigned long long socialSentenceType;                                                        //@synthesize socialSentenceType=_socialSentenceType - In the implementation block
@property (nonatomic,copy,readonly) NSString * viewerFBID;                                                                   //@synthesize viewerFBID=_viewerFBID - In the implementation block
-(unsigned long long)layoutIdiom;
-(NSString *)analyticsModule;
-(FBMemFeedStory *)feedStory;
-(NSString *)viewerFBID;
-(NSString *)focusedCommentID;
-(NSSet *)highlightedWords;
-(NSDictionary *)extraAnalyticsData;
-(NSString *)feedStoryGraphAPIID;
-(NSString *)feedStoryGraphQLID;
-(FBNotificationsLoggingContext *)notificationsLoggingContext;
-(NSArray *)parentTrackingCodes;
-(NSString *)focusedReplyID;
-(FBCommentStreamInlineReplyExpansionUIOptions *)inlineReplyExpansionOptions;
-(FBUFICommentLayoutDefinition *)commentCellConfiguration;
-(unsigned long long)socialSentenceType;
-(unsigned long long)resharePreviewStyle;
-(BOOL)shouldShowNoCommentIndicator;
-(id)initWithAnalyticsModule:(id)arg1 cellStyle:(id)arg2 commentCellConfiguration:(id)arg3 composerConfiguration:(id)arg4 extraAnalyticsData:(id)arg5 fallbackURL:(id)arg6 feedStory:(id)arg7 feedStoryGraphAPIID:(id)arg8 feedStoryGraphQLID:(id)arg9 focusedCommentID:(id)arg10 focusedReplyID:(id)arg11 highlightedWords:(id)arg12 inlineReplyExpansionOptions:(id)arg13 layoutIdiom:(unsigned long long)arg14 mainThreadCommenters:(id)arg15 mentionsBackgroundColor:(id)arg16 notificationType:(id)arg17 notificationsLoggingContext:(id)arg18 parentTrackingCodes:(id)arg19 resharePreviewStyle:(unsigned long long)arg20 shouldShowNoCommentIndicator:(BOOL)arg21 socialSentenceType:(unsigned long long)arg22 viewerFBID:(id)arg23 ;
-(FBCommentComposerViewControllerConfiguration *)composerConfiguration;
-(NSSet *)mainThreadCommenters;
-(UIColor *)mentionsBackgroundColor;
-(NSString *)notificationType;
-(NSURL *)fallbackURL;
-(FBCommentStreamCellStyle *)cellStyle;
@end

