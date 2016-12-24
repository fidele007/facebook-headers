/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/FBComponentCollectionViewDataSourceCellConfigProvider.h>
#import <Facebook/FBEmbeddedTab.h>

@protocol FBCardViewProvider;
@class FBMemProductItem, FBScenePath, FBImageDownloader, FBGraphQLService, UICollectionView, FBComponentCollectionViewDataSource, FBComponentCollectionViewFlowLayoutDelegate, NSString, UIScrollView, UIView;

@interface FBPageServiceItemViewController : UIViewController <CKComponentProvider, FBComponentCollectionViewDataSourceCellConfigProvider, FBEmbeddedTab> {

	FBMemProductItem* _serviceItem;
	FBScenePath* _scenePath;
	FBImageDownloader* _imageDownloader;
	FBGraphQLService* _graphQLService;
	UICollectionView* _collectionView;
	FBComponentCollectionViewDataSource* _componentDataSource;
	FBComponentCollectionViewFlowLayoutDelegate* _flowLayoutDelegate;
	BOOL _hasLoadedData;
	BOOL _downloading;
	id<FBCardViewProvider> _bottomCardViewProviderForServices;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * secondaryStickyHeaderView; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(BOOL)fb_showNavBarSearchField;
-(void)refreshData;
-(BOOL)shouldApplyTabBarContentInsets;
-(void)setBottomCardViewProviderForServices:(id)arg1 ;
-(FBComponentCollectionViewDataSourceCellConfig)configForCollectionCellInDataSource:(id)arg1 ;
-(void)_handleResponseData:(id)arg1 ;
-(void)_downloadFullServiceItemData;
-(id)initWithServiceItem:(id)arg1 scenePath:(id)arg2 imageDownloader:(id)arg3 graphQLService:(id)arg4 ;
-(UIScrollView *)scrollView;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
