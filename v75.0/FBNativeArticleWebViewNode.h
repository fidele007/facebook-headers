/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/ASDisplayNode.h>
#import <Facebook/FBNativeArticleWebViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@protocol FBReuseInstanceProvider, FBNativeArticleWebViewProtocol, FBNativeArticleWebViewNodeDelegate;
@class FBUserSession, NSDictionary, UIScrollView, NSURL, NSString;

@interface FBNativeArticleWebViewNode : ASDisplayNode <FBNativeArticleWebViewDelegate, UIScrollViewDelegate> {

	struct {
		unsigned scrollViewWillBeginDragging : 1;
		unsigned scrollViewDidScroll : 1;
		unsigned scrollViewWillEndDragging : 1;
		unsigned shouldStartNavigationRequest : 1;
		unsigned didStartNavigationRequest : 1;
		unsigned didFailNavigationRequest : 1;
		unsigned didFinishNavigationRequest : 1;
		unsigned didUpdateProgress : 1;
		unsigned didUpdateContentSize : 1;
		unsigned didOpenThirdPartyAppURL : 1;
		unsigned didReceiveUserScriptMessage : 1;
	}  _delegateFlags;
	BOOL _didDequeueInstance;
	id<FBReuseInstanceProvider> _reuseProvider;
	BOOL _scalesPageToFit;
	BOOL _useWKWebViewIfAvailable;
	FBUserSession* _session;
	id<FBNativeArticleWebViewProtocol> _webViewWrapper;
	NSDictionary* _webViewUserScripts;
	BOOL _webViewAllowsInlineMediaAutoplay;
	unsigned long long _numResizes;
	BOOL _showsHorizontalScrollIndicator;
	BOOL _showsVerticalScrollIndicator;
	id<FBNativeArticleWebViewNodeDelegate> _delegate;

}

@property (nonatomic,readonly) UIView*<FBNativeArticleWebViewProtocol> webView; 
@property (nonatomic,readonly) CGSize contentSize; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) BOOL showsHorizontalScrollIndicator;                                 //@synthesize showsHorizontalScrollIndicator=_showsHorizontalScrollIndicator - In the implementation block
@property (assign,nonatomic) BOOL showsVerticalScrollIndicator;                                   //@synthesize showsVerticalScrollIndicator=_showsVerticalScrollIndicator - In the implementation block
@property (assign,nonatomic,__weak) id<FBNativeArticleWebViewNodeDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)webViewClassUsingWKIfAvailable:(BOOL)arg1 ;
-(void)_staticInitialize;
-(BOOL)webView:(id)arg1 shouldStartNavigationRequest:(id)arg2 navigationType:(long long)arg3 sourceFrame:(id)arg4 targetFrame:(id)arg5 ;
-(void)webView:(id)arg1 didStartNavigationRequest:(id)arg2 ;
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3 ;
-(void)webView:(id)arg1 didFinishNavigationRequest:(id)arg2 ;
-(void)webView:(id)arg1 progressChanged:(double)arg2 ;
-(BOOL)isPannedToEdge:(unsigned)arg1 ;
-(id)initWithReuseProvider:(id)arg1 scalesPageToFit:(BOOL)arg2 session:(id)arg3 useWKWebViewIfAvailable:(BOOL)arg4 userScriptsOnDocumentLoad:(id)arg5 allowsInlineMediaAutoplay:(BOOL)arg6 ;
-(void)webView:(id)arg1 didReceiveUserScriptMessage:(id)arg2 ;
-(void)_destroyWebView;
-(BOOL)_isPannedToTop;
-(BOOL)_isPannedToBottom;
-(BOOL)_isPannedToLeftEdge;
-(BOOL)_isPannedToRightEdge;
-(void)_acquireWebViewIfNecessary;
-(void)_jiggleWindowContent;
-(void)_addWebViewToHierachy;
-(void)_updateSizeIfNeededWithDelay:(double)arg1 ;
-(void)_zoomToFit;
-(BOOL)_shouldUseReusePool;
-(BOOL)point:(CGPoint)arg1 isCloseToEdge:(unsigned)arg2 ;
-(void)addBackingView;
-(void)executeJavascript:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)dequeueBackingViewIfNecessary;
-(void)enqueueBackingViewIfNecessary;
-(void)removeBackingView;
-(void)setDelegate:(id<FBNativeArticleWebViewNodeDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)init;
-(void)setShowsVerticalScrollIndicator:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(id<FBNativeArticleWebViewNodeDelegate>)delegate;
-(void)setShowsHorizontalScrollIndicator:(BOOL)arg1 ;
-(CGSize)contentSize;
-(UIScrollView *)scrollView;
-(BOOL)showsHorizontalScrollIndicator;
-(BOOL)showsVerticalScrollIndicator;
-(void)layout;
-(UIView*<FBNativeArticleWebViewProtocol>)webView;
-(NSURL *)URL;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)loadRequest:(id)arg1 ;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2 ;
-(BOOL)isLoading;
-(void)stopLoading;
@end

