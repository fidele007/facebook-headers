/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBContentController <NSObject>
@property (assign,nonatomic,__weak) id<UIScrollViewDelegate> scrollDelegate; 
@property (assign,nonatomic,__weak) id<FBNavigationChromePresenter> chromePresenter; 
@property (assign,nonatomic,__weak) id<FBLoadingProgressDelegate> loadingProgressDelegate; 
@property (assign,nonatomic) UIEdgeInsets contentInset; 
@required
-(BOOL)canRespondToGestureInDirection:(long long)arg1 withTouches:(id)arg2;
-(void)didGainActiveFocus;
-(void)didLoseActiveFocus;
-(void)setChromePresenter:(id)arg1;
-(void)setLoadingProgressDelegate:(id)arg1;
-(void)cancelScrolling;
-(void)viewDidEnterPreloadingViewport;
-(void)viewDidExitPreloadingViewport;
-(id<FBNavigationChromePresenter>)chromePresenter;
-(id<FBLoadingProgressDelegate>)loadingProgressDelegate;
-(UIEdgeInsets)contentInset;
-(void)setContentInset:(UIEdgeInsets)arg1;
-(id<UIScrollViewDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id)arg1;
-(void)scrollToTopAnimated:(BOOL)arg1;

@end

