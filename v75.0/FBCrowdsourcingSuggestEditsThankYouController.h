/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBModalDialogViewDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBNavigationCoordinator, FBCrowdsourcingSuggestEditsThankYouControllerDelegate;
@class FBModalDialogViewController, FBUserSession, FBCrowdsourcingContext, UIWindow, FBFullscreenSpinnerController, NSString;

@interface FBCrowdsourcingSuggestEditsThankYouController : NSObject <FBModalDialogViewDelegate, FBPopoverControllerDelegate> {

	FBModalDialogViewController* _modalDialogViewController;
	FBUserSession* _session;
	FBCrowdsourcingContext* _context;
	id<FBNavigationCoordinator> _navigationCoordinator;
	UIWindow* _window;
	FBFullscreenSpinnerController* _spinnerController;
	id<FBCrowdsourcingSuggestEditsThankYouControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCrowdsourcingSuggestEditsThankYouControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 context:(id)arg2 navigationCoordinator:(id)arg3 delegate:(id)arg4 ;
-(void)showThankYouMessageForWindow:(id)arg1 ;
-(void)modalDialogView:(id)arg1 didSelectPrimaryButton:(id)arg2 ;
-(void)fb_popoverControllerDidDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(id)_getSharedModalConfigBuilder;
-(void)_tappedVoteSuggestionsButton;
-(void)setDelegate:(id<FBCrowdsourcingSuggestEditsThankYouControllerDelegate>)arg1 ;
-(id<FBCrowdsourcingSuggestEditsThankYouControllerDelegate>)delegate;
@end

