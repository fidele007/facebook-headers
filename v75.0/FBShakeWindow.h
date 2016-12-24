/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIWindow.h>
#import <UIKit/UIActionSheetDelegate.h>

@class FBShakeWindowEventListenerAnnouncer, UIViewController, NSString;

@interface FBShakeWindow : UIWindow <UIActionSheetDelegate> {

	BOOL _keyboardIsShown;
	CGSize _size;
	BOOL _editing;
	BOOL _shakeToReportIsEnabled;
	BOOL _shouldShowOwlNux;
	FBShakeWindowEventListenerAnnouncer* _eventsAnnouncer;
	UIViewController* _topMostViewController;

}

@property (nonatomic,readonly) FBShakeWindowEventListenerAnnouncer * eventsAnnouncer;              //@synthesize eventsAnnouncer=_eventsAnnouncer - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * topMostViewController;                      //@synthesize topMostViewController=_topMostViewController - In the implementation block
@property (assign,nonatomic) BOOL editing;                                                         //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL shakeToReportIsEnabled;                                          //@synthesize shakeToReportIsEnabled=_shakeToReportIsEnabled - In the implementation block
@property (assign,nonatomic) BOOL shouldShowOwlNux;                                                //@synthesize shouldShowOwlNux=_shouldShowOwlNux - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBShakeWindowEventListenerAnnouncer *)eventsAnnouncer;
-(BOOL)shakeToReportIsEnabled;
-(void)setShakeToReportIsEnabled:(BOOL)arg1 ;
-(BOOL)shouldShowOwlNux;
-(void)setShouldShowOwlNux:(BOOL)arg1 ;
-(void)didShowKeyboard;
-(void)didHideKeyboard;
-(UIViewController *)topMostViewController;
-(BOOL)canUndoTyping;
-(void)willReportBug;
-(void)setTopMostViewController:(UIViewController *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)sendEvent:(id)arg1 ;
-(void)motionEnded:(long long)arg1 withEvent:(id)arg2 ;
-(BOOL)editing;
-(void)setEditing:(BOOL)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end
