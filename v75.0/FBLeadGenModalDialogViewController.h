/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBWebViewContainerControllerDelegate.h>

@protocol FBNavigationCoordinator;
@class NSArray, FBLeadGenModalDialogContentViewController, FBUserSession, FBLeadGenDialogStateTracker, UIView, NSString;

@interface FBLeadGenModalDialogViewController : UIViewController <FBWebViewContainerControllerDelegate> {

	NSArray* _trackingCodes;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBLeadGenModalDialogContentViewController* _contentVC;
	FBUserSession* _userSession;
	BOOL _hasCustomDisclaimer;
	FBLeadGenDialogStateTracker* _leadGenDialogStateTracker;
	unsigned long long _totalPageNumber;
	UIView* _overlayView;
	UIView* _contentView;

}

@property (nonatomic,readonly) UIView * contentView;                                               //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) FBLeadGenModalDialogContentViewController * contentVC; 
@property (nonatomic,__weak,readonly) id<FBIntentHandler> intentHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBIntentHandler>)intentHandler;
-(void)dismissWebViewContainerController:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)userDidTapTextField:(id)arg1 ;
-(void)presentSplitFlowWithConfig:(FBLeadGenSplitFlowWebViewConfig)arg1 toolbox:(id)arg2 ;
-(FBLeadGenModalDialogContentViewController *)contentVC;
-(void)handleURLIntentTarget:(id)arg1 ;
-(id)initWithContentView:(id)arg1 trackingCodes:(id)arg2 navigationCoordinator:(id)arg3 userSession:(id)arg4 hasCustomDisclaimer:(BOOL)arg5 leadGenStateTracker:(id)arg6 totalPageNumber:(unsigned long long)arg7 ;
-(void)presentModal;
-(void)_logCommonForDismissPopover;
-(BOOL)_isOnConfirmationPage;
-(void)_logLeadGenEvent:(id)arg1 ;
-(UIView *)contentView;
-(void)dismissAnimated:(BOOL)arg1 ;
-(void)stopSpinner;
-(void)showSpinner;
@end
