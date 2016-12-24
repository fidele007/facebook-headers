/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class NSString, UIBarButtonItem, FBPagePrivateReplyView, FBPagePrivateReplyNetworker, FBUserSession, FBMemComment;

@interface FBPagePrivateReplyViewController : UIViewController <UITextViewDelegate> {

	NSString* _authorName;
	NSString* _snippetText;
	UIBarButtonItem* _sendButton;
	FBPagePrivateReplyView* _replyView;
	FBPagePrivateReplyNetworker* _networker;
	FBUserSession* _userSession;
	NSString* _feedbackId;
	NSString* _pageID;
	FBMemComment* _comment;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAuthorName:(id)arg1 snippetText:(id)arg2 userSession:(id)arg3 feedbackId:(id)arg4 comment:(id)arg5 pageID:(id)arg6 ;
-(BOOL)fb_hidesTabBar;
-(void)configureWithAuthor:(id)arg1 snippetText:(id)arg2 ;
-(void)sendButtonTapped:(id)arg1 ;
-(void)_onSendSuccess;
-(void)_onSendError;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)cancelButtonTapped:(id)arg1 ;
@end

