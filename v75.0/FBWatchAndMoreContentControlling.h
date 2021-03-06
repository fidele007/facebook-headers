/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScrollView;


@protocol FBWatchAndMoreContentControlling <NSObject>
@property (assign,nonatomic) BOOL swipeAwayEnable; 
@property (assign,nonatomic,__weak) id<FBWatchAndMoreContentViewControllerDelegate> delegate; 
@property (nonatomic,readonly) UIScrollView * contentView; 
@property (assign,nonatomic) BOOL shouldHideStatusBar; 
@property (nonatomic,readonly) id<FBWatchAndMoreScrollingController> watchAndMoreScrollingController; 
@property (nonatomic,retain) UIScrollView * contentAndVideoScrollView; 
@optional
-(id<FBWatchAndMoreScrollingController>)watchAndMoreScrollingController;
-(void)setContentAndVideoScrollView:(id)arg1;
-(UIScrollView *)contentAndVideoScrollView;

@required
-(void)setShouldHideStatusBar:(BOOL)arg1;
-(BOOL)shouldHideStatusBar;
-(BOOL)swipeAwayEnable;
-(void)setSwipeAwayEnable:(BOOL)arg1;
-(void)setDelegate:(id)arg1;
-(id<FBWatchAndMoreContentViewControllerDelegate>)delegate;
-(UIScrollView *)contentView;

@end

