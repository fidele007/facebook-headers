/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Facebook/FBStreamListener.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <Facebook/FBPullToRefreshViewDelegate.h>

@class UICollectionView, FBStream, FBUserSession, NSString, NSMutableArray, FBPullToRefreshView, FBTransientViewStateManager, FBScenePath, FBPageNewLikesGridFooterView, UIColor;

@interface FBPageNewLikesGridViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, FBStreamListener, UICollectionViewDelegateFlowLayout, FBPullToRefreshViewDelegate> {

	UICollectionView* _gridView;
	FBStream* _stream;
	FBUserSession* _session;
	NSString* _pageFBID;
	NSMutableArray* _pageLikers;
	FBPullToRefreshView* _pullToRefreshView;
	FBTransientViewStateManager* _viewStateManager;
	FBScenePath* _scenePath;
	FBPageNewLikesGridFooterView* _tailLoadingView;
	NSString* _analyticsUUID;
	UIColor* _backgroundColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)pullToRefreshViewDidTriggerRefresh:(id)arg1 ;
-(BOOL)analyticsRequiresNetworkContent;
-(BOOL)analyticsHasCachedNetworkContent;
-(id)_pageNewLikeItemsWithLoadResult:(id)arg1 ;
-(void)_markPageNewLikesSeen;
-(void)_updateViewStatesWithLoadResult:(id)arg1 ;
-(id)initWithUserSession:(id)arg1 pageId:(id)arg2 backgroundColor:(id)arg3 scenePath:(id)arg4 analyticsUUID:(id)arg5 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)scrollViewDidEndScrollingAnimation:(id)arg1 ;
-(void)scrollViewDidScrollToTop:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3 ;
@end

