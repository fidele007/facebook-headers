/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBWebImageViewListener.h>
#import <Facebook/FBWebImageViewLayoutDelegate.h>
#import <Facebook/FBSnacksMediaView.h>

@protocol FBSnacksMediaViewDelegate, FBDirectInboxMessageProtocol;
@class FBWebImageView, CADisplayLink, FBTimer, UIActivityIndicatorView, NSString;

@interface FBSnacksPhotoView : UIView <FBWebImageViewListener, FBWebImageViewLayoutDelegate, FBSnacksMediaView> {

	FBWebImageView* _photoView;
	CADisplayLink* _displayLink;
	FBTimer* _timer;
	double _timerStartTime;
	double _timeElapsedBeforePause;
	BOOL _paused;
	BOOL _imageLoaded;
	UIActivityIndicatorView* _spinnerView;
	id<FBSnacksMediaViewDelegate> _delegate;
	id<FBDirectInboxMessageProtocol> _item;

}

@property (nonatomic,readonly) id<FBDirectInboxMessageProtocol> item;              //@synthesize item=_item - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithToolbox:(id)arg1 ;
-(CGRect)imageView:(id)arg1 contentRectInsideMaskView:(id)arg2 imageSize:(CGSize)arg3 ;
-(void)webImageViewDidSetImage:(id)arg1 fromCache:(BOOL)arg2 ;
-(void)webImageView:(id)arg1 didUpdateLoadProgress:(double)arg2 ;
-(void)webImageView:(id)arg1 willStartDownloadingSpecifier:(id)arg2 ;
-(void)_onDisplayLinkDidFire;
-(BOOL)isViewFinishedLoading;
-(void)seekToBeginning;
-(void)configureWithItem:(id)arg1 delegate:(id)arg2 ;
-(id)displayedMedia;
-(id)clonePhotoView;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBDirectInboxMessageProtocol>)item;
-(void)prepareForReuse;
-(void)_startTimer;
-(void)pause;
-(void)_cancelTimer;
-(void)play;
-(BOOL)isPaused;
-(void)_timerDidFire;
@end
