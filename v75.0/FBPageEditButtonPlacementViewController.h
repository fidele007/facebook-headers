/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/CKComponentSizeRangeProviding.h>

@protocol FBPageEditButtonPlacementViewControllerDelegate;
@class FBMemPage, FBMemPageOpenActionEditAction, FBUserSession, CKComponentHostingView, NSString;

@interface FBPageEditButtonPlacementViewController : UIViewController <CKComponentProvider, CKComponentSizeRangeProviding> {

	FBMemPage* _page;
	FBMemPageOpenActionEditAction* _actionToBePlaced;
	FBUserSession* _session;
	id<FBPageEditButtonPlacementViewControllerDelegate> _delegate;
	CKComponentHostingView* _hostingView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(BOOL)fb_showNavBarSearchField;
-(CKSizeRange)sizeRangeForBoundingSize:(CGSize)arg1 ;
-(void)showSecondaryActions:(id)arg1 overflowItems:(id)arg2 ;
-(BOOL)fb_hideNavBarRightButton;
-(void)_didTapSaveButton;
-(id)initWithPage:(id)arg1 actionToBePlaced:(id)arg2 session:(id)arg3 delegate:(id)arg4 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

