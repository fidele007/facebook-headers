/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLConnectionSyncStoreListener.h>
#import <UIKit/UICollectionViewDataSource.h>

@protocol FBGraphQLConnectionSyncStoreProtocol, FBPhotoSideFeedPhotosUnitDataSourceDelegate;
@class FBUserSession, NSString;

@interface FBPhotoSideFeedPhotosUnitDataSource : NSObject <FBGraphQLConnectionSyncStoreListener, UICollectionViewDataSource> {

	id<FBGraphQLConnectionSyncStoreProtocol> _mediaSetConnectionSyncStore;
	id<FBPhotoSideFeedPhotosUnitDataSourceDelegate> _delegate;
	FBUserSession* _session;
	NSString* _cellID;
	NSString* _fbid;
	unsigned long long _maxNumberOfPhotosToShow;
	CGSize _photoSize;

}

@property (assign,nonatomic) CGSize photoSize;                      //@synthesize photoSize=_photoSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFBID:(id)arg1 initialPhotos:(id)arg2 maxNumberOfPhotosToShow:(unsigned long long)arg3 delegate:(id)arg4 cellIdentifier:(id)arg5 requestProvider:(id)arg6 session:(id)arg7 ;
-(id)graphQLIDForPhotoAtIndex:(unsigned long long)arg1 ;
-(void)connectionSyncStore:(id)arg1 didUpdateNodes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2 ;
-(void)loadMorePhotos;
-(id)indexOfPhoto:(id)arg1 ;
-(id)photoIntentTargetForCellAtIndexPath:(id)arg1 photoViewProvider:(id)arg2 ;
-(unsigned long long)numberOfPhotosShown;
-(BOOL)hasPhotos;
-(BOOL)isLoadingPhotos;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(CGSize)photoSize;
-(void)setPhotoSize:(CGSize)arg1 ;
@end

