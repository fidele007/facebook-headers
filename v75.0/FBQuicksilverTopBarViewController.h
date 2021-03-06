/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBQuicksilverTopBarViewDelegate.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@protocol FBQuicksilverShareOptionsConfiguration, FBQuicksilverTopBarViewControllerDelegate;
@class FBPopoverActionSheet, FBQuicksilverTopBarView, FBQuicksilverInGameNotificationView, FBUserSession, FBQuicksilverSessionInfo, NSString;

@interface FBQuicksilverTopBarViewController : UIViewController <FBQuicksilverTopBarViewDelegate, FBPopoverControllerDelegate> {

	FBPopoverActionSheet* _sharePopoverActionSheet;
	BOOL _isSharePopoverPresented;
	id<FBQuicksilverShareOptionsConfiguration> _shareOptionsConfiguration;
	FBQuicksilverTopBarView* _topBarView;
	FBQuicksilverInGameNotificationView* _inGameNotificationView;
	FBUserSession* _session;
	id<FBQuicksilverTopBarViewControllerDelegate> _delegate;
	FBQuicksilverSessionInfo* _sessionInfo;

}

@property (assign,nonatomic,__weak) id<FBQuicksilverTopBarViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBQuicksilverSessionInfo * sessionInfo;                                       //@synthesize sessionInfo=_sessionInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)setIsChallengeButtonHidden:(BOOL)arg1 ;
-(void)_willShowInGameNotification:(id)arg1 ;
-(void)dismissSharePopoverWithCompletion:(/*^block*/id)arg1 ;
-(void)_animateInGameNotificationViewWithConfig:(id)arg1 ;
-(void)_animateInGameNotificationViewToFrame:(CGRect)arg1 delay:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)quicksilverTopBarViewDidTapCloseButton:(id)arg1 ;
-(void)quicksilverTopBarViewDidTapChallengeButton:(id)arg1 ;
-(void)quicksilverTopBarViewDidTapShareButton:(id)arg1 ;
-(id)initWithShareOptionsConfiguration:(id)arg1 session:(id)arg2 ;
-(void)setDelegate:(id<FBQuicksilverTopBarViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBQuicksilverTopBarViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(FBQuicksilverSessionInfo *)sessionInfo;
-(void)setSessionInfo:(FBQuicksilverSessionInfo *)arg1 ;
@end

