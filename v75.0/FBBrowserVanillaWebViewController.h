/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBUserSession, NSURL, UIView;

@interface FBBrowserVanillaWebViewController : UIViewController {

	FBUserSession* _session;
	NSURL* _URL;
	unsigned long long _webViewClass;
	UIView* _webView;

}
-(BOOL)fb_showNavBarSearchField;
-(id)initWithURL:(id)arg1 webViewClass:(unsigned long long)arg2 ;
-(id)initWithURL:(id)arg1 webViewClass:(unsigned long long)arg2 withUserSession:(id)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

