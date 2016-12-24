/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionView.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Facebook/FBMediaCreativeToolAnimationProtocol.h>

@protocol FBMediaCreativeToolsBaseViewDelegate;
@class NSArray, FBMediaCreativeToolsBaseViewConfig, NSString;

@interface FBMediaCreativeToolsBaseView : UICollectionView <UICollectionViewDataSource, UICollectionViewDelegate, FBMediaCreativeToolAnimationProtocol> {

	NSArray* _collectionViewData;
	FBMediaCreativeToolsBaseViewConfig* _config;
	id<FBMediaCreativeToolsBaseViewDelegate> _creativeToolsBaseViewDelegate;

}

@property (assign,nonatomic,__weak) id<FBMediaCreativeToolsBaseViewDelegate> creativeToolsBaseViewDelegate;              //@synthesize creativeToolsBaseViewDelegate=_creativeToolsBaseViewDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 collectionViewData:(id)arg3 collectionViewConfig:(id)arg4 ;
-(void)setCreativeToolsBaseViewDelegate:(id<FBMediaCreativeToolsBaseViewDelegate>)arg1 ;
-(id)cellModelForIndexPath:(id)arg1 ;
-(void)loadWithInitialAnimation:(/*^block*/id)arg1 ;
-(void)loadWithTransitionAnimation:(/*^block*/id)arg1 ;
-(void)disappearWithFinishAnimation:(/*^block*/id)arg1 ;
-(void)disappearWithTransitionAnimation:(/*^block*/id)arg1 ;
-(id<FBMediaCreativeToolsBaseViewDelegate>)creativeToolsBaseViewDelegate;
-(double)_animationDelayForCellAtIndex:(unsigned long long)arg1 totalCells:(unsigned long long)arg2 ;
-(double)_cellAnimationDuration;
-(double)_springAnimationDamping;
-(double)_springAnimationVelocity;
-(void)_resetToOriginalState:(id)arg1 ;
-(void)updateCellWithNewCellModelAtIndexPath:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)selectItemAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(unsigned long long)arg3 ;
@end

