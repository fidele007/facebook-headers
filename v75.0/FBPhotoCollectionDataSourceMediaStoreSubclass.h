/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotoCollectionDataSource.h>
#import <Facebook/FBGraphQLConnectionSyncStoreListener.h>

@protocol FBGraphQLConnectionSyncStoreProtocol;
@class FBMemPhoto, FBPhotoUpdater, NSString;

@interface FBPhotoCollectionDataSourceMediaStoreSubclass : FBPhotoCollectionDataSource <FBGraphQLConnectionSyncStoreListener> {

	id<FBGraphQLConnectionSyncStoreProtocol> _mediaSetStore;
	BOOL _selectedPhotoIsInvalid;
	unsigned long long _photoIndex;
	FBMemPhoto* _photo;
	FBPhotoUpdater* _photoUpdater;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(unsigned long long)photoIndex;
-(void)connectionSyncStore:(id)arg1 didAddNodesAtIndexes:(id)arg2 ;
-(void)connectionSyncStore:(id)arg1 didRemoveNodesAtIndexes:(id)arg2 ;
-(BOOL)hasMoreToSync;
-(void)syncMore:(/*^block*/id)arg1 ;
-(BOOL)selectedPhotoIsInvalid;
-(void)setSelectedPhotoIsInvalid:(BOOL)arg1 ;
-(void)setPhotoIndex:(unsigned long long)arg1 ;
-(void)_restorePhotoIndex;
-(void)syncMoreNow:(/*^block*/id)arg1 ;
-(id)photoUpdater;
-(id)initWithMediaSetStore:(id)arg1 selectedPhotoIndex:(unsigned long long)arg2 photoUpdater:(id)arg3 ;
-(void)_syncUntilPhoto;
-(void)dealloc;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(void)setPhoto:(id)arg1 ;
-(unsigned long long)photosCount;
-(id)photo;
@end
