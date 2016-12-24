/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBWebViewDelegate.h>

@protocol FBWebView, FBZeroRatingInterstitialWebViewControllerDelegate;
@class UIView, NSURL, NSString;

@interface FBZeroRatingInterstitialWebViewController : UIViewController <FBWebViewDelegate> {

	UIView*<FBWebView> _webView;
	id<FBZeroRatingInterstitialWebViewControllerDelegate> _delegate;
	NSURL* _url;

}

@property (assign,nonatomic,__weak) id<FBZeroRatingInterstitialWebViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSURL * url;                                                                        //@synthesize url=_url - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)webView:(id)arg1 didFailNavigationRequest:(id)arg2 withError:(id)arg3 ;
-(void)_cancelUpsell;
-(BOOL)isNextStepURL:(id)arg1 ;
-(void)setDelegate:(id<FBZeroRatingInterstitialWebViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBZeroRatingInterstitialWebViewControllerDelegate>)delegate;
-(NSURL *)url;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)setUrl:(NSURL *)arg1 ;
-(BOOL)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3 ;
-(id)initWithURL:(id)arg1 delegate:(id)arg2 ;
@end

