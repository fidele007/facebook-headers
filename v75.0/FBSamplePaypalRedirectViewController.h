/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPaypalViewControllerDelegate.h>

@class FBUserSession, NSString;

@interface FBSamplePaypalRedirectViewController : UIViewController <FBPaypalViewControllerDelegate> {

	FBUserSession* _session;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addPaypal:(id)arg1 ;
-(void)paypalViewController:(id)arg1 didSave:(id)arg2 ;
-(void)paypalViewController:(id)arg1 failedWithErrors:(id)arg2 isCanceled:(BOOL)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)viewDidLoad;
-(id)initWithSession:(id)arg1 ;
@end

