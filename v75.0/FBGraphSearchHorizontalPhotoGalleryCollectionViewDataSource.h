/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionViewDataSource.h>

@class FBUserSession, NSArray, UIColor, NSMapTable, NSString;

@interface FBGraphSearchHorizontalPhotoGalleryCollectionViewDataSource : NSObject <UICollectionViewDataSource> {

	FBUserSession* _session;
	NSArray* _nodes;
	long long _estimatedCount;
	unsigned long long _numberOfPhotos;
	UIColor* _cellBackgroundColor;
	NSMapTable* _weakCollectionViews;
	unsigned long long _resultType;

}

@property (nonatomic,readonly) unsigned long long resultType;              //@synthesize resultType=_resultType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 estimatedCount:(long long)arg2 numberOfPhotosToDisplay:(long long)arg3 nodes:(id)arg4 resultType:(unsigned long long)arg5 cellBackgroundColor:(id)arg6 ;
-(BOOL)_shouldDisplayCount;
-(void)configureCell:(id)arg1 withNode:(id)arg2 ;
-(long long)_calculateCountToDisplay;
-(id)_getImageForNode:(id)arg1 ;
-(id)initWithSession:(id)arg1 estimatedCount:(long long)arg2 nodes:(id)arg3 resultType:(unsigned long long)arg4 ;
-(unsigned long long)getIndexForObjectAtIndexPath:(id)arg1 ;
-(id)init;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(unsigned long long)resultType;
-(void)configureCollectionView:(id)arg1 ;
@end

