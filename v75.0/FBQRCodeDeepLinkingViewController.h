/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBUserSession, NSString, UIActivityIndicatorView;

@interface FBQRCodeDeepLinkingViewController : UIViewController {

	FBUserSession* _session;
	NSString* _qrcodeID;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
-(id)initWithSession:(id)arg1 andQRCodeID:(id)arg2 ;
-(void)initSpinner;
-(void)sendGraphAPICallToRecordScanHistory;
-(void)qrcodeDownloadResponseBlockHelper:(id)arg1 error:(id)arg2 ;
-(void)finishWithViewDismissal;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(void)handleError:(id)arg1 ;
-(void)decode;
-(void)handleDownloadError:(id)arg1 ;
@end

