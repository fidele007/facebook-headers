/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBCommentStreamSourceSectionComponentTrackerAdapter, FBCommentStreamSourceCollectionViewDataSourceAdapter, FBCommentStreamLifecycleSectionComponentTracker;

@interface FBCommentStreamFeedbackSentencesSectionComponentManager : NSObject {

	FBCommentStreamSourceSectionComponentTrackerAdapter* _sectionComponentTrackerAdapter;
	FBCommentStreamSourceCollectionViewDataSourceAdapter* _sectionComponentDataSourceAdapter;
	FBCommentStreamLifecycleSectionComponentTracker* _sectionComponentTracker;

}
-(id)initWithFeedback:(id)arg1 lifeCycleAnnouncer:(id)arg2 feedbackUpdateAnnouncer:(id)arg3 viewStateAnnouncer:(id)arg4 socialSentenceType:(unsigned long long)arg5 dataSourceWriteInterface:(id)arg6 commentStreamComponentContext:(id)arg7 ;
@end

