/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFacecastFeedbackInputViewDelegate.h>
#import <Facebook/FBNuxStepChainControllerDelegate.h>
#import <Facebook/FBCommentPublisherDelegate.h>

@protocol FBAvatarProtocol, FBFacecastFeedbackInputViewControllerDelegate;
@class FBUserSession, FBMemFeedStory, FBMemVideo, NSString, NSArray, FBCommentPublisher, FBFeedbackPublishingAuthorFetcher, FBMemModelObject, FBNuxStepChainController, FBNuxController, FBFacecastFeedbackInputView;

@interface FBFacecastFeedbackInputViewController : UIViewController <FBFacecastFeedbackInputViewDelegate, FBNuxStepChainControllerDelegate, FBCommentPublisherDelegate> {

	FBUserSession* _session;
	FBMemFeedStory* _story;
	FBMemVideo* _video;
	unsigned long long _supportedInterfaceOrientations;
	NSString* _analyticsModule;
	NSArray* _trackingCodes;
	FBCommentPublisher* _commentPublisher;
	FBFeedbackPublishingAuthorFetcher* _viewerFetcher;
	FBMemModelObject*<FBAvatarProtocol> _viewer;
	FBNuxStepChainController* _shareNuxController;
	FBNuxController* _sharePromptNuxController;
	double _commentComposerTimestamp;
	unsigned long long _style;
	id<FBFacecastFeedbackInputViewControllerDelegate> _delegate;
	BOOL _isWatchingVOD;

}

@property (nonatomic,retain) FBFacecastFeedbackInputView * view; 
@property (nonatomic,readonly) FBFacecastFeedbackInputView * feedbackInputView; 
@property (nonatomic,readonly) BOOL isComposingComment; 
@property (assign,nonatomic) double quietModePercent; 
@property (assign,nonatomic) unsigned long long style; 
@property (assign,nonatomic) BOOL highlighted; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stepChainControllerDidEnd:(id)arg1 ;
-(void)dismissCommentComposer;
-(void)setQuietModePercent:(double)arg1 ;
-(double)quietModePercent;
-(FBFacecastFeedbackInputView *)feedbackInputView;
-(id)initWithSession:(id)arg1 story:(id)arg2 video:(id)arg3 supportedInterfaceOrientations:(unsigned long long)arg4 analyticsModule:(id)arg5 trackingCodes:(id)arg6 isWatchingVOD:(BOOL)arg7 style:(unsigned long long)arg8 delegate:(id)arg9 ;
-(void)presentCommentComposer;
-(void)addTipJarButton;
-(BOOL)isComposingComment;
-(void)abortNewUserExperience;
-(void)_fetchedViewer:(id)arg1 ;
-(void)_commentPostFailedWithError:(id)arg1 ;
-(void)_commentPostSucceededWithOptimisticID:(id)arg1 ;
-(void)commentPublisher:(id)arg1 didCreateOptimisticComment:(id)arg2 ;
-(void)commentPublisher:(id)arg1 didUpdateOptimisticComment:(id)arg2 ;
-(void)commentPublisher:(id)arg1 didFinishPostingOptimisticComment:(id)arg2 ;
-(void)facecastFeedbackInputView:(id)arg1 didTapTipJarButton:(id)arg2 ;
-(void)facecastFeedbackInputView:(id)arg1 didCommitCommentWithText:(id)arg2 ;
-(void)facecastFeedbackInputViewNeedsToResize:(id)arg1 ;
-(void)facecastFeedbackInputViewDidEnterCommentComposer:(id)arg1 ;
-(void)facecastFeedbackInputViewDidStartComposingComment:(id)arg1 ;
-(void)facecastFeedbackInputView:(id)arg1 didCommitReactionKey:(long long)arg2 ;
-(void)facecastFeedbackInputView:(id)arg1 didTapSocialMenuButton:(id)arg2 ;
-(void)facecastFeedbackInputViewDidEndDragging:(id)arg1 ;
-(BOOL)_shouldSeeNuxStep:(unsigned long long)arg1 ;
-(void)_showNuxStep:(id)arg1 ;
-(BOOL)_isSharePromptNUXEnabled;
-(void)_setupSharePromptNUX;
-(void)_abortNuxStep:(unsigned long long)arg1 ;
-(id)_storageKeyForNuxStep:(unsigned long long)arg1 ;
-(void)_setSeenNuxStep:(unsigned long long)arg1 ;
-(void)_userDiscoveredNuxOnHerOwn:(unsigned long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)loadView;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)highlighted;
@end
