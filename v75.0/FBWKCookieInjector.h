/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/WKNavigationDelegate.h>

@protocol FBWebViewAnalytics;
@class WKWebView, WKProcessPool, NSMutableArray, NSString;

@interface FBWKCookieInjector : NSObject <WKNavigationDelegate> {

	WKWebView* _dummyWKWebView;
	/*^block*/id _completionBlock;
	WKProcessPool* _wkProcessPool;
	FBWKCookieInjector* _self;
	NSMutableArray* _hosts;
	id<FBWebViewAnalytics> _analytics;

}

@property (nonatomic,retain) id<FBWebViewAnalytics> analytics;              //@synthesize analytics=_analytics - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_hosts;
+(BOOL)_URLHost:(id)arg1 matchesHost:(id)arg2 ;
+(void)_logCookieInjectedIntoNSHTTPCookieStorage:(id)arg1 host:(id)arg2 analytics:(id)arg3 ;
+(BOOL)_isValidCookieFragment:(id)arg1 ;
+(void)_logCookieInjectedIntoWKProcessPoolCookies:(id)arg1 oldCookieNames:(id)arg2 analytics:(id)arg3 ;
+(void)injectFBCookiesFromNSHTTPCookieStorageIntoWKProcessPool:(id)arg1 analytics:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
+(void)injectFBCookiesIntoNSHTTPCookieStorageFromWKNavigationResponse:(id)arg1 analytics:(id)arg2 ;
-(void)setAnalytics:(id<FBWebViewAnalytics>)arg1 ;
-(id<FBWebViewAnalytics>)analytics;
-(void)_injectFBCookiesFromNSHTTPCookieStorageIntoWKProcessPool:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_injectForPendingHosts;
-(void)dealloc;
-(void)webView:(id)arg1 didFinishNavigation:(id)arg2 ;
@end

