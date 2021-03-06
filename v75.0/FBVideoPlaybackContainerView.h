/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBImageDownloader, CALayer, FBNetworkImageView, UIColor, NSString, UIImage, NSURL, UIView;

@interface FBVideoPlaybackContainerView : UIView {

	FBImageDownloader* _downloader;
	CALayer* _shadowLayer;
	FBNetworkImageView* _imagePlaceholderView;
	UIColor* _backgroundColor;
	BOOL _supportsVideoPreviewImage;
	BOOL _showVideoPreviewImage;
	CALayer* _currentLayer;
	NSString* _avPlayerLayerGravity;
	CGRect _videoFrame;

}

@property (assign,nonatomic) BOOL supportsVideoPreviewImage;               //@synthesize supportsVideoPreviewImage=_supportsVideoPreviewImage - In the implementation block
@property (assign,nonatomic) BOOL showVideoPreviewImage;                   //@synthesize showVideoPreviewImage=_showVideoPreviewImage - In the implementation block
@property (assign,nonatomic) BOOL showShadow; 
@property (nonatomic,retain) UIImage * defaultImage; 
@property (nonatomic,retain) NSURL * imageURL; 
@property (nonatomic,retain) CALayer * currentLayer;                       //@synthesize currentLayer=_currentLayer - In the implementation block
@property (nonatomic,copy) NSString * avPlayerLayerGravity;                //@synthesize avPlayerLayerGravity=_avPlayerLayerGravity - In the implementation block
@property (assign,nonatomic) CGRect videoFrame;                            //@synthesize videoFrame=_videoFrame - In the implementation block
@property (nonatomic,readonly) UIView * imagePlaceholderView;              //@synthesize imagePlaceholderView=_imagePlaceholderView - In the implementation block
-(CGRect)videoFrame;
-(void)setVideoFrame:(CGRect)arg1 ;
-(void)setShowShadow:(BOOL)arg1 ;
-(BOOL)showShadow;
-(void)setCurrentLayer:(CALayer *)arg1 ;
-(BOOL)_hasPreviewImage;
-(void)setImageURL:(id)arg1 scenePath:(id)arg2 ;
-(id)_avPlayerLayerGravityToCAContentsGravity:(id)arg1 ;
-(NSString *)avPlayerLayerGravity;
-(id)initWithFrame:(CGRect)arg1 playerLayer:(id)arg2 downloader:(id)arg3 ;
-(void)setShowVideoPreviewImage:(BOOL)arg1 ;
-(void)setSupportsVideoPreviewImage:(BOOL)arg1 ;
-(void)setAvPlayerLayerGravity:(NSString *)arg1 ;
-(BOOL)isVisibleOnScreen;
-(UIView *)imagePlaceholderView;
-(BOOL)supportsVideoPreviewImage;
-(BOOL)showVideoPreviewImage;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)layoutSublayersOfLayer:(id)arg1 ;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(CALayer *)currentLayer;
-(void)setImageURL:(NSURL *)arg1 ;
-(NSURL *)imageURL;
-(UIImage *)defaultImage;
-(void)setDefaultImage:(UIImage *)arg1 ;
@end

