/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFeedbackTargetManagerProtocol.h>

@protocol FBFeedbackTargetProtocol, FBFeedbackTargetManagerDelegate;
@class FBCommentStreamViewController, NSString, FBAnalyticsReferrerPerformanceLogger;

@interface FBCommentStreamGenericFeedbackTargetManager : NSObject <FBFeedbackTargetManagerProtocol> {

	id<FBFeedbackTargetProtocol> _feedbackTarget;
	BOOL dimmed;
	FBCommentStreamViewController*<FBFeedbackTargetManagerDelegate> delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL dimmed; 
@property (nonatomic,readonly) id<FBFeedbackTargetProtocol> feedbackTarget; 
@property (assign,nonatomic,__weak) FBCommentStreamViewController*<FBFeedbackTargetManagerDelegate> delegate; 
@property (nonatomic,readonly) id<FBCommentStreamChildSource> source; 
@property (nonatomic,readonly) id<FBCommentStreamChildSource> footerSource; 
@property (nonatomic,readonly) id<CKComponentSizeRangeProviding> componentConstraintProvider; 
@property (nonatomic,readonly) Class componentProvider; 
@property (nonatomic,retain) FBAnalyticsReferrerPerformanceLogger * referrerPerformanceLogger; 
@property (nonatomic,copy) NSString * additionalTrackingCode; 
-(void)loadFeedbackTargetIfNeeded;
-(id<FBFeedbackTargetProtocol>)feedbackTarget;
-(void)setDelegate:(FBCommentStreamViewController*<FBFeedbackTargetManagerDelegate>)arg1 ;
-(FBCommentStreamViewController*<FBFeedbackTargetManagerDelegate>)delegate;
-(id)initWithConfiguration:(id)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
@end

