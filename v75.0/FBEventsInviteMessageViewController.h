/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPresentableViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol FBEventsInviteMessageViewControllerDelegate;
@class FBEventAnalyticTracker, FBUserSession, FBMemEvent, NSString, FBEventsInviteMessageView;

@interface FBEventsInviteMessageViewController : UIViewController <FBPresentableViewController, UITextViewDelegate> {

	FBEventAnalyticTracker* _tracker;
	FBUserSession* _session;
	FBMemEvent* _event;
	NSString* _messageText;
	FBEventsInviteMessageView* _messageView;
	id<FBEventsInviteMessageViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventsInviteMessageViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(void)didSelectConfirm:(id)arg1 ;
-(void)didSelectCancel:(id)arg1 ;
-(id)initWithEvent:(id)arg1 note:(id)arg2 session:(id)arg3 tracker:(id)arg4 ;
-(void)setDelegate:(id<FBEventsInviteMessageViewControllerDelegate>)arg1 ;
-(id<FBEventsInviteMessageViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)textViewDidChange:(id)arg1 ;
@end

