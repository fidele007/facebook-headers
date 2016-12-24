/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotoCollectionDataSource.h>

@protocol FBSearchResultsPhotoCollectionDataSourceFetchingDelegate;
@class FBPhotoUpdater, NSMutableArray, NSArray;

@interface FBSearchResultsPhotoCollectionDataSourceSubclass : FBPhotoCollectionDataSource {

	FBPhotoUpdater* _photoUpdater;
	NSMutableArray* _photos;
	BOOL _selectedPhotoIsInvalid;
	unsigned long long _photoIndex;
	id<FBSearchResultsPhotoCollectionDataSourceFetchingDelegate> _fetchingDelegate;

}

@property (assign,nonatomic,__weak) id<FBSearchResultsPhotoCollectionDataSourceFetchingDelegate> fetchingDelegate;              //@synthesize fetchingDelegate=_fetchingDelegate - In the implementation block
@property (nonatomic,copy) NSArray * photos;                                                                                    //@synthesize photos=_photos - In the implementation block
-(unsigned long long)photoIndex;
-(void)appendPhotos:(id)arg1 ;
-(id)initWithPhotos:(id)arg1 selectedPhotoIndex:(unsigned long long)arg2 ;
-(void)insertPhotos:(id)arg1 fromIndex:(unsigned long long)arg2 ;
-(BOOL)hasMoreToSync;
-(void)syncMore:(/*^block*/id)arg1 ;
-(BOOL)selectedPhotoIsInvalid;
-(void)setSelectedPhotoIsInvalid:(BOOL)arg1 ;
-(void)setPhotoIndex:(unsigned long long)arg1 ;
-(id<FBSearchResultsPhotoCollectionDataSourceFetchingDelegate>)fetchingDelegate;
-(void)setFetchingDelegate:(id<FBSearchResultsPhotoCollectionDataSourceFetchingDelegate>)arg1 ;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(void)setPhotos:(NSArray *)arg1 ;
-(NSArray *)photos;
-(unsigned long long)photosCount;
-(id)photo;
@end
