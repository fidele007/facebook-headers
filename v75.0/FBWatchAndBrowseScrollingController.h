/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBrowserScrollViewDelegate.h>
#import <Facebook/FBWatchAndMoreScrollingController.h>

@protocol FBWatchAndMoreContentControlling, FBWatchAndMoreScrollingDelegate;
@class UIViewController, UIScrollView, NSString;

@interface FBWatchAndBrowseScrollingController : NSObject <FBBrowserScrollViewDelegate, FBWatchAndMoreScrollingController> {

	UIViewController*<FBWatchAndMoreContentControlling> _contentViewController;
	UIScrollView* _scrollView;
	double _chromeState;
	BOOL _browserSurfaceSizeDidChange;
	CGRect _videoFrame;
	CGSize _videoSize;
	id<FBWatchAndMoreScrollingDelegate> _watchAndMoreScrolllingDelegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBWatchAndMoreScrollingDelegate> watchAndMoreScrolllingDelegate;              //@synthesize watchAndMoreScrolllingDelegate=_watchAndMoreScrolllingDelegate - In the implementation block
-(void)browserScrollViewDidScroll:(id)arg1 chromeState:(double)arg2 browserSurfaceSizeDidChange:(BOOL)arg3 ;
-(void)_updateVideoFrame;
-(CGRect)getVideoFrame;
-(id<FBWatchAndMoreScrollingDelegate>)watchAndMoreScrolllingDelegate;
-(void)setWatchAndMoreScrolllingDelegate:(id<FBWatchAndMoreScrollingDelegate>)arg1 ;
-(id)initWithContentViewController:(id)arg1 ;
@end

