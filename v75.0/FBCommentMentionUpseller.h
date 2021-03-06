/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBCommentMentionResharePostUpsellDismissing.h>
#import <Facebook/FBComposerMentionDecoratorListener.h>
#import <Facebook/FBGrowingComposerViewListener.h>
#import <Facebook/FBCommentComposerBannerController.h>

@protocol FBCommentComposerBannerHosting, FBCommentComposerBannerDelegate, FBServiceTransactionMutating;
@class FBMemFeedStory, NSArray, NSString, FBUserSession, NSMutableArray, FBCommentMentionReshareUpsellExperimentContext, CKComponentHostingView;

@interface FBCommentMentionUpseller : NSObject <CKComponentProvider, FBCommentMentionResharePostUpsellDismissing, FBComposerMentionDecoratorListener, FBGrowingComposerViewListener, FBCommentComposerBannerController> {

	id<FBCommentComposerBannerHosting> _bannerHost;
	id<FBCommentComposerBannerDelegate> _bannerDelegate;
	FBMemFeedStory* _story;
	NSArray* _trackingCodes;
	NSString* _analyticsModule;
	FBUserSession* _session;
	NSArray* _models;
	NSMutableArray* _mentionees;
	id<FBServiceTransactionMutating> _request;
	BOOL _upsellHasBeenManuallyDismissed;
	BOOL _upsellHasBeenDismissedBySuccessfulPublish;
	BOOL _hasLoggedExposure;
	BOOL _hasStartedFunnel;
	BOOL _showingBanner;
	FBCommentMentionReshareUpsellExperimentContext* _experimentContext;
	CKComponentHostingView* _upsellView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL sendCommentWithBannerController; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(id)initWithBannerHost:(id)arg1 bannerDelegate:(id)arg2 story:(id)arg3 trackingCodes:(id)arg4 analyticsModule:(id)arg5 session:(id)arg6 ;
-(void)growingComposerViewDidChange:(id)arg1 ;
-(BOOL)sendCommentWithBannerController;
-(void)dismissUpsell:(long long)arg1 ;
-(void)_dismissBanner;
-(void)_dismissBannerBecauseOfCommentLength;
-(void)reloadBannerForMentions:(id)arg1 ;
-(void)mentionDecoratorCommittedMentionsDidChange:(id)arg1 withChange:(id)arg2 ;
-(id)sendButtonTitle;
-(void)sendComment:(id)arg1 story:(id)arg2 recipient:(id)arg3 ;
-(void)dismissBanner;
-(void)dealloc;
@end

