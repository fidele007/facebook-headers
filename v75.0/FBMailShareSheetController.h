/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/MFMailComposeViewControllerDelegate.h>
#import <Facebook/FBMailShareSheetInterstitialViewDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBMailShareSheetControllerDelegate;
@class FBUserSession, UIView, FBMailShareSheetInterstitialView, FBMailShareSheetParams, MFMailComposeViewController, FBMemMailShareSheetConfiguration, NSString;

@interface FBMailShareSheetController : UIViewController <MFMailComposeViewControllerDelegate, FBMailShareSheetInterstitialViewDelegate, UINavigationControllerDelegate, FBPopoverControllerDelegate> {

	FBUserSession* _session;
	UIView* _sourceView;
	BOOL _shouldShowMailComposer;
	FBMailShareSheetInterstitialView* _interstitialView;
	FBMailShareSheetParams* _params;
	id<FBMailShareSheetControllerDelegate> _delegate;
	MFMailComposeViewController* _mailViewController;
	FBMemMailShareSheetConfiguration* _config;

}

@property (nonatomic,retain) MFMailComposeViewController * mailViewController;                    //@synthesize mailViewController=_mailViewController - In the implementation block
@property (nonatomic,retain) FBMemMailShareSheetConfiguration * config;                           //@synthesize config=_config - In the implementation block
@property (assign,nonatomic,__weak) id<FBMailShareSheetControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForInterstitialViewWithSession:(id)arg1 params:(id)arg2 ;
-(void)_updateConfigFromServerDataAndShowShareSheet;
-(void)_showShareSheet;
-(void)_updateConfigWithServerResponse:(id)arg1 ;
-(void)setMailViewController:(MFMailComposeViewController *)arg1 ;
-(void)mailShareSheetInterstitialView:(id)arg1 didReturnError:(id)arg2 ;
-(MFMailComposeViewController *)mailViewController;
-(void)setDelegate:(id<FBMailShareSheetControllerDelegate>)arg1 ;
-(id<FBMailShareSheetControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(FBMemMailShareSheetConfiguration *)config;
-(void)setConfig:(FBMemMailShareSheetConfiguration *)arg1 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3 ;
@end

