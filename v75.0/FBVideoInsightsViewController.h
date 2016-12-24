/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/FBVideoInsightViewDismissing.h>

@class CKComponentHostingView, FBUserSession, FBMemVideo, FBVideoInsightToolbox, NSString;

@interface FBVideoInsightsViewController : UIViewController <CKComponentProvider, CKComponentHostingViewDelegate, FBVideoInsightViewDismissing> {

	CKComponentHostingView* _hostingView;
	FBUserSession* _session;
	FBMemVideo* _video;
	FBVideoInsightToolbox* _toolbox;
	NSString* _entryPointForAnalytics;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)_updateModel:(id)arg1 ;
-(id)initWithVideo:(id)arg1 session:(id)arg2 entryPointForAnalytics:(id)arg3 ;
-(void)dismissView:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_fetchVideoInsights;
-(void)_logEventForAnalytics;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end
