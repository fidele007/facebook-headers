/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWebViewDelegate.h>
#import <Facebook/FBAppService.h>

@protocol FBWebView;
@class FBUserSession, UIView, NSOperationQueue, NSMutableDictionary, FBMemBrowserTopWebAssetsList, NSString;

@interface FBBrowserCacheWarmerService : NSObject <FBWebViewDelegate, FBAppService> {

	FBUserSession* _session;
	UIView*<FBWebView> _webView;
	NSOperationQueue* _operationQueue;
	NSMutableDictionary* _analyticsData;
	FBMemBrowserTopWebAssetsList* _webAssetsList;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)startAppService;
-(void)stopAppService;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)_warmCaches;
-(void)_fetchWebAssetsListIfRequired:(/*^block*/id)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end

