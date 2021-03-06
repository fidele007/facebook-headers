/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposerFlowDelegate.h>

@protocol FBNavigationCoordinator;
@class FBAnalyticsInfo, FBComposerAuthor, FBComposerTraits, FBComposerPublishTarget, FBUserSession, FBComposerPrivacySetting, NSString;

@interface FBNativeArticleComposerPresenter : NSObject <FBComposerFlowDelegate> {

	FBAnalyticsInfo* _analyticsInfo;
	FBComposerAuthor* _author;
	FBComposerTraits* _composerTraits;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBComposerPublishTarget* _publishTarget;
	FBUserSession* _session;
	FBComposerPrivacySetting* _shareNowPrivacySetting;

}

@property (nonatomic,retain) FBComposerPrivacySetting * shareNowPrivacySetting;              //@synthesize shareNowPrivacySetting=_shareNowPrivacySetting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)composerCompletedWithResult:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 navigationCoordinator:(id)arg2 analyticsInfo:(id)arg3 ;
-(void)_logConclusionAnalyticsWithCompositionId:(id)arg1 shareableID:(id)arg2 shareType:(id)arg3 source:(id)arg4 ;
-(void)_displayConfirmationDialogWithLocalizedTitle:(id)arg1 ;
-(void)performShareNowWithShareable:(id)arg1 source:(id)arg2 contentOrigin:(id)arg3 ;
-(FBComposerPrivacySetting *)shareNowPrivacySetting;
-(void)setShareNowPrivacySetting:(FBComposerPrivacySetting *)arg1 ;
-(void)openComposerWithShareable:(id)arg1 source:(id)arg2 contentOrigin:(id)arg3 ;
@end

