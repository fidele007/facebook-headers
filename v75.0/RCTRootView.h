/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:01 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol RCTRootViewDelegate;
@class RCTBridge, NSString, NSDictionary, RCTRootContentView, UIViewController, UIView;

@interface RCTRootView : UIView {

	RCTBridge* _bridge;
	NSString* _moduleName;
	NSDictionary* _launchOptions;
	RCTRootContentView* _contentView;
	NSDictionary* _appProperties;
	long long _sizeFlexibility;
	id<RCTRootViewDelegate> _delegate;
	UIViewController* _reactViewController;
	UIView* _loadingView;
	double _loadingViewFadeDelay;
	double _loadingViewFadeDuration;
	CGSize _intrinsicSize;

}

@property (assign,nonatomic) CGSize intrinsicSize;                                       //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * moduleName;                               //@synthesize moduleName=_moduleName - In the implementation block
@property (nonatomic,readonly) RCTBridge * bridge;                                       //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,copy) NSDictionary * appProperties;                                 //@synthesize appProperties=_appProperties - In the implementation block
@property (assign,nonatomic) long long sizeFlexibility;                                  //@synthesize sizeFlexibility=_sizeFlexibility - In the implementation block
@property (assign,nonatomic,__weak) id<RCTRootViewDelegate> delegate;                    //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * reactViewController;              //@synthesize reactViewController=_reactViewController - In the implementation block
@property (nonatomic,readonly) UIView * contentView;                                     //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) UIView * loadingView;                                       //@synthesize loadingView=_loadingView - In the implementation block
@property (assign,nonatomic) BOOL passThroughTouches; 
@property (assign,nonatomic) double loadingViewFadeDelay;                                //@synthesize loadingViewFadeDelay=_loadingViewFadeDelay - In the implementation block
@property (assign,nonatomic) double loadingViewFadeDuration;                             //@synthesize loadingViewFadeDuration=_loadingViewFadeDuration - In the implementation block
-(UIViewController *)reactViewController;
-(NSString *)moduleName;
-(void)cancelTouches;
-(void)setSizeFlexibility:(long long)arg1 ;
-(id)initWithBridge:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 ;
-(void)setLoadingViewFadeDuration:(double)arg1 ;
-(id)reactTag;
-(void)setAppProperties:(NSDictionary *)arg1 ;
-(NSDictionary *)appProperties;
-(void)setReactViewController:(UIViewController *)arg1 ;
-(void)javaScriptDidLoad:(id)arg1 ;
-(id)fb_flagPerfLogger;
-(void)fb_setFlagPerfLogger:(id)arg1 ;
-(void)bridgeDidReload;
-(CGSize)intrinsicSize;
-(void)setIntrinsicSize:(CGSize)arg1 ;
-(void)hideLoadingView;
-(void)bundleFinishedLoading:(id)arg1 ;
-(BOOL)passThroughTouches;
-(void)setPassThroughTouches:(BOOL)arg1 ;
-(void)runApplication:(id)arg1 ;
-(id)initWithBundleURL:(id)arg1 moduleName:(id)arg2 initialProperties:(id)arg3 launchOptions:(id)arg4 ;
-(void)contentViewInvalidated;
-(double)loadingViewFadeDelay;
-(void)setLoadingViewFadeDelay:(double)arg1 ;
-(double)loadingViewFadeDuration;
-(long long)sizeFlexibility;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<RCTRootViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id<RCTRootViewDelegate>)delegate;
-(UIView *)contentView;
-(BOOL)canBecomeFirstResponder;
-(UIView *)loadingView;
-(void)showLoadingView;
-(void)setLoadingView:(UIView *)arg1 ;
-(RCTBridge *)bridge;
@end

