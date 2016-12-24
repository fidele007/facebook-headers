/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBEventCancelActionHandlerDelegate.h>
#import <Facebook/FBPresentableViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol FBEventCancelEventViewControllerDelegate;
@class FBMemEvent, NSString, FBEventCancelActionHandler;

@interface FBEventCancelEventViewController : UITableViewController <FBEventCancelActionHandlerDelegate, FBPresentableViewController, UITextViewDelegate> {

	FBMemEvent* _event;
	long long _cancelType;
	NSString* _cancelReason;
	FBEventCancelActionHandler* _cancelActionHandler;
	id<FBEventCancelEventViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBEventCancelEventViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
-(void)didSelectConfirm:(id)arg1 ;
-(void)didSelectCancel:(id)arg1 ;
-(id)_buildCancelTypeRow:(long long)arg1 ;
-(void)didCancelEvent;
-(void)didDeleteEvent;
-(id)initWithEvent:(id)arg1 session:(id)arg2 tracker:(id)arg3 ;
-(void)setDelegate:(id<FBEventCancelEventViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBEventCancelEventViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)textViewDidChange:(id)arg1 ;
@end
