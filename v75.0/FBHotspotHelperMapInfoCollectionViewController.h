/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <Facebook/FBHotspotHelperMapInfoCollectionViewCellDelegate.h>

@protocol FBHotspotHelperMapInfoCollectionViewControllerDelegate;
@class FBUserSession, FBHotspotHelperDataController, FBHotspotHelperAnalyticsLogger, NSString;

@interface FBHotspotHelperMapInfoCollectionViewController : UICollectionViewController <FBHotspotHelperMapInfoCollectionViewCellDelegate> {

	FBUserSession* _session;
	FBHotspotHelperDataController* _dataController;
	FBHotspotHelperAnalyticsLogger* _analyticsLogger;
	BOOL _shouldSelectAnnotation;
	id<FBHotspotHelperMapInfoCollectionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBHotspotHelperMapInfoCollectionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 dataController:(id)arg2 ;
-(void)didTapVisitPageButtonWithWifiPageInfo:(id)arg1 ;
-(void)didTapDirectionsButtonWithWifiPageInfo:(id)arg1 ;
-(id)_selectedItemIndexPath;
-(void)didTapTryAgainButton;
-(void)scrollToIndexPath:(id)arg1 ;
-(void)setDelegate:(id<FBHotspotHelperMapInfoCollectionViewControllerDelegate>)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(id<FBHotspotHelperMapInfoCollectionViewControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
@end

