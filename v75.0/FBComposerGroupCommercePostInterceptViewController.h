/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBInterstitialViewController.h>
#import <Facebook/FBInterstitialViewDelegate.h>

@protocol FBComposerGroupCommercePostInterceptViewControllerDelegate;
@class FBUserSession, NSString;

@interface FBComposerGroupCommercePostInterceptViewController : FBInterstitialViewController <FBInterstitialViewDelegate> {

	FBUserSession* _session;
	id<FBComposerGroupCommercePostInterceptViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerGroupCommercePostInterceptViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSession:(id)arg1 ;
-(void)interstitialView:(id)arg1 didSelectPrimaryButton:(id)arg2 ;
-(void)interstitialView:(id)arg1 didSelectSecondaryButton:(id)arg2 ;
-(void)setDelegate:(id<FBComposerGroupCommercePostInterceptViewControllerDelegate>)arg1 ;
-(id<FBComposerGroupCommercePostInterceptViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
@end

