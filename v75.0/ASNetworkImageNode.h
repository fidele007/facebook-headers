/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASImageNode.h>

@protocol ASImageCacheProtocolASImageCacheProtocolDeprecated, ASImageDownloaderProtocolASImageDownloaderProtocolDeprecated, ASNetworkImageNodeDelegate;
@class NSURL, UIImage, NSUUID, ASDisplayNode;

@interface ASNetworkImageNode : ASImageNode {

	id<ASImageCacheProtocol><ASImageCacheProtocolDeprecated> _cache;
	id<ASImageDownloaderProtocol><ASImageDownloaderProtocolDeprecated> _downloader;
	id<ASNetworkImageNodeDelegate> _delegate;
	NSURL* _URL;
	UIImage* _defaultImage;
	NSUUID* _cacheUUID;
	id _downloadIdentifier;
	BOOL _imageLoaded;
	double _currentImageQuality;
	double _renderedImageQuality;
	BOOL _shouldRenderProgressImages;
	ASDisplayNode* _dummyNode;
	delegateOptionalProtocolResponseFlags _delegateFlags;
	delegateOptionalProtocolResponseFlags _downloaderFlags;
	struct {
		unsigned cacheSupportsNewProtocol : 1;
		unsigned cacheSupportsClearing : 1;
		unsigned cacheSupportsSynchronousFetch : 1;
	}  _cacheFlags;
	BOOL _shouldCacheImage;

}

@property (__weak) id<ASNetworkImageNodeDelegate> delegate; 
@property (retain) UIImage * defaultImage; 
@property (retain) NSURL * URL; 
@property (assign,nonatomic) BOOL shouldCacheImage;                        //@synthesize shouldCacheImage=_shouldCacheImage - In the implementation block
@property (assign,nonatomic) BOOL shouldRenderProgressImages; 
@property (nonatomic,readonly) double currentImageQuality; 
@property (nonatomic,readonly) double renderedImageQuality; 
-(void)_staticInitialize;
-(id)initWithImageDownloader:(id)arg1 ;
-(id)initWithCache:(id)arg1 downloader:(id)arg2 ;
-(void)_clearImage;
-(void)displayWillStart;
-(void)displayDidFinish;
-(void)_cancelImageDownload;
-(void)setURL:(id)arg1 resetToDefault:(BOOL)arg2 ;
-(void)setCurrentImageQuality:(double)arg1 ;
-(void)_updateProgressImageBlockOnDownloaderIfNeeded;
-(void)visibleStateDidChange:(BOOL)arg1 ;
-(void)clearFetchedData;
-(void)_lazilyLoadImageIfNecessary;
-(BOOL)shouldCacheImage;
-(void)_downloadImageWithCompletion:(/*^block*/id)arg1 ;
-(double)currentImageQuality;
-(void)setRenderedImageQuality:(double)arg1 ;
-(double)renderedImageQuality;
-(void)setShouldRenderProgressImages:(BOOL)arg1 ;
-(BOOL)shouldRenderProgressImages;
-(BOOL)placeholderShouldPersist;
-(void)setShouldCacheImage:(BOOL)arg1 ;
-(void)setDelegate:(id<ASNetworkImageNodeDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<ASNetworkImageNodeDelegate>)delegate;
-(NSURL *)URL;
-(void)setURL:(NSURL *)arg1 ;
-(void)fetchData;
-(UIImage *)defaultImage;
-(void)setDefaultImage:(UIImage *)arg1 ;
@end

