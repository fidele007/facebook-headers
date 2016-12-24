/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBBrowserExtensionWebViewDelegateProtocol.h>

@protocol FBBrowserExtensionLoggerProtocol, FBBrowserSurface;
@class FBUserSession, NSURL, NSString, FBBrowserExtensionWebViewDelegateUtility, FBMessengerExtensionFavoriteItemManagementHandler;

@interface FBMessengerExtensionWebViewDelegate : NSObject <FBBrowserExtensionWebViewDelegateProtocol> {

	FBUserSession* _session;
	NSURL* _hostUrl;
	NSString* _pageID;
	NSString* _adID;
	id<FBBrowserExtensionLoggerProtocol> _logger;
	BOOL _didInitiateMessageThread;
	FBBrowserExtensionWebViewDelegateUtility* _browserExtensionWebViewDelegateUtility;
	FBMessengerExtensionFavoriteItemManagementHandler* _favoriteItemManagementHandler;
	id<FBBrowserSurface> _browserSurface;

}

@property (nonatomic,retain) FBMessengerExtensionFavoriteItemManagementHandler * favoriteItemManagementHandler;              //@synthesize favoriteItemManagementHandler=_favoriteItemManagementHandler - In the implementation block
@property (assign,nonatomic,__weak) id<FBBrowserSurface> browserSurface;                                                     //@synthesize browserSurface=_browserSurface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * previousWebsiteTitle; 
@property (nonatomic,readonly) NSURL * previousLinkBrowsed; 
-(void)webViewController:(id)arg1 webViewTitleChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 webViewURLChanged:(id)arg2 ;
-(void)webViewController:(id)arg1 didFailLoadURL:(id)arg2 withError:(id)arg3 ;
-(void)webViewController:(id)arg1 didFinishLoadURL:(id)arg2 ;
-(void)webViewController:(id)arg1 favoriteItemTappedWithURL:(id)arg2 selected:(BOOL)arg3 ;
-(void)setBrowserSurface:(id<FBBrowserSurface>)arg1 ;
-(id)initWithSession:(id)arg1 pageID:(id)arg2 adID:(id)arg3 logger:(id)arg4 ;
-(void)setFavoriteItemManagementHandler:(FBMessengerExtensionFavoriteItemManagementHandler *)arg1 ;
-(void)didPresentWebViewController:(id)arg1 ;
-(NSURL *)previousLinkBrowsed;
-(NSString *)previousWebsiteTitle;
-(void)autofillScrollViewDidTapAutofill:(id)arg1 selectedAutofillGroup:(id)arg2 ;
-(void)showAutofillScrollViewWithSession:(id)arg1 featureEnabledList:(id)arg2 autofillGroups:(id)arg3 autofillConfirmedCallback:(/*^block*/id)arg4 ;
-(void)hideAutofillScrollView;
-(id<FBBrowserSurface>)browserSurface;
-(void)_initiateMessageThreadWithPage;
-(void)_logBrowserExtensionErrorWithErrorCode:(unsigned long long)arg1 websiteURL:(id)arg2 errorMessage:(id)arg3 ;
-(FBMessengerExtensionFavoriteItemManagementHandler *)favoriteItemManagementHandler;
@end

