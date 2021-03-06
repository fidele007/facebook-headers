/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBBookmarksFavoritesDownloaderDelegate;
@class FBScenePath, FBUserSession, NSMutableSet;

@interface FBBookmarksFavoritesDownloader : NSObject {

	BOOL _canFavoriteApps;
	BOOL _shouldHideFavoritedBookmarks;
	FBScenePath* _scenePath;
	FBUserSession* _session;
	id<FBServiceTransactionMutating> _token;
	NSMutableSet* _sectionsWithFavorites;
	id<FBBookmarksFavoritesDownloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBBookmarksFavoritesDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_processDownloadedResponse:(id)arg1 error:(id)arg2 ;
-(void)_createSectionsFromViewer:(id)arg1 ;
-(unsigned long long)_glyphNameForSection:(unsigned long long)arg1 ;
-(id)_sectionFromFolder:(id)arg1 withRepresentativeGlyph:(unsigned long long)arg2 ;
-(BOOL)_folderHasFavoritableBookmark:(id)arg1 ;
-(BOOL)_canFavoriteBookmark:(id)arg1 ;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 canFavoriteApps:(BOOL)arg3 shouldHideFavoritedBookmarks:(BOOL)arg4 ;
-(void)loadFavorites;
-(id)noItemsTitleForSection:(long long)arg1 ;
-(id)noItemsExplanationForSection:(long long)arg1 ;
-(void)setDelegate:(id<FBBookmarksFavoritesDownloaderDelegate>)arg1 ;
-(id<FBBookmarksFavoritesDownloaderDelegate>)delegate;
-(long long)numberOfSections;
-(id)titleForSection:(long long)arg1 ;
@end

