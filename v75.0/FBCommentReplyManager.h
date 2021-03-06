/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCommentStreamChildSourceListener.h>
#import <Facebook/FBFeedbackTargetManagerProtocol.h>
#import <Facebook/FBInAppNotificationEligibilityProtocol.h>

@protocol FBFeedbackTargetManagerDelegate;
@class FBUserSession, FBMemComment, NSString, NSURL, FBCommentStreamCellStyle, FBCommentStreamSourceAggregator, FBCommentStreamSource, FBCommentStreamComponentDescriptor, FBCommentReplyHeaderStoryModel, FBCommentReplyTopLevelCommentModel, FBConsistentLookasideCacheObservationHandle, FBCommentStreamViewController, FBAnalyticsReferrerPerformanceLogger;

@interface FBCommentReplyManager : NSObject <FBCommentStreamChildSourceListener, FBFeedbackTargetManagerProtocol, FBInAppNotificationEligibilityProtocol> {

	FBUserSession* _userSession;
	FBMemComment* _commentToLoad;
	NSString* _commentGraphQLIDToLoad;
	NSURL* _storyURLForHeaderExplanation;
	NSURL* _fallbackURL;
	BOOL _shouldRedirectToFallbackURL;
	BOOL _viewIsVisible;
	BOOL _isDownloadingComment;
	NSString* _viewerFBID;
	NSString* _groupID;
	NSString* _storyID;
	FBCommentStreamCellStyle* _cellStyle;
	FBCommentStreamCellStyle* _darkCellStyle;
	FBCommentStreamSourceAggregator* _sourceAggregator;
	FBCommentStreamSource* _loadingIndicatorSource;
	FBCommentStreamComponentDescriptor* _loadingIndicatorDescriptor;
	FBCommentStreamSource* _headerSource;
	FBCommentReplyHeaderStoryModel* _headerComponentModel;
	FBCommentStreamSource* _commentSource;
	FBCommentReplyTopLevelCommentModel* _commentComponentModel;
	FBCommentStreamSource* _footerSource;
	FBCommentStreamComponentDescriptor* _footerDescriptor;
	FBConsistentLookasideCacheObservationHandle* _clcObservation;
	BOOL _dimmed;
	FBCommentStreamViewController*<FBFeedbackTargetManagerDelegate> delegate;
	FBMemComment* _comment;

}

@property (nonatomic,retain) FBMemComment * comment;                                                                       //@synthesize comment=_comment - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL dimmed;                                                                                  //@synthesize dimmed=_dimmed - In the implementation block
@property (nonatomic,readonly) id<FBFeedbackTargetProtocol> feedbackTarget; 
@property (assign,nonatomic,__weak) FBCommentStreamViewController*<FBFeedbackTargetManagerDelegate> delegate; 
@property (nonatomic,readonly) id<FBCommentStreamChildSource> source; 
@property (nonatomic,readonly) id<FBCommentStreamChildSource> footerSource; 
@property (nonatomic,readonly) id<CKComponentSizeRangeProviding> componentConstraintProvider; 
@property (nonatomic,readonly) Class componentProvider; 
@property (nonatomic,retain) FBAnalyticsReferrerPerformanceLogger * referrerPerformanceLogger; 
@property (nonatomic,copy) NSString * additionalTrackingCode; 
-(BOOL)inAppNotificationBeeperManager:(id)arg1 shouldShowNotification:(id)arg2 ;
-(Class)componentProvider;
-(void)childSource:(id)arg1 didRegisterWithParent:(id)arg2 ;
-(void)loadFeedbackTargetIfNeeded;
-(id)componentContextWithCommentStreamContext:(id)arg1 activateCommentComposerAction:(CKTypedComponentAction<>)arg2 insetManager:(id)arg3 ;
-(id<FBFeedbackTargetProtocol>)feedbackTarget;
-(id<FBCommentStreamChildSource>)footerSource;
-(id<CKComponentSizeRangeProviding>)componentConstraintProvider;
-(void)commentStreamViewController:(id)arg1 viewDidAppear:(BOOL)arg2 ;
-(void)commentStreamViewController:(id)arg1 viewWillDisappear:(BOOL)arg2 ;
-(BOOL)commentStreamViewController:(id)arg1 alreadyOpenWithViewController:(id)arg2 ;
-(void)_redirectToFallbackURLIfNeeded;
-(id)initWithConfiguration:(id)arg1 userSession:(id)arg2 ;
-(BOOL)_shouldDownloadComment;
-(void)_loadComment:(id)arg1 ;
-(void)_downloadCommentWithGraphQLID:(id)arg1 ;
-(void)_updateComment:(id)arg1 ;
-(void)_logShowTopLevelCommentEvent:(id)arg1 ;
-(id)_commentQueryWithCommentID:(id)arg1 ;
-(void)setDelegate:(FBCommentStreamViewController*<FBFeedbackTargetManagerDelegate>)arg1 ;
-(FBCommentStreamViewController*<FBFeedbackTargetManagerDelegate>)delegate;
-(id<FBCommentStreamChildSource>)source;
-(FBMemComment *)comment;
-(void)_updateLoadingIndicator;
-(void)setComment:(FBMemComment *)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end

