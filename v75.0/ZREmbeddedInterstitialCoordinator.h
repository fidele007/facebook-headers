/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol ZRGatedViewControllerProvider;
@class ZREmbeddedInterstitialViewController, UIViewController, UIView;

@interface ZREmbeddedInterstitialCoordinator : UIViewController {

	id<ZRGatedViewControllerProvider> _delegate;
	ZREmbeddedInterstitialViewController* _interstitialViewController;
	UIViewController* _internalGatedViewController;

}

@property (nonatomic,retain) UIViewController * internalGatedViewController;                                          //@synthesize internalGatedViewController=_internalGatedViewController - In the implementation block
@property (nonatomic,readonly) UIView * activeView; 
@property (nonatomic,readonly) UIViewController * activeViewController; 
@property (nonatomic,retain,readonly) ZREmbeddedInterstitialViewController * interstitialViewController;              //@synthesize interstitialViewController=_interstitialViewController - In the implementation block
-(BOOL)isGatedViewControllerLoaded;
-(UIViewController *)internalGatedViewController;
-(id)gatedViewController;
-(void)setInternalGatedViewController:(UIViewController *)arg1 ;
-(id)initWithInterstitialViewController:(id)arg1 delegate:(id)arg2 ;
-(void)showGatedView:(BOOL)arg1 ;
-(void)showInterstitialView:(BOOL)arg1 ;
-(ZREmbeddedInterstitialViewController *)interstitialViewController;
-(void)dealloc;
-(void)loadView;
-(UIView *)activeView;
-(UIViewController *)activeViewController;
@end

