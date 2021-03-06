/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBVideoFilmstripViewDataSource.h>
#import <Facebook/FBVideoFilmstripViewDelegate.h>

@protocol FBFilmStripViewDelegate;
@class FBVideoFilmstripView, FBFilmStripThumbnailGenerator, AVAsset, NSString;

@interface FBFilmStripView : UIView <FBVideoFilmstripViewDataSource, FBVideoFilmstripViewDelegate> {

	FBVideoFilmstripView* _filmStripView;
	FBFilmStripThumbnailGenerator* _thumbnailGenerator;
	BOOL _dirtyThumbnails;
	SCD_Struct_FB101 _videoTimeRange;
	double _videoAspect;
	double _videoFramerate;
	BOOL _zoomOutAfterZoomIn;
	CGPoint _zoomOutAfterZoomInPoint;
	AVAsset* _asset;
	double _pointsPerSecond;
	double _aspect;
	id<FBFilmStripViewDelegate> _delegate;

}

@property (nonatomic,retain) AVAsset * asset;                                          //@synthesize asset=_asset - In the implementation block
@property (assign,nonatomic) double pointsPerSecond;                                   //@synthesize pointsPerSecond=_pointsPerSecond - In the implementation block
@property (assign,nonatomic) double aspect;                                            //@synthesize aspect=_aspect - In the implementation block
@property (assign,nonatomic,__weak) id<FBFilmStripViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CGRect filmstripRect; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)_videoAspectRatio;
-(void)updatePlayerFilterAtIndex:(unsigned long long)arg1 withFilter:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 enableColorFilter:(BOOL)arg2 ;
-(void)resetThumbnailCache;
-(BOOL)isCurrentlyZooming;
-(void)setPointsPerSecond:(double)arg1 ;
-(void)updateFilmCropOriginWithXProportion:(double)arg1 YProportion:(double)arg2 ;
-(BOOL)isShowingFrames;
-(void)zoomInAtPoint:(CGPoint)arg1 ;
-(void)zoomOutAtPoint:(CGPoint)arg1 ;
-(CGRect)filmstripRect;
-(CGRect)filmstripRectForFilmstripOffset:(double)arg1 ;
-(BOOL)moveFilmstripByOffset:(double)arg1 ;
-(double)xPositionForTime:(SCD_Struct_FB100)arg1 inView:(id)arg2 ;
-(void)filmStripViewDidScroll:(id)arg1 ;
-(void)filmStripViewWillBeginDragging:(id)arg1 ;
-(void)filmStripViewDidEndDecelerating:(id)arg1 ;
-(void)filmStripViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)filmStripViewDidBeginZooming:(id)arg1 ;
-(void)filmStripViewDidEndZooming:(id)arg1 ;
-(BOOL)filmStripView:(id)arg1 shouldBeginScrubbingAtTime:(SCD_Struct_FB100)arg2 ;
-(void)filmStripView:(id)arg1 didBeginScrubbingAtTime:(SCD_Struct_FB100)arg2 ;
-(void)filmStripView:(id)arg1 didScrubAtTime:(SCD_Struct_FB100)arg2 ;
-(void)filmStripViewDidEndScrubbing:(id)arg1 ;
-(void)_updateThumbnailImages;
-(SCD_Struct_FB101)timeRangeForRect:(CGRect)arg1 ;
-(SCD_Struct_FB101)timeRangeOnScreen;
-(void)_resetAndReloadFilmstripThumbnails;
-(long long)filmStripViewMode:(id)arg1 ;
-(double)filmStripViewPointsPerSecond:(id)arg1 ;
-(double)filmStripViewVideoAspectRatio:(id)arg1 ;
-(SCD_Struct_FB101)filmStripViewVideoTimeRange:(id)arg1 ;
-(double)filmStripViewFramerate:(id)arg1 ;
-(/*^block*/id)filmStripView:(id)arg1 fetchThumbnailAtTime:(SCD_Struct_FB100)arg2 queue:(id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(double)pointsPerSecond;
-(void)setDelegate:(id<FBFilmStripViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBFilmStripViewDelegate>)delegate;
-(BOOL)isZoomed;
-(AVAsset *)asset;
-(void)setAsset:(AVAsset *)arg1 ;
-(void)setAspect:(double)arg1 ;
-(double)aspect;
-(void)setOverlayImage:(id)arg1 ;
@end

