/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBClonePhotoView.h>

@protocol FBWebImageDownloader, FBWebImageSpecifier, FBWebImageViewLayoutDelegate, FBWebImageTransitionProtocol, FBWebImageTransitionAsyncCalculator, FBWebImageLogger;
@class UIImageView, FBWebImageDownloaderReuseFactory, FBWebImageViewListenerAnnouncer, FBWebImageSentinelLogger, UIView, FBScenePath, NSSet, NSString, UIImage;

@interface FBWebImageView : UIView <FBClonePhotoView> {

	UIImageView* _imageView;
	FBWebImageDownloaderReuseFactory* _downloaderFactory;
	id<FBWebImageDownloader> _downloader;
	id<FBWebImageSpecifier> _imageSpecifier;
	id<FBWebImageViewLayoutDelegate> _defaultLayoutDelegate;
	FBWebImageViewListenerAnnouncer* _announcer;
	id<FBWebImageTransitionProtocol> _placeholderTransition;
	FBWebImageSentinelLogger* _sentinelLogger;
	long long _downloadStatus;
	id<FBWebImageTransitionAsyncCalculator> _transitionAsyncCalculator;
	UIView* _placeholderView;
	unsigned long long _transitionType;
	id<FBWebImageViewLayoutDelegate> _layoutDelegate;
	unsigned long long _displayedImageFlag;
	FBScenePath* _scenePath;
	NSSet* _analyticsTags;
	id<FBWebImageLogger> _logger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<FBWebImageSpecifier> imageSpecifier;                              //@synthesize imageSpecifier=_imageSpecifier - In the implementation block
@property (nonatomic,retain) UIView * placeholderView;                                            //@synthesize placeholderView=_placeholderView - In the implementation block
@property (assign,nonatomic) unsigned long long transitionType;                                   //@synthesize transitionType=_transitionType - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebImageViewLayoutDelegate> layoutDelegate;              //@synthesize layoutDelegate=_layoutDelegate - In the implementation block
@property (nonatomic,readonly) UIImage * displayedImage; 
@property (nonatomic,readonly) unsigned long long displayedImageFlag;                             //@synthesize displayedImageFlag=_displayedImageFlag - In the implementation block
@property (nonatomic,readonly) id logicalIdentifier; 
@property (nonatomic,retain) FBScenePath * scenePath;                                             //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,copy) NSSet * analyticsTags;                                                 //@synthesize analyticsTags=_analyticsTags - In the implementation block
@property (nonatomic,retain) FBWebImageSentinelLogger * sentinelLogger;                           //@synthesize sentinelLogger=_sentinelLogger - In the implementation block
@property (nonatomic,readonly) id<FBWebImageLogger> logger;                                       //@synthesize logger=_logger - In the implementation block
-(FBScenePath *)scenePath;
-(void)setScenePath:(FBScenePath *)arg1 ;
-(BOOL)_isInitialized;
-(id)initWithDownloaderFactory:(id)arg1 logger:(id)arg2 ;
-(UIImage *)displayedImage;
-(void)setImageSpecifier:(id<FBWebImageSpecifier>)arg1 ;
-(unsigned long long)displayedImageFlag;
-(id)clonePhotoViewInfoWithSourceInfo:(id)arg1 ;
-(id<FBWebImageSpecifier>)imageSpecifier;
-(id)logicalIdentifier;
-(void)setAnalyticsTags:(NSSet *)arg1 ;
-(void)setSentinelLogger:(FBWebImageSentinelLogger *)arg1 ;
-(void)_updateImage:(id)arg1 ;
-(FBWebImageSentinelLogger *)sentinelLogger;
-(void)updateImageDownloaderFactory:(id)arg1 logger:(id)arg2 ;
-(NSSet *)analyticsTags;
-(void)_resetImage;
-(void)_updatePlaceholderTransition;
-(id)initWithFrame:(CGRect)arg1 downloaderFactory:(id)arg2 logger:(id)arg3 ;
-(void)_resetDownload;
-(id)_activeLayoutDelegate;
-(void)_resetForNewImageSpecifier:(id)arg1 ;
-(void)_parseImageDownloadResponse:(id)arg1 ;
-(void)_hidePlaceholder;
-(void)cancel;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)description;
-(id<FBWebImageLogger>)logger;
-(void)setImageURL:(id)arg1 ;
-(void)setPlaceholderView:(UIView *)arg1 ;
-(UIView *)placeholderView;
-(void)_showPlaceholder;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(id<FBWebImageViewLayoutDelegate>)layoutDelegate;
-(void)setLayoutDelegate:(id<FBWebImageViewLayoutDelegate>)arg1 ;
-(unsigned long long)transitionType;
-(void)setTransitionType:(unsigned long long)arg1 ;
@end

