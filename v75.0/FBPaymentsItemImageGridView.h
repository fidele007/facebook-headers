/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBPaymentsItemImageCollectionViewItemImageCellDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>

@class UICollectionView, FBPaymentsItemImageCollectionViewLayout, FBImageDownloader, NSArray, NSString;

@interface FBPaymentsItemImageGridView : UIView <FBPaymentsItemImageCollectionViewItemImageCellDelegate, UICollectionViewDataSource> {

	UICollectionView* _imageCollectionView;
	FBPaymentsItemImageCollectionViewLayout* _imageGridLayout;
	FBImageDownloader* _imageDownloader;
	NSArray* _imagesToDisplay;

}

@property (nonatomic,copy) NSArray * imagesToDisplay;               //@synthesize imagesToDisplay=_imagesToDisplay - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 imageDownloader:(id)arg2 ;
-(id)imageDownloaderForItemImageCell:(id)arg1 ;
-(void)setImagesToDisplay:(NSArray *)arg1 ;
-(NSArray *)imagesToDisplay;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
@end

