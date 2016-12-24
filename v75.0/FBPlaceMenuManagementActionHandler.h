/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBLocalLinkMenuViewControllerDelegate.h>
#import <Facebook/FBLocalPhotoMenuViewControllerDelegate.h>
#import <Facebook/FBPlaceMenuViewControllerDelegate.h>

@protocol FBNavigationCoordinator;
@class FBUserSession, NSString, UIActivityIndicatorView;

@interface FBPlaceMenuManagementActionHandler : NSObject <FBLocalLinkMenuViewControllerDelegate, FBLocalPhotoMenuViewControllerDelegate, FBPlaceMenuViewControllerDelegate> {

	FBUserSession* _session;
	NSString* _pageId;
	NSString* _pageName;
	id<FBNavigationCoordinator> _navigationCoordinator;
	UIActivityIndicatorView* _activityIndicator;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapSaveMenuButtonWithMenuType:(id)arg1 viewControllerToDismiss:(id)arg2 ;
-(void)showActivityIndicatorInView:(id)arg1 ;
-(void)didSuccessfullyChangeMenuWithViewController:(id)arg1 ;
-(void)hideActivityIndicatorInView:(id)arg1 ;
-(void)presentAlertViewForInvalidLinkMenuWithTitle:(id)arg1 message:(id)arg2 ;
-(void)presentAlertViewForFailingToChangeMenu;
-(void)didTapSaveMenuButtonWithUri:(id)arg1 viewControllerToDismiss:(id)arg2 ;
-(id)initWithSession:(id)arg1 pageId:(id)arg2 pageName:(id)arg3 navigationCoordinator:(id)arg4 ;
-(void)presentPhotoMenuWithShouldShowSaveButton:(BOOL)arg1 ;
-(void)presentStructuredMenuViewWithShouldShowSaveButton:(BOOL)arg1 ;
-(void)presentLinkMenu;
@end

