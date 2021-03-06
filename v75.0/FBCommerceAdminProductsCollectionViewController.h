/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol FBProductsCollectionViewDelegate;
@class FBUserSession, UICollectionView, NSArray, FBMemProductCatalog, NSString;

@interface FBCommerceAdminProductsCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout> {

	FBUserSession* _session;
	UICollectionView* _collectionView;
	NSArray* _items;
	FBMemProductCatalog* _productCatalog;
	id<FBProductsCollectionViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) FBMemProductCatalog * productCatalog;                       //@synthesize productCatalog=_productCatalog - In the implementation block
@property (assign,nonatomic,__weak) id<FBProductsCollectionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBMemProductCatalog *)productCatalog;
-(CGSize)_productCellContentViewSize;
-(double)heightForCollectionView;
-(void)setProductCatalog:(FBMemProductCatalog *)arg1 ;
-(void)setDelegate:(id<FBProductsCollectionViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBProductsCollectionViewDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewWillLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
@end

