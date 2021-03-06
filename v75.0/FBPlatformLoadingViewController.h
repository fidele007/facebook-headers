/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>
#import <Facebook/FBPresentableViewController.h>
#import <Facebook/FBPlatformViewController.h>
#import <Facebook/FBPlatformLoadingViewDelegate.h>

@class FBPlatformLoadingView, FBPlatformAction, NSString;

@interface FBPlatformLoadingViewController : UIViewController <UIWebViewDelegate, FBPresentableViewController, FBPlatformViewController, FBPlatformLoadingViewDelegate> {

	FBPlatformLoadingView* _loadingView;
	FBPlatformAction* _action;

}

@property (nonatomic,retain) FBPlatformAction * action;                                      //@synthesize action=_action - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(unsigned long long)preferredPresentationMethod;
-(BOOL)validateAction;
-(void)loadingViewDidCancel:(id)arg1 ;
-(id)init;
-(unsigned long long)supportedInterfaceOrientations;
-(FBPlatformAction *)action;
-(void)setAction:(FBPlatformAction *)arg1 ;
-(void)viewDidLoad;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)dismiss;
-(id)initWithAction:(id)arg1 ;
@end

