/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class FBModalDialogView, FBPopoverController;

@interface FBModalDialogViewController : UIViewController {

	FBModalDialogView* _modalDialogView;
	FBPopoverController* _fb_popoverController;

}

@property (nonatomic,readonly) FBModalDialogView * modalDialogView;                            //@synthesize modalDialogView=_modalDialogView - In the implementation block
@property (nonatomic,__weak,readonly) FBPopoverController * fb_popoverController;              //@synthesize fb_popoverController=_fb_popoverController - In the implementation block
-(FBPopoverController *)fb_popoverController;
-(id)initWithView:(id)arg1 popoverController:(id)arg2 ;
-(FBModalDialogView *)modalDialogView;
-(void)_registerObservers;
-(void)dealloc;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
-(void)orientationChanged:(id)arg1 ;
@end

