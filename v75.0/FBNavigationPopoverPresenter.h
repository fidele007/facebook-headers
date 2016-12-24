/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPopoverOverlayNavigationCoordinatorDelegate.h>
#import <Facebook/FBPopoverOverlayDelegate.h>

@class FBRefactoredNavigationCoordinator, FBRefactoredNavigationController, FBRefactoredNavigationStateManager, FBPopoverOverlayNavigationCoordinator, NSString;

@interface FBNavigationPopoverPresenter : NSObject <FBPopoverOverlayNavigationCoordinatorDelegate, FBPopoverOverlayDelegate> {

	unsigned long long _openedPopoverOverlaysCount;
	FBRefactoredNavigationCoordinator* _navigationCoordinator;
	FBRefactoredNavigationController* _navigationController;
	FBRefactoredNavigationStateManager* _navigationStateManager;
	FBPopoverOverlayNavigationCoordinator* _popoverOverlayNavigationCoordinator;

}

@property (nonatomic,__weak,readonly) FBRefactoredNavigationCoordinator * navigationCoordinator;                       //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
@property (nonatomic,__weak,readonly) FBRefactoredNavigationController * navigationController;                         //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,__weak,readonly) FBRefactoredNavigationStateManager * navigationStateManager;                     //@synthesize navigationStateManager=_navigationStateManager - In the implementation block
@property (nonatomic,retain) FBPopoverOverlayNavigationCoordinator * popoverOverlayNavigationCoordinator;              //@synthesize popoverOverlayNavigationCoordinator=_popoverOverlayNavigationCoordinator - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBRefactoredNavigationCoordinator *)navigationCoordinator;
-(void)presentFloatingViewController:(id)arg1 viewFrameBlock:(/*^block*/id)arg2 ;
-(void)dismissFloatingViewController:(id)arg1 ;
-(void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)presentPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 ;
-(void)dismissPopoverOverlay:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissPopoverOverlayContainingContentViewController:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)popoverOverlayShouldDismissPopover:(id)arg1 ;
-(void)popoverOverlayWillDismissPopover:(id)arg1 ;
-(void)popoverOverlayDidDismissPopover:(id)arg1 ;
-(FBPopoverOverlayNavigationCoordinator *)popoverOverlayNavigationCoordinator;
-(void)popoverOverlayNavigationCoordinator:(id)arg1 didDismissPopoverOverlay:(id)arg2 ;
-(void)setPopoverOverlayNavigationCoordinator:(FBPopoverOverlayNavigationCoordinator *)arg1 ;
-(FBRefactoredNavigationStateManager *)navigationStateManager;
-(id)customOriginSourceViewForAlreadyPresentedPopoverOverlay;
-(id)initWithNavigationCoordinator:(id)arg1 navigationController:(id)arg2 navigationStateManager:(id)arg3 ;
-(BOOL)presentPopoverOverlayController:(id)arg1 fromURL:(id)arg2 presentationOptions:(unsigned long long)arg3 popoverInfo:(id)arg4 animated:(BOOL)arg5 completion:(/*^block*/id)arg6 whenClosed:(/*^block*/id)arg7 ;
-(FBRefactoredNavigationController *)navigationController;
@end

