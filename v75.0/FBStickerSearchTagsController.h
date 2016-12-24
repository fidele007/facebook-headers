/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>

@protocol FBStickerSearchTagsControllerDelegate;
@class FBImageDownloader, NSArray, UIColor, NSString;

@interface FBStickerSearchTagsController : NSObject <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout> {

	FBImageDownloader* _imageDownloader;
	BOOL _stickerTagNameLocalizationEnabled;
	id<FBStickerSearchTagsControllerDelegate> _delegate;
	NSArray* _searchTags;
	UIColor* _roundedViewBackgroundColor;

}

@property (assign,nonatomic,__weak) id<FBStickerSearchTagsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * searchTags;                                                     //@synthesize searchTags=_searchTags - In the implementation block
@property (nonatomic,retain) UIColor * roundedViewBackgroundColor;                                   //@synthesize roundedViewBackgroundColor=_roundedViewBackgroundColor - In the implementation block
@property (assign,nonatomic) BOOL stickerTagNameLocalizationEnabled;                                 //@synthesize stickerTagNameLocalizationEnabled=_stickerTagNameLocalizationEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithImageDownloader:(id)arg1 ;
-(void)setStickerTagNameLocalizationEnabled:(BOOL)arg1 ;
-(BOOL)stickerTagNameLocalizationEnabled;
-(void)_configureCell:(id)arg1 withTag:(id)arg2 ;
-(void)_startTagImageDownloadForCell:(id)arg1 ;
-(UIColor *)roundedViewBackgroundColor;
-(void)setRoundedViewBackgroundColor:(UIColor *)arg1 ;
-(NSArray *)searchTags;
-(void)setSearchTags:(NSArray *)arg1 ;
-(void)setDelegate:(id<FBStickerSearchTagsControllerDelegate>)arg1 ;
-(id<FBStickerSearchTagsControllerDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didUnhighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
@end

