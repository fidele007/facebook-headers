/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBCollectionViewAggregatedDataSourceListener.h>
#import <Facebook/FBComponentCollectionViewDataSourceIndexPathMunger.h>
#import <Facebook/FBPinnedFeedItemModelObserverDelegate.h>
#import <Facebook/FBPinnedFeedItemMountingTracker.h>
#import <Facebook/FBPinnedFeedItemDataSourceControllerDelegate.h>
#import <Facebook/FBCollectionViewSectionDataSource.h>

@protocol FBPinnedFeedItemModel, FBCollectionViewMutating;
@class FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, FBPinnedFeedItemDataSourceController, NSString;

@interface FBPinnedFeedItemDataSource : NSObject <CKComponentProvider, FBCollectionViewAggregatedDataSourceListener, FBComponentCollectionViewDataSourceIndexPathMunger, FBPinnedFeedItemModelObserverDelegate, FBPinnedFeedItemMountingTracker, FBPinnedFeedItemDataSourceControllerDelegate, FBCollectionViewSectionDataSource> {

	FBComponentCollectionViewDataSource* _dataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	id<FBPinnedFeedItemModel> _pinnedItem;
	FBPinnedFeedItemDataSourceController* _controller;
	BOOL _pinnedItemCurrentlyOnScreen;
	id<FBCollectionViewMutating> _collectionViewMutator;

}

@property (assign,nonatomic,__weak) id<FBCollectionViewMutating> collectionViewMutator;              //@synthesize collectionViewMutator=_collectionViewMutator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)registerClassWithReuseIdentifier;
-(id<FBCollectionViewMutating>)collectionViewMutator;
-(void)setCollectionViewMutator:(id<FBCollectionViewMutating>)arg1 ;
-(void)rootCollectionViewDataSourceDidChange:(id)arg1 ;
-(void)dataSource:(id)arg1 collectionView:(id)arg2 applyMutations:(const CollectionViewMutations*)arg3 ;
-(id)dataSource:(id)arg1 collectionView:(id)arg2 cellForItemAtIndexPath:(id)arg3 ;
-(id)dataSource:(id)arg1 collectionView:(id)arg2 dequeueReusableCellWithReuseIdentifier:(id)arg3 forIndexPath:(id)arg4 ;
-(id)dataSource:(id)arg1 layoutAttributesForItemAtIndexPath:(id)arg2 ;
-(id)dataSource:(id)arg1 absoluteIndexPathFor:(id)arg2 ;
-(void)_removePinnedItemWhenReady;
-(void)_removePinnedItem;
-(void)modelObserverDidInsertModel:(id)arg1 withComponentProvider:(Class)arg2 ;
-(void)modelObserverDidUpdateOldModel:(id)arg1 newModel:(id)arg2 withComponentProvider:(Class)arg3 ;
-(void)modelObserverDidRemoveModel:(id)arg1 withComponentProvider:(Class)arg2 ;
-(void)pinnedItemDidMount;
-(void)pinnedItemDidUnmount;
-(void)controller:(id)arg1 shouldInsertPendingItem:(id)arg2 ;
-(void)controllerShouldRemoveCurrentPinnedItem:(id)arg1 ;
-(id)initWithPinnedFeedItemProviders:(id)arg1 identifier:(id)arg2 toolbox:(id)arg3 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

