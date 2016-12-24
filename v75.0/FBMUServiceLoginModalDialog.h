/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBModalDialogViewDelegate.h>

@protocol FBMUServiceLoginModalDialogDelegate;
@class FBMusicApplication, FBUserSession, FBModalDialogViewController, NSString;

@interface FBMUServiceLoginModalDialog : NSObject <FBModalDialogViewDelegate> {

	FBMusicApplication* _application;
	FBUserSession* _session;
	id<FBMUServiceLoginModalDialogDelegate> _delegate;
	FBModalDialogViewController* _modalDialogViewController;

}

@property (nonatomic,retain) FBModalDialogViewController * modalDialogViewController;              //@synthesize modalDialogViewController=_modalDialogViewController - In the implementation block
@property (assign,nonatomic,__weak) id<FBMUServiceLoginModalDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)modalDialogView:(id)arg1 didSelectPrimaryButton:(id)arg2 ;
-(void)modalDialogView:(id)arg1 didSelectSecondaryButton:(id)arg2 ;
-(id)initWithApplication:(id)arg1 session:(id)arg2 ;
-(void)presentModalDialogInView:(id)arg1 ;
-(void)_handleButtonSelection:(BOOL)arg1 ;
-(FBModalDialogViewController *)modalDialogViewController;
-(void)setModalDialogViewController:(FBModalDialogViewController *)arg1 ;
-(void)setDelegate:(id<FBMUServiceLoginModalDialogDelegate>)arg1 ;
-(id<FBMUServiceLoginModalDialogDelegate>)delegate;
@end
