/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAssetsLibraryListener.h>
#import <Facebook/FBMediaVideoManagerDelegate.h>
#import <Facebook/FBMediaTraitsUpdateListener.h>
#import <Facebook/FBMediaImageManagerListener.h>

@class NSArray, NSDictionary, FBMediaImageManager, FBMediaVideoManager, FBMediaComposition, FBCameraRollDataSource, FBSelfieAlbumDataSource, FBPanoramaAlbumDataSource, NSMutableDictionary, FBKVOController, FBMediaPickerTraits, FBPhotoStreamDataSource, FBPhotoAssetPreparersManager, FBVideoAssetPreparersManager, FBAssetsLibrary, FBUserSession, NSString;

@interface FBMediaPickerDataSourceManager : NSObject <FBAssetsLibraryListener, FBMediaVideoManagerDelegate, FBMediaTraitsUpdateListener, FBMediaImageManagerListener> {

	NSArray* _localDataSources;
	NSDictionary* _dataSourceIDToDataSource;
	FBMediaImageManager* _imageManager;
	FBMediaVideoManager* _videoManager;
	FBMediaComposition* _currentComposition;
	FBCameraRollDataSource* _cameraRollDataSource;
	FBSelfieAlbumDataSource* _selfieAlbumDataSource;
	FBPanoramaAlbumDataSource* _panoramaAlbumDataSource;
	FBMediaComposition* _savedComposition;
	NSMutableDictionary* _assetAnnouncersByAssetID;
	FBKVOController* _observation;
	FBMediaPickerTraits* _traits;
	FBPhotoStreamDataSource* _photoStreamDataSource;
	FBPhotoAssetPreparersManager* _photoAssetPreparerManager;
	FBVideoAssetPreparersManager* _videoAssetPreparerManager;
	FBAssetsLibrary* _assetsLibrary;
	FBUserSession* _currentFBSession;

}

