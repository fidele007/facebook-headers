/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBFundraiserCoverPhotoCropViewControllerDelegate.h>

@class FBListViewController, FBFundraiserCreateFlowToolbox;

@interface FBFundraiserSuggestedCoverPhotoPickerViewController : UIViewController <FBFundraiserCoverPhotoCropViewControllerDelegate> {

	FBListViewController* _listViewController;
	FBFundraiserCreateFlowToolbox* _toolbox;

}
-(void)_didTapClose;
-(id)initWithCharityID:(id)arg1 toolbox:(id)arg2 ;
-(void)didTapComponent:(id)arg1 withCoverPhoto:(id)arg2 ;
-(void)coverPhotoCropViewControllerDidCancel:(id)arg1 ;
-(void)coverPhotoCropViewController:(id)arg1 didCompleteCrop:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
@end

