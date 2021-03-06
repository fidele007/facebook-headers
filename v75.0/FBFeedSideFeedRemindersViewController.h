/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <UIKit/UIViewControllerAnimatedTransitioning.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBFlipViewControllerDelegate.h>

@protocol FBQueriedRemindersSideFeedSubUnitFieldsProtocol;
@class UIImageView, UIGestureRecognizer, FBMemModelObject, FBUserSession, UILabel, UIButton, UIScrollView, NSArray, FBFlipViewController, NSString;

@interface FBFeedSideFeedRemindersViewController : UIViewController <UIViewControllerTransitioningDelegate, UIViewControllerAnimatedTransitioning, UIGestureRecognizerDelegate, FBFlipViewControllerDelegate> {

	CGRect _transitionRect;
	UIImageView* _blurredBackgroundView;
	UIImageView* _snapshotBackgroundView;
	CGSize _lastLayoutSize;
	UIGestureRecognizer* _tapDismissRecognizer;
	FBMemModelObject*<FBQueriedRemindersSideFeedSubUnitFieldsProtocol> _reminders;
	FBUserSession* _session;
	UILabel* _titleLabel;
	UIButton* _doneButton;
	UIScrollView* _scrollView;
	NSArray* _reminderViews;
	FBFlipViewController* _flipViewController;

}

@property (nonatomic,readonly) FBMemModelObject*<FBQueriedRemindersSideFeedSubUnitFieldsProtocol> reminders;              //@synthesize reminders=_reminders - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) UILabel * titleLabel;                                                                      //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UIButton * doneButton;                                                                     //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,readonly) UIScrollView * scrollView;                                                                 //@synthesize scrollView=_scrollView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * reminderViews;                                                              //@synthesize reminderViews=_reminderViews - In the implementation block
@property (nonatomic,readonly) FBFlipViewController * flipViewController;                                                 //@synthesize flipViewController=_flipViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 reminders:(id)arg2 transitionRect:(CGRect)arg3 ;
-(FBFlipViewController *)flipViewController;
-(void)flipPresentViewController:(id)arg1 fromView:(id)arg2 initialPosition:(CGPoint)arg3 contentSize:(CGSize)arg4 completion:(/*^block*/id)arg5 ;
-(void)flipDismissViewControllerCompletion:(/*^block*/id)arg1 ;
-(void)flipDismissViewController;
-(id)viewsForReminders;
-(void)flipViewControllerDidTapBackground:(id)arg1 ;
-(void)_pressDoneButton;
-(void)_releaseDoneButton;
-(void)_horizontallyLayoutViews:(id)arg1 withPadding:(double)arg2 ;
-(void)_performPresentationTransition:(id)arg1 ;
-(void)_performDismissalTransition:(id)arg1 ;
-(void)_performTransitionAnimation:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)_shouldAnimateTransitionForReminderView:(id)arg1 ;
-(void)flipPresentViewController:(id)arg1 fromView:(id)arg2 initialPosition:(CGPoint)arg3 ;
-(NSArray *)reminderViews;
-(void)dealloc;
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(UIScrollView *)scrollView;
-(void)viewDidLayoutSubviews;
-(UILabel *)titleLabel;
-(void)viewDidLoad;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(UIButton *)doneButton;
-(id)titleText;
-(FBMemModelObject*<FBQueriedRemindersSideFeedSubUnitFieldsProtocol>)reminders;
-(FBUserSession *)session;
-(void)_dismiss:(id)arg1 ;
@end

