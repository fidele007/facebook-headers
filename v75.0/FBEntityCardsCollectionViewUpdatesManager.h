/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEntityCardsCollectionViewUpdatesManagerDelegate;
@class FBUserSession, FBEntityCardsCollectionView, FBEntityCardsDataStore, NSMutableArray, NSTimer;

@interface FBEntityCardsCollectionViewUpdatesManager : NSObject {

	FBUserSession* _session;
	FBEntityCardsCollectionView* _cardsGallery;
	FBEntityCardsDataStore* _entities;
	NSMutableArray* _pendingUpdates;
	NSTimer* _updateTimer;
	unsigned long long _leftLoadIndicatorCount;
	unsigned long long _rightLoadIndicatorCount;
	BOOL _isApplyingPendingUpdate;
	BOOL _applyingPendingUpdate;
	id<FBEntityCardsCollectionViewUpdatesManagerDelegate> _delegate;

}

@property (assign,nonatomic) BOOL applyingPendingUpdate;                                                         //@synthesize applyingPendingUpdate=_applyingPendingUpdate - In the implementation block
@property (nonatomic,readonly) BOOL hasPendingUpdates; 
@property (nonatomic,readonly) BOOL isApplyingPendingUpdate;                                                     //@synthesize isApplyingPendingUpdate=_isApplyingPendingUpdate - In the implementation block
@property (assign,nonatomic,__weak) id<FBEntityCardsCollectionViewUpdatesManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_applyInitialEntitiesUpdate:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_addPendingUpdateWithExecutionBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_applyEntitiesUpdate:(unsigned long long)arg1 entities:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)_applyLoadIndicatorUpdate:(unsigned long long)arg1 loadIndicatorCount:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setApplyingPendingUpdate:(BOOL)arg1 ;
-(void)_appliedPendingUpdate:(id)arg1 ;
-(void)applyPendingUpdates;
-(BOOL)_shouldDisableAnimationsForUpdate:(unsigned long long)arg1 displayedCard:(id)arg2 ;
-(id)initWithSession:(id)arg1 collectionView:(id)arg2 store:(id)arg3 ;
-(void)replaceInitialEntities:(id)arg1 entitiesReplacedCallback:(/*^block*/id)arg2 ;
-(void)addEntities:(id)arg1 inScrollDirection:(unsigned long long)arg2 entitiesAddedCallback:(/*^block*/id)arg3 ;
-(void)addLoadIndicatorsIfNeeded:(unsigned long long)arg1 loadIndicatorCount:(unsigned long long)arg2 loadIndicatorsAddedCallback:(/*^block*/id)arg3 ;
-(unsigned long long)loadIndicatorCountForSection:(unsigned long long)arg1 ;
-(BOOL)hasPendingUpdates;
-(BOOL)isApplyingPendingUpdate;
-(BOOL)applyingPendingUpdate;
-(void)setDelegate:(id<FBEntityCardsCollectionViewUpdatesManagerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBEntityCardsCollectionViewUpdatesManagerDelegate>)delegate;
@end

