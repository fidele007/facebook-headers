/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPaymentsExpandableItem.h>

@protocol FBPaymentsExpandableViewControllerExpandingDelegate, FBEventTicketingImageViewerPresenter, FBEventTicketingSectionalSeatingCheckoutFlowLauncher;
@class FBEventBuyTicketExternalPartnerModel, FBUserSession, FBEventAnalyticTracker, FBListViewController, NSString;

@interface FBEventTicketingSectionalSeatingViewController : UIViewController <FBPaymentsExpandableItem> {

	FBEventBuyTicketExternalPartnerModel* _model;
	FBUserSession* _session;
	FBEventAnalyticTracker* _tracker;
	FBListViewController* _listViewController;
	id<FBPaymentsExpandableViewControllerExpandingDelegate> _expandingDelegate;
	id<FBEventTicketingImageViewerPresenter> _imageViewerPresenter;
	id<FBEventTicketingSectionalSeatingCheckoutFlowLauncher> _checkoutFlowLauncher;

}

@property (assign,nonatomic,__weak) id<FBEventTicketingImageViewerPresenter> imageViewerPresenter;                              //@synthesize imageViewerPresenter=_imageViewerPresenter - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventTicketingSectionalSeatingCheckoutFlowLauncher> checkoutFlowLauncher;              //@synthesize checkoutFlowLauncher=_checkoutFlowLauncher - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBPaymentsExpandableViewControllerExpandingDelegate> expandingDelegate;                  //@synthesize expandingDelegate=_expandingDelegate - In the implementation block
-(id<FBEventTicketingSectionalSeatingCheckoutFlowLauncher>)checkoutFlowLauncher;
-(double)preferredHeightWithWidth:(double)arg1 ;
-(id<FBPaymentsExpandableViewControllerExpandingDelegate>)expandingDelegate;
-(void)setExpandingDelegate:(id<FBPaymentsExpandableViewControllerExpandingDelegate>)arg1 ;
-(id)initWithModel:(id)arg1 session:(id)arg2 tracker:(id)arg3 ;
-(id<FBEventTicketingImageViewerPresenter>)imageViewerPresenter;
-(void)setImageViewerPresenter:(id<FBEventTicketingImageViewerPresenter>)arg1 ;
-(void)setCheckoutFlowLauncher:(id<FBEventTicketingSectionalSeatingCheckoutFlowLauncher>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end
