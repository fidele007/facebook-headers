/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPagesCreatePageInitialViewDelegate.h>
#import <Facebook/FBPagesCreatePageTitleInputViewDelegate.h>
#import <Facebook/FBPagesCreatePageCategoriesViewDelegate.h>
#import <Facebook/FBPagesCreatePageWebsiteInputViewDelegate.h>
#import <Facebook/FBPagesCreatePageAddressInputViewDelegate.h>
#import <Facebook/FBPagesCreatePagePictureUploadViewDelegate.h>

@protocol FBPageCreationFlowNavigationDelegate;
@class FBUserSession, FBPagesPageCreationContext, NSString;

@interface FBPagesCreatePageViewController : UIViewController <FBPagesCreatePageInitialViewDelegate, FBPagesCreatePageTitleInputViewDelegate, FBPagesCreatePageCategoriesViewDelegate, FBPagesCreatePageWebsiteInputViewDelegate, FBPagesCreatePageAddressInputViewDelegate, FBPagesCreatePagePictureUploadViewDelegate> {

	FBUserSession* _userSession;
	unsigned long long _step;
	FBPagesPageCreationContext* _context;
	id<FBPageCreationFlowNavigationDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_hidesTabBar;
-(id)initWithUserSession:(id)arg1 step:(unsigned long long)arg2 delegate:(id)arg3 context:(id)arg4 ;
-(void)didTapSkipLabelOnAddressInputView:(id)arg1 ;
-(void)didTapNextButtonOnAddressInputView:(id)arg1 addressInfo:(id)arg2 ;
-(void)didTapNextButtonOnCategoriesView:(id)arg1 ;
-(void)didTapNextButtonOnTitleInputView:(id)arg1 ;
-(void)didTapSkipLabelOnWebsiteInputView:(id)arg1 ;
-(void)didTapSkipLabelOnProfilePictureView:(id)arg1 ;
-(void)didTapsSkipLabelOnCoverPhotoView:(id)arg1 ;
-(void)_didTapBackOnNavBar;
-(void)_navigateToNextPage;
-(void)_navigateToCategorySelection;
-(void)_firstResponderInViewResign;
-(void)_dismissErrorMessageInView;
-(void)didTapNextButtonOnInitialView:(id)arg1 ;
-(void)didTapTermsLink:(id)arg1 url:(id)arg2 ;
-(void)didTapNextButtonOnWebsiteInputView:(id)arg1 ;
-(void)didTapNextButtonOnProfilePictureView:(id)arg1 ;
-(void)didTapNextButtonOnCoverPhotoView:(id)arg1 ;
-(void)didTapUploadButtonOnProfilePictureView:(id)arg1 ;
-(void)didTapUploadButtonOnCoverPhotoView:(id)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
@end

