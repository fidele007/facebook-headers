/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBBrowserExtensionWebViewDelegateProtocol.h>

@protocol FBBrowserSurface;
@class NSString, NSURL, FBBrowserExtensionWebViewDelegateUtility, FBUserSession, FBExpandableNavigationBar, FBInstantExperienceSplashView, NSArray;

@interface FBInstantExperienceWebViewDelegate : NSObject <FBBrowserExtensionWebViewDelegateProtocol> {

	FBBrowserExtensionWebViewDelegateUtility* _browserExtensionWebViewDelegateUtility;
	FBUserSession* _session;
	FBExpandableNavigationBar* _navigationBar;
	FBInstantExperienceSplashView* _splashScreen;
	NSArray* _whitelistedDomainNames;
	id<FBBrowserSurface> _browserSurface;

}

@property (assign,nonatomic,__weak) id<FBBrowserSurface> browserSurface;              //@synthesize browserSurface=_browserSurface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * previousWebsiteTitle; 
@property (nonatomic,readonly) NSURL * previousLinkBrowsed; 
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 didUpdateProgress:(double)arg2 ;
-(BOOL)webViewController:(id)arg1 shouldStartLoadURL:(id)arg2 navigationType:(long long)arg3 ;
-(void)webViewController:(id)arg1 didFailLoadURL:(id)arg2 withError:(id)arg3 ;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2 ;
-(void)webViewController:(id)arg1 userCanceledLoadURL:(id)arg2 ;
-(id)initWithSession:(id)arg1 navigationBar:(id)arg2 splashScreen:(id)arg3 whitelistedDomainNames:(id)arg4 ;
-(void)setBrowserSurface:(id<FBBrowserSurface>)arg1 ;
-(void)didPresentWebViewController:(id)arg1 ;
-(NSURL *)previousLinkBrowsed;
-(NSString *)previousWebsiteTitle;
-(void)_fadeAndHideSplashScreen;
-(void)_resetNavigationBarProgress;
-(void)_injectSdkInWebView:(id)arg1 ;
-(void)autofillScrollViewDidTapAutofill:(id)arg1 selectedAutofillGroup:(id)arg2 ;
-(void)showAutofillScrollViewWithSession:(id)arg1 featureEnabledList:(id)arg2 autofillGroups:(id)arg3 autofillConfirmedCallback:(/*^block*/id)arg4 ;
-(void)hideAutofillScrollView;
-(id<FBBrowserSurface>)browserSurface;
@end

