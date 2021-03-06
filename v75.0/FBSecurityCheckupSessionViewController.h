/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/CKComponentHostingViewDelegate.h>

@protocol FBSecurityCheckupSessionViewControllerDelegate;
@class CKComponentHostingView, FBMemSecurityCheckup, FBSecurityCheckupContext, NSString;

@interface FBSecurityCheckupSessionViewController : UIViewController <CKComponentHostingViewDelegate> {

	CKComponentHostingView* _componentHostingView;
	FBMemSecurityCheckup* _settingsAndSessions;
	FBSecurityCheckupContext* _context;
	id<FBSecurityCheckupSessionViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBSecurityCheckupSessionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(void)updateContainerViewSize;
-(id)initWithSettingsAndSessions:(id)arg1 context:(id)arg2 ;
-(void)_didLogoutSessionsInComponent:(id)arg1 endedSessions:(id)arg2 ;
-(void)setDelegate:(id<FBSecurityCheckupSessionViewControllerDelegate>)arg1 ;
-(id<FBSecurityCheckupSessionViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)_dismissViewController;
-(long long)preferredInterfaceOrientationForPresentation;
@end

