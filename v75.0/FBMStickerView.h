/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBStickerResourceManager, FBMStickerViewDelegate;
@class FBStickerImageView, UIImage, FBStickerImagesDownloader, UIColor, FBMSticker, UIActivityIndicatorView;

@interface FBMStickerView : UIView {

	id<FBStickerResourceManager> _stickerResourceManager;
	FBStickerImageView* _stickerImageView;
	unsigned long long _state;
	BOOL _isStickerImageLoaded;
	UIImage* _originalStickerImage;
	FBStickerImagesDownloader* _imagesDownloader;
	UIColor* _stickerTintColor;
	BOOL _showPlaceholderWhileLoading;
	BOOL _showLoadingIndicator;
	id<FBMStickerViewDelegate> _delegate;
	FBMSticker* _sticker;
	unsigned long long _layoutIdiom;
	long long _loadingIndicatorViewStyle;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,retain) FBMSticker * sticker;                                    //@synthesize sticker=_sticker - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<FBMStickerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long layoutIdiom;                          //@synthesize layoutIdiom=_layoutIdiom - In the implementation block
@property (assign,nonatomic) BOOL showPlaceholderWhileLoading;                        //@synthesize showPlaceholderWhileLoading=_showPlaceholderWhileLoading - In the implementation block
@property (assign,nonatomic) BOOL showLoadingIndicator;                               //@synthesize showLoadingIndicator=_showLoadingIndicator - In the implementation block
@property (nonatomic,retain) UIColor * stickerTintColor;                              //@synthesize stickerTintColor=_stickerTintColor - In the implementation block
@property (assign,nonatomic) long long loadingIndicatorViewStyle;                     //@synthesize loadingIndicatorViewStyle=_loadingIndicatorViewStyle - In the implementation block
-(unsigned long long)layoutIdiom;
-(void)setLayoutIdiom:(unsigned long long)arg1 ;
-(void)setShowLoadingIndicator:(BOOL)arg1 ;
-(FBMSticker *)sticker;
-(void)setSticker:(FBMSticker *)arg1 ;
-(void)_showLoading;
-(id)initWithStickerResourceManager:(id)arg1 ;
-(void)resumeLoadingAnimationIfNeeded;
-(void)configureWithSticker:(id)arg1 ;
-(id)getCurrentStickerImage;
-(void)setShowPlaceholderWhileLoading:(BOOL)arg1 ;
-(void)stopAllAnimations;
-(void)configureWithSticker:(id)arg1 originalImageSizeEnabled:(BOOL)arg2 callbackQueue:(id)arg3 successBlock:(/*^block*/id)arg4 ;
-(void)configureWithSticker:(id)arg1 callbackQueue:(id)arg2 successBlock:(/*^block*/id)arg3 ;
-(void)configureWithSticker:(id)arg1 originalImageSizeEnabled:(BOOL)arg2 startAnimatingOnLoaded:(BOOL)arg3 callbackQueue:(id)arg4 successBlock:(/*^block*/id)arg5 ;
-(void)startAnimationIfNeeded;
-(void)_didFetchCachedImage:(id)arg1 stickerFbId:(unsigned long long)arg2 originalImageSizeEnabled:(BOOL)arg3 startAnimatingOnLoaded:(BOOL)arg4 callbackQueue:(id)arg5 successBlock:(/*^block*/id)arg6 ;
-(void)_didLoadStickerImage:(id)arg1 withStickerFbId:(unsigned long long)arg2 loadedAsynchronously:(BOOL)arg3 startAnimatingOnLoaded:(BOOL)arg4 callbackQueue:(id)arg5 successBlock:(/*^block*/id)arg6 ;
-(void)_setStickerImage:(id)arg1 animated:(BOOL)arg2 ;
-(void)_downloadStickerImagesWithOriginalImageSizeEnabled:(BOOL)arg1 startAnimatingOnLoaded:(BOOL)arg2 callbackQueue:(id)arg3 successBlock:(/*^block*/id)arg4 ;
-(void)_hideLoading;
-(BOOL)_hasAnimationImages;
-(void)_loadAnimationIfNeeded:(/*^block*/id)arg1 ;
-(void)setStickerTintColor:(UIColor *)arg1 ;
-(BOOL)showPlaceholderWhileLoading;
-(UIColor *)stickerTintColor;
-(long long)loadingIndicatorViewStyle;
-(void)setLoadingIndicatorViewStyle:(long long)arg1 ;
-(void)setDelegate:(id<FBMStickerViewDelegate>)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)layoutSubviews;
-(id<FBMStickerViewDelegate>)delegate;
-(void)startAnimation:(BOOL)arg1 ;
-(void)stopAnimation;
-(BOOL)showLoadingIndicator;
-(void)setLoadingIndicator:(UIActivityIndicatorView *)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)_startAnimation;
@end
