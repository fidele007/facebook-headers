/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBWebView.h>

@protocol FBWebViewAlertHandler, FBWebViewAnalytics;
@class WKWebView, FBWKWebViewDelegateAdaptor, FBKVOController, FBTimer, UIView, NSString, NSURLRequest, WKNavigation, NSURL, UIScrollView;

@interface FBWKWebView : UIView <FBWebView> {

	CGPoint _lastTouchLocation;
	WKWebView* _webView;
	FBWKWebViewDelegateAdaptor* _delegateAdaptor;
	FBKVOController* _KVOController;
	BOOL _readyToNavigate;
	/*^block*/id _pendingBlockToRunWhenReady;
	FBTimer* _touchEventTimer;
	BOOL _isBannerAtTop;
	BOOL _youtubeNavigationFix;
	BOOL _allowPopupsOnlyDuringUserInteraction;
	BOOL _recoveredFromOOMCrash;
	BOOL _allowPopups;
	int _displayState;
	UIView* _bannerView;
	unsigned long long _dataDetectorTypes;
	UIView* _errorView;
	NSString* _customUserAgent;
	NSURLRequest* _request;
	id<FBWebViewAlertHandler> _alertHandler;
	id<FBWebViewAnalytics> _analytics;
	WKNavigation* _perfLogNavigation;

}

@property (nonatomic,retain) NSURLRequest * request;                                                                                 //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) BOOL recoveredFromOOMCrash;                                                                           //@synthesize recoveredFromOOMCrash=_recoveredFromOOMCrash - In the implementation block
@property (nonatomic,retain) id<FBWebViewAlertHandler> alertHandler;                                                                 //@synthesize alertHandler=_alertHandler - In the implementation block
@property (nonatomic,retain) id<FBWebViewAnalytics> analytics;                                                                       //@synthesize analytics=_analytics - In the implementation block
@property (nonatomic,retain) WKNavigation * perfLogNavigation;                                                                       //@synthesize perfLogNavigation=_perfLogNavigation - In the implementation block
@property (nonatomic,readonly) BOOL allowPopups;                                                                                     //@synthesize allowPopups=_allowPopups - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) int displayState;                                                                                       //@synthesize displayState=_displayState - In the implementation block
@property (nonatomic,copy,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSURL * currentLocationURL; 
@property (nonatomic,readonly) BOOL canGoBack; 
@property (nonatomic,readonly) BOOL canGoForward; 
@property (assign,nonatomic) unsigned long long dataDetectorTypes;                                                                   //@synthesize dataDetectorTypes=_dataDetectorTypes - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,retain) UIView * bannerView;                                                                                    //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIView * errorView;                                                                                     //@synthesize errorView=_errorView - In the implementation block
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (assign,nonatomic) BOOL isBannerAtTop;                                                                                     //@synthesize isBannerAtTop=_isBannerAtTop - In the implementation block
@property (assign,nonatomic,__weak) id<FBWebViewDelegate> delegate; 
@property (nonatomic,readonly) int webViewImplementation; 
@property (assign,nonatomic) BOOL youtubeNavigationFix;                                                                              //@synthesize youtubeNavigationFix=_youtubeNavigationFix - In the implementation block
@property (assign,setter=setAllowPopupsOnlyDuringUserInteraction:,nonatomic) BOOL allowPopupsOnlyDuringUserInteraction;              //@synthesize allowPopupsOnlyDuringUserInteraction=_allowPopupsOnlyDuringUserInteraction - In the implementation block
@property (nonatomic,copy) NSString * customUserAgent;                                                                               //@synthesize customUserAgent=_customUserAgent - In the implementation block
+(void)setUnsupportedMIMETypes:(id)arg1 ;
+(void)setUseNavigationResponseMIMESupport:(BOOL)arg1 ;
+(void)setUnsupportedMIMETypeErrorBlock:(/*^block*/id)arg1 ;
-(void)setAnalytics:(id<FBWebViewAnalytics>)arg1 ;
-(id<FBWebViewAnalytics>)analytics;
-(NSURL *)currentLocationURL;
-(int)displayState;
-(void)setGestureRecognizersEnabled:(BOOL)arg1 ;
-(void)safeExecuteJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_setReadyToNavigate;
-(void)_runBlockWhenReadyToNavigate:(/*^block*/id)arg1 ;
-(void)_estimatedProgressChanged;
-(int)webViewImplementation;
-(BOOL)currentlyCrashed;
-(BOOL)recoveredFromOOMCrash;
-(void)updateOrientationWithOrientation:(long long)arg1 ;
-(void)setYoutubeNavigationFix:(BOOL)arg1 ;
-(void)setAllowPopupsOnlyDuringUserInteraction:(BOOL)arg1 ;
-(void)addScriptMessageHandlerForName:(id)arg1 ;
-(void)setDisplayState:(int)arg1 ;
-(void)setIsBannerAtTop:(BOOL)arg1 ;
-(BOOL)isBannerAtTop;
-(id)initWithProcessPoolContainer:(id)arg1 frame:(CGRect)arg2 analytics:(id)arg3 alertHandler:(id)arg4 optimizeForBackgroundProcessing:(BOOL)arg5 ;
-(void)_layoutBannerView;
-(BOOL)youtubeNavigationFix;
-(BOOL)allowPopupsOnlyDuringUserInteraction;
-(void)_navigationHistoryChanged;
-(void)_recoverFromOOMCrash;
-(id)_disableLocationServicesScriptString;
-(id)_TTIMetricScriptString;
-(id)_getSelectionScriptString;
-(void)_loadingStateChanged;
-(void)_titleChanged;
-(void)_URLChanged;
-(BOOL)_tryHackPOSTForRequest:(id)arg1 ;
-(void)_touchEventDetector;
-(id)customUserAgent:(id)arg1 ;
-(id)_trackHistoryScriptString;
-(WKNavigation *)perfLogNavigation;
-(void)setPerfLogNavigation:(WKNavigation *)arg1 ;
-(BOOL)allowPopups;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBWebViewDelegate>)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(void)reload;
-(id<FBWebViewDelegate>)delegate;
-(NSURLRequest *)request;
-(NSString *)title;
-(UIScrollView *)scrollView;
-(void)setDataDetectorTypes:(unsigned long long)arg1 ;
-(unsigned long long)dataDetectorTypes;
-(void)setCustomUserAgent:(NSString *)arg1 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(id)backForwardList;
-(BOOL)isLoading;
-(id)stringByEvaluatingJavaScriptFromString:(id)arg1 ;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(NSString *)customUserAgent;
-(void)setKeyboardDisplayRequiresUserAction:(BOOL)arg1 ;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)setRequest:(NSURLRequest *)arg1 ;
-(BOOL)hasOnlySecureContent;
-(void)removeScriptMessageHandlerForName:(id)arg1 ;
-(void)loadData:(id)arg1 MIMEType:(id)arg2 characterEncodingName:(id)arg3 baseURL:(id)arg4 ;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setBannerView:(UIView *)arg1 ;
-(UIView *)bannerView;
-(void)setErrorView:(UIView *)arg1 ;
-(UIView *)errorView;
-(void)setAlertHandler:(id<FBWebViewAlertHandler>)arg1 ;
-(id<FBWebViewAlertHandler>)alertHandler;
@end
