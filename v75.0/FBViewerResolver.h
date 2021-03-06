/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBViewerFactory, FBPageAccountsStore, FBViewerContext;

@interface FBViewerResolver : NSObject {

	FBViewerFactory* _viewerFactory;
	FBPageAccountsStore* _pageAccountsStore;
	FBViewerContext* _defaultViewer;

}

@property (nonatomic,readonly) FBViewerContext * defaultViewer;              //@synthesize defaultViewer=_defaultViewer - In the implementation block
-(FBViewerContext *)defaultViewer;
-(BOOL)canViewerPostAsPageFBID:(id)arg1 ;
-(BOOL)canViewerMessageAsPageFBID:(id)arg1 ;
-(BOOL)canViewerEditProfileForPageFBID:(id)arg1 ;
-(BOOL)hasPageViewerForOwnerFBID:(id)arg1 pagePermissionsRequired:(unsigned long long)arg2 ;
-(BOOL)canCreateEventForPageFBID:(id)arg1 ;
-(BOOL)canViewerBanUserAsPageFBID:(id)arg1 ;
-(BOOL)canViewerEditSettingsForPageFBID:(id)arg1 ;
-(BOOL)isViewerAdminForPageFBID:(id)arg1 ;
-(id)actorForFeedbackWithViewerActAsPageFBID:(id)arg1 ;
-(id)viewerForEventWithCreatorFBID:(id)arg1 ;
-(void)setDefaultViewerFBID:(id)arg1 ;
-(BOOL)canMakeProfilePicForPageFromPhotoWithOwnerFBID:(id)arg1 ;
-(id)contentCreationActorForPageFBID:(id)arg1 ;
-(BOOL)canViewerManageAds:(id)arg1 ;
-(id)actorForChangingCaptionFromPhotoWithOwnerFBID:(id)arg1 ;
-(id)actorForMakingProfilePicFromPhotoWithOwnerFBID:(id)arg1 ;
-(BOOL)canViewerCommentAsPageFBID:(id)arg1 ;
-(BOOL)canTagUserInPhotoWithOwnerFBID:(id)arg1 ;
-(id)actorForPhotoTaggingWithOwnerFBID:(id)arg1 ;
-(BOOL)canViewerTagAsPageFBID:(id)arg1 ;
-(BOOL)canViewerPinPostForPageFBID:(id)arg1 ;
-(id)viewerForPageFBID:(id)arg1 ;
-(BOOL)canViewerDeletePostAsPageFBID:(id)arg1 ;
-(BOOL)canViewerCommentWithPhotoAsPageFBID:(id)arg1 ;
-(BOOL)canViewerSeeInsightsForPageFBID:(id)arg1 ;
-(BOOL)canViewerDeletePageFBID:(id)arg1 ;
-(BOOL)canViewerPromote:(id)arg1 ;
-(BOOL)canViewerSeeInstantArticles:(id)arg1 ;
-(BOOL)canViewerSeeContactUsRequest:(id)arg1 ;
-(BOOL)canViewerCreateOrEditCTA:(id)arg1 ;
-(id)initWithViewerFactory:(id)arg1 pageAccountsStore:(id)arg2 defaultViewerFBID:(id)arg3 ;
-(id)viewerForOwnerFBID:(id)arg1 pagePermissionsRequired:(unsigned long long)arg2 ;
@end

