/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSideFeedUnitController.h>
#import <Facebook/FBFeedSideFeedItemViewBaseDelegate.h>
#import <Facebook/FBSideFeedUnitCollectionViewControllerDelegate.h>
#import <Facebook/FBAppFeedEventListener.h>
#import <Facebook/FBAppFeedModuleResourceProvider.h>

@class FBAppFeedSecondaryActionsPresenter, FBAppFeedActionRouter, FBAppFeedSecondaryActionsFactory, FBSideFeedUnitCollectionViewController, FBSideFeedProductPresenter, NSArray, NSString;

@interface FBFeedSideFeedAppAdStoriesUnitController : FBSideFeedUnitController <FBFeedSideFeedItemViewBaseDelegate, FBSideFeedUnitCollectionViewControllerDelegate, FBAppFeedEventListener, FBAppFeedModuleResourceProvider> {

	FBAppFeedSecondaryActionsPresenter* _secondaryActionsPresenter;
	FBAppFeedActionRouter* _actionRouter;
	FBAppFeedSecondaryActionsFactory* _secondaryActionsFactory;
	FBSideFeedUnitCollectionViewController* _unitCollectionViewController;
	FBSideFeedProductPresenter* _sideFeedProductPresenter;
	NSArray* _validModelEdges;
	NSArray* _cachedUniqueIDsForItems;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)getUnitNameForAnalytics;
-(id)trackingStringForItemPosition:(unsigned long long)arg1 ;
-(id)graphQLIDForItemPosition:(unsigned long long)arg1 ;
-(BOOL)validateModel;
-(void)logAnalyticsEvent:(id)arg1 itemPosition:(unsigned long long)arg2 history:(id)arg3 ;
-(id)uniqueIDForItemAtIndex:(unsigned long long)arg1 ;
-(void)configureCell:(id)arg1 forIndex:(unsigned long long)arg2 ;
-(void)didChangeHeightAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)didBecomeEmpty;
-(void)willHideItemAtIndex:(unsigned long long)arg1 ;
-(void)didSelectCellWithIndex:(unsigned long long)arg1 ;
-(void)visibleRectDidChangeInContentView:(CGRect)arg1 ;
-(void)_seeMoreButtonTapped;
-(void)sideFeedItemViewDidTapBottomButton:(id)arg1 ;
-(void)sideFeedItemViewDidTapSecondaryActionsButton:(id)arg1 ;
-(id)_appAdStoriesModel;
-(id)_modelForPage:(unsigned long long)arg1 ;
-(BOOL)cellShouldShowSeparator:(unsigned long long)arg1 ;
-(id)subtitleText:(id)arg1 ;
-(id)detailTitleText:(id)arg1 ;
-(id)detailSubtitleText:(id)arg1 ;
-(unsigned long long)indexOfLastVisibleItem;
-(void)_installAppTapped:(long long)arg1 ;
-(void)_secondaryActionsTappedFromView:(id)arg1 ;
-(void)_playVideoAtIndex:(unsigned long long)arg1 ;
-(void)openAppAdStory:(id)arg1 fromView:(id)arg2 analyticsExtras:(id)arg3 ;
-(void)_logVideoPlayForIndex:(unsigned long long)arg1 ;
-(void)xoutSponsorable:(id)arg1 ;
-(unsigned long long)indexForItem:(id)arg1 ;
-(void)sideFeedItemViewDidTapStaticImageView:(id)arg1 ;
-(void)didPressOpenWithSponsorable:(id)arg1 ;
-(void)didPressHideWithSponsorable:(id)arg1 withParentUnit:(id)arg2 ;
-(void)didPressHideAllWithSponsorable:(id)arg1 withParentUnit:(id)arg2 ;
-(void)didPressGetAdInfoWithSponsorable:(id)arg1 ;
-(void)didPressFeedbackWithSponsorable:(id)arg1 ;
-(id)imageOfType:(unsigned long long)arg1 ;
-(id)titleText:(id)arg1 ;
-(id)_contextSentenceForStory:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(unsigned long long)numberOfItems;
-(CGSize)sizeForItemAtIndex:(unsigned long long)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
