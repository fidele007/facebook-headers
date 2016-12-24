/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBProfileSwipeableFramesDataSourceListener.h>
#import <Facebook/FBSwipeableFramesPageViewControllerDelegate.h>

@protocol FBProfileSwipeableFramesViewControllerDelegate;
@class FBUserSession, FBProfileSwipeableFramesDataSource, FBSwipeableFramesPageViewController, NSString;

@interface FBProfileSwipeableFramesViewController : UIViewController <FBProfileSwipeableFramesDataSourceListener, FBSwipeableFramesPageViewControllerDelegate> {

	FBUserSession* _session;
	FBProfileSwipeableFramesDataSource* _dataSource;
	FBSwipeableFramesPageViewController* _pageViewController;
	CGRect _frameOfViewFinder;
	BOOL _hasShownFrames;
	BOOL _underlayFromQPEnabled;
	id<FBProfileSwipeableFramesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBProfileSwipeableFramesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 dataSource:(id)arg2 underlayFromQPEnabled:(BOOL)arg3 ;
-(void)updatedCameraViewFinder:(CGRect)arg1 ;
-(void)downloadedNewStickerAsset:(id)arg1 ;
-(void)selectedFrameIndexChangedTo:(long long)arg1 ;
-(void)resetFrames;
-(void)customPageIndicatorTintColor:(id)arg1 currentPageIndicatorTintColor:(id)arg2 ;
-(CGRect)_calculateFrameOfPageView:(CGRect)arg1 ;
-(void)_layoutStickersForEachFrame;
-(void)updateBlendedImageWithIndex:(long long)arg1 ;
-(void)_layoutStickersForFrame:(id)arg1 ;
-(void)swipeUnderlay:(long long)arg1 ;
-(void)currentPageIndexDidChangeTo:(long long)arg1 ;
-(void)forwardSwipeUnderlay;
-(void)backwardSwipeUnderlay;
-(void)setDelegate:(id<FBProfileSwipeableFramesViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBProfileSwipeableFramesViewControllerDelegate>)delegate;
-(void)loadView;
@end

