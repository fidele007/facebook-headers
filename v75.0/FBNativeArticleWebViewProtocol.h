/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIScrollView, UIView, NSURL;


@protocol FBNativeArticleWebViewProtocol
@property (assign,nonatomic,__weak) id<FBNativeArticleWebViewDelegate> delegate; 
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) NSURL * URL; 
@property (getter=isLoading,nonatomic,readonly) BOOL loading; 
@required
-(id)initWithFrame:(CGRect)arg1 scalesPageToFit:(BOOL)arg2 suppressesIncrementalRendering:(BOOL)arg3 userScriptsOnDocumentLoad:(id)arg4 allowsInlineMediaAutoplay:(BOOL)arg5 session:(id)arg6;
-(void)setDelegate:(id)arg1;
-(id<FBNativeArticleWebViewDelegate>)delegate;
-(UIView *)view;
-(UIScrollView *)scrollView;
-(NSURL *)URL;
-(void)loadRequest:(id)arg1;
-(void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
-(BOOL)isLoading;
-(BOOL)canGoBack;
-(BOOL)canGoForward;
-(void)stopLoading;
-(void)goBack;
-(void)goForward;
-(void)evaluateJavaScript:(id)arg1 completionHandler:(/*^block*/id)arg2;

@end

