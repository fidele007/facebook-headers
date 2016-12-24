/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBProfileWizardViewController.h>
#import <Facebook/FBProfileWizardIntroCardFeaturedPhotosUpdateViewDelegate.h>
#import <Facebook/FBProfileFeaturedPhotosEditViewControllerDelegate.h>

@class FBProfileWizardIntroCardFeaturedPhotosUpdateView, NSString;

@interface FBProfileWizardIntroCardFeaturedPhotosUpdateViewController : FBProfileWizardViewController <FBProfileWizardIntroCardFeaturedPhotosUpdateViewDelegate, FBProfileFeaturedPhotosEditViewControllerDelegate> {

	FBProfileWizardIntroCardFeaturedPhotosUpdateView* _featuredPhotosUpdateView;
	BOOL _featuredPhotosHasUpdated;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)didTapAddFeaturedPhotosButton;
-(void)featuredPhotosHasSuccessfuallyEdited;
-(void)didTapSkip;
-(id)initWithProfileWizardModel:(id)arg1 currentStepIndex:(unsigned long long)arg2 person:(id)arg3 session:(id)arg4 toolbox:(id)arg5 ;
-(void)goToNextStep;
-(BOOL)CONTACT_APP_EXPERIENCE_BEFORE_OVERRIDING_fb_shouldBeginSwipeBackAtPoint:(CGPoint)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
@end
