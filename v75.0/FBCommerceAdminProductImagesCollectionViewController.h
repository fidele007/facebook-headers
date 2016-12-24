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
#import <Facebook/FBCommerceAdminAddImageDelegate.h>
#import <Facebook/FBCommerceAdminProductImageDelegate.h>

@protocol FBNavigationCoordinator, FBCommerceAdminProductImagesDelegate;
@class FBUserSession, UICollectionView, UIActionSheet, FBMemPage, FBMemProductItem, FBCommerceAdminAddImageController, NSMutableDictionary, NSMutableArray, NSString;

@interface FBCommerceAdminProductImagesCollectionViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate, FBCommerceAdminAddImageDelegate, FBCommerceAdminProductImageDelegate> {

	FBUserSession* _session;
	UICollectionView* _collectionView;
	UIActionSheet* _addPhotoActionSheet;
	FBMemPage* _page;
	FBMemProductItem* _product;
	FBCommerceAdminAddImageController* _addImageController;
	id<FBNavigationCoordinator> _navigationCoordinator;
	NSMutableDictionary* _imageByID;
	NSMutableArray* _imageIDs;
	id<FBCommerceAdminProductImagesDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCommerceAdminProductImagesDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 navigationCoordinator:(id)arg2 ;
-(void)didTapDeleteImageWithID:(id)arg1 ;
-(void)didSelectPagePhoto:(id)arg1 ;
-(void)didUploadPhotos:(id)arg1 ;
-(void)_showAddImageActionSheet;
-(void)_configureImageForProductImageCell:(id)arg1 imageID:(id)arg2 ;
-(id)imageIDs;
-(void)configureWithPage:(id)arg1 product:(id)arg2 ;
-(void)setDelegate:(id<FBCommerceAdminProductImagesDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCommerceAdminProductImagesDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)viewWillLayoutSubviews;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
@end

