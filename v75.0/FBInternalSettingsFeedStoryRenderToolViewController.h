/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBFeedZombieToMemModelConverterDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/CKComponentProvider.h>

@class FBFeedToolbox, FBFeedZombieToMemModelConverter, UIScrollView, UILabel, UIButton, UIActivityIndicatorView, UITextView, CKComponentHostingView, NSString;

@interface FBInternalSettingsFeedStoryRenderToolViewController : UIViewController <FBFeedZombieToMemModelConverterDelegate, UITextViewDelegate, UIAlertViewDelegate, CKComponentProvider> {

	FBFeedToolbox* _toolbox;
	FBFeedZombieToMemModelConverter* _converter;
	UIScrollView* _contentScrollView;
	UILabel* _messageLabel;
	UIButton* _generateButton;
	UIActivityIndicatorView* _activityIndicator;
	UITextView* _inputZombieTextView;
	CKComponentHostingView* _feedComponentView;
	NSString* _oldSandbox;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(BOOL)fb_showAuxiliaryViewController;
-(void)didTapRender;
-(void)restoreSandbox;
-(void)requestZombie;
-(void)updateStateTo:(unsigned long long)arg1 ;
-(void)configureSandbox;
-(void)zombieToMemModelConverter:(id)arg1 didGenerateModel:(id)arg2 fromZombie:(id)arg3 withErrorMessage:(id)arg4 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end

