/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class UINavigationBar, UINavigationItem, FBTextView, NSString;

@interface FBCAUSurveyUIFeedbackViewController : UIViewController <UITextViewDelegate> {

	UINavigationBar* _navigationBar;
	UINavigationItem* _navigationItem;
	FBTextView* _textView;
	NSString* _questionText;
	/*^block*/id _cancelButtonHandler;
	/*^block*/id _sendButtonHandler;

}

@property (nonatomic,copy) id cancelButtonHandler;                  //@synthesize cancelButtonHandler=_cancelButtonHandler - In the implementation block
@property (nonatomic,copy) id sendButtonHandler;                    //@synthesize sendButtonHandler=_sendButtonHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithQuestionText:(id)arg1 ;
-(void)setCancelButtonHandler:(id)arg1 ;
-(void)setSendButtonHandler:(id)arg1 ;
-(void)_cancelFeedbackAction:(id)arg1 ;
-(void)_sendFeedbackAction:(id)arg1 ;
-(void)updateSubmitButtonIsEnabled;
-(id)cancelButtonHandler;
-(id)sendButtonHandler;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)textViewDidChange:(id)arg1 ;
@end