@property (nonatomic,retain) FBUserSession * currentFBSession;                                        //@synthesize currentFBSession=_currentFBSession - In the implementation block
@property (nonatomic,readonly) FBMediaPickerTraits * traits;                                          //@synthesize traits=_traits - In the implementation block
@property (nonatomic,readonly) FBMediaComposition * currentComposition;                               //@synthesize currentComposition=_currentComposition - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDataSources; 
@property (nonatomic,readonly) NSArray * localDataSources;                                            //@synthesize localDataSources=_localDataSources - In the implementation block
@property (nonatomic,readonly) FBPhotoStreamDataSource * photoStreamDataSource;                       //@synthesize photoStreamDataSource=_photoStreamDataSource - In the implementation block
@property (nonatomic,readonly) FBCameraRollDataSource * cameraRollDataSource;                         //@synthesize cameraRollDataSource=_cameraRollDataSource - In the implementation block
@property (nonatomic,readonly) FBSelfieAlbumDataSource * selfieAlbumDataSource;                       //@synthesize selfieAlbumDataSource=_selfieAlbumDataSource - In the implementation block
@property (nonatomic,readonly) FBPanoramaAlbumDataSource * panoramaAlbumDataSource;                   //@synthesize panoramaAlbumDataSource=_panoramaAlbumDataSource - In the implementation block
@property (nonatomic,readonly) FBPhotoAssetPreparersManager * photoAssetPreparerManager;              //@synthesize photoAssetPreparerManager=_photoAssetPreparerManager - In the implementation block
@property (nonatomic,readonly) FBVideoAssetPreparersManager * videoAssetPreparerManager;              //@synthesize videoAssetPreparerManager=_videoAssetPreparerManager - In the implementation block
@property (nonatomic,readonly) FBMediaImageManager * imageManager; 
@property (nonatomic,readonly) FBMediaVideoManager * videoManager; 
@property (nonatomic,readonly) FBAssetsLibrary * assetsLibrary;                                       //@synthesize assetsLibrary=_assetsLibrary - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCurrentFBSession:(id)arg1 mediaPickerTraits:(id)arg2 assetsLibrary:(id)arg3 ;
-(void)loadAssetsIfAccessAuthorized;
-(void)assetsLibraryDidLoadAssets;
-(void)preparePreviewImageForVideoAsset:(id)arg1 withEdits:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)mediaAttachmentsFromCurrentComposition;
-(FBCameraRollDataSource *)cameraRollDataSource;
-(unsigned long long)dataSourceIndexForPhotoAttachment:(id)arg1 ;
-(id)dataSourceWithID:(id)arg1 ;
-(id)getOrMakeNewAssetForDataSourceIndex:(unsigned long long)arg1 forDataSource:(id)arg2 ;
-(void)updatedEdits:(id)arg1 forAsset:(id)arg2 ;
-(void)removePhotoTagsEdge:(id)arg1 forAssetID:(id)arg2 source:(id)arg3 ;
-(void)mergeEditsForMediaAttachments:(id)arg1 ;
-(void)persistComposition;
-(id)mediaAttachmentsFromCurrentCompositionConsidering360Photos_EXPENSIVE;
-(void)updateThumbnailImage:(id)arg1 forPhotoAssetID:(id)arg2 ;
-(FBMediaVideoManager *)videoManager;
-(FBUserSession *)currentFBSession;
-(unsigned long long)dataSourceIndexForVideoAttachment:(id)arg1 ;
-(void)updateThumbnailImage:(id)arg1 forVideoAssetID:(id)arg2 ;
-(id)toggleSelectionAtDataSourceIndex:(unsigned long long)arg1 fromDataSource:(id)arg2 quality:(unsigned long long)arg3 ;
-(FBMediaComposition *)currentComposition;
-(void)addMediaAttachments:(id)arg1 ;
-(void)applyEditsToThumbForPhotoAssetID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)preparePreviewImageForVideoAssetID:(id)arg1 withEdits:(id)arg2 completion:(/*^block*/id)arg3 ;
-(unsigned long long)dataSourceIndexForMediaShareItem:(id)arg1 ;
-(id)getOrMakeNewAssetForDataSourceIndex:(unsigned long long)arg1 forDataSourceID:(id)arg2 ;
-(void)didUpdateMediaTraits:(id)arg1 ;
-(void)autoTagCreateIfNeededForPhotoAssetIDs:(id)arg1 createdType:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)selectedMediaShareItemWithDataSourceIndex:(unsigned long long)arg1 fromDataSource:(id)arg2 ;
-(unsigned long long)numberOfDataSources;
-(NSArray *)localDataSources;
-(void)removeListener:(id)arg1 forMediaAsset:(id)arg2 ;
-(void)addListener:(id)arg1 forMediaAsset:(id)arg2 ;
-(unsigned long long)shareIndexForDataSourceIndex:(unsigned long long)arg1 forDataSource:(id)arg2 ;
-(id)cachedThumbnailForAssetAtDataSourceIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 forDataSource:(id)arg3 ;
-(id)getMediaPickerDataSourceShowDefault:(unsigned long long)arg1 ;
-(FBPhotoAssetPreparersManager *)photoAssetPreparerManager;
-(FBVideoAssetPreparersManager *)videoAssetPreparerManager;
-(id)mediaAttachmentFromMediaShareItem:(id)arg1 ;
-(unsigned long long)datasourceIndexForShareIndex:(unsigned long long)arg1 ;
-(void)asyncPartiallyLoadAssetsIfAccessAuthorized;
-(id)getOrMakeNewAssetForItem:(id)arg1 ;
-(void)restoreComposition;
-(id)thumbnailForAssetAtDataSourceIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 forDataSource:(id)arg3 ;
-(id)requestThumbnailForAssetAtDataSourceIndex:(unsigned long long)arg1 option:(unsigned long long)arg2 forDataSource:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)_mediaAttachmentsFromCurrentCompositionIncluding360Data:(BOOL)arg1 ;
-(id)_photoAttachmentFromShareItem:(id)arg1 checkFor360Data:(BOOL)arg2 ;
-(id)_videoAttachmentFromShareItem:(id)arg1 ;
-(id)_editsForUploadForAssetID:(id)arg1 indexHint:(unsigned long long)arg2 dataSource:(id)arg3 checkFor360Data:(BOOL)arg4 ;
-(id)_editsWith360DataAddedIfAvailableForExistingEdits:(id)arg1 assetID:(id)arg2 indexHint:(unsigned long long)arg3 dataSource:(id)arg4 ;
-(id)_updateEditsWithExisting360DataAddedIfAvailableForExistingEdits:(id)arg1 sphericalParameters:(id)arg2 assetID:(id)arg3 ;
-(id)mediaAttachmentsFromCurrentCompositionIncluding360DataFromFullImageFetch_EXPENSIVE;
-(void)_reloadLocalDataSourcesFromAssetsLibrary:(id)arg1 ;
-(void)_stopObservingMediaAsset:(id)arg1 ;
-(void)_startObservingMediaAsset:(id)arg1 ;
-(void)_removeInvalidSelectionIfNeeded;
-(void)_createAndRefreshDefaultDataSourcesWithAssetsLibrary:(id)arg1 ;
-(id)_activeDefaultDataSourcesWithAssetsLibrary:(id)arg1 ;
-(unsigned long long)_dataSourceIndexForAssetID:(id)arg1 withIndexHint:(unsigned long long)arg2 dataSourceID:(id)arg3 ;
-(void)_resetAssetEditsForInMemoryAsset:(id)arg1 ;
-(FBSelfieAlbumDataSource *)selfieAlbumDataSource;
-(FBPanoramaAlbumDataSource *)panoramaAlbumDataSource;
-(id)_editedThumbnailForAssetAtDataSourceIndex:(unsigned long long)arg1 forDataSource:(id)arg2 ;
-(id)getExistingAssetForItem:(id)arg1 ;
-(void)editsDidChangeForVideoAsset:(id)arg1 ;
-(void)_removeInvalidSelectionFromComposition:(id)arg1 ;
-(unsigned long long)_dataSourceIndexForAssetID:(id)arg1 withIndexHint:(unsigned long long)arg2 inDataSource:(id)arg3 ;
-(void)_mergePhotoAssetEditsFromPhotoAttachment:(id)arg1 ;
-(void)_mergeVideoAssetEditsFromVideoAttachment:(id)arg1 ;
-(void)videoManager:(id)arg1 didChangeEditsForAsset:(id)arg2 ;
-(void)videoManager:(id)arg1 didFinishEditingAsset:(id)arg2 ;
-(id)thumbnailForPhotoShareItem:(id)arg1 ;
-(id)datasourceForShareIndex:(unsigned long long)arg1 ;
-(FBPhotoStreamDataSource *)photoStreamDataSource;
-(void)setCurrentFBSession:(FBUserSession *)arg1 ;
-(void)dealloc;
-(FBMediaPickerTraits *)traits;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(FBAssetsLibrary *)assetsLibrary;
-(void)clearComposition;
-(FBMediaImageManager *)imageManager;
@end

