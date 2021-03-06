/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol FBLogTailing;
@class UITextView;

@interface FBLogOutputViewController : UIViewController {

	UITextView* _textView;
	id<FBLogTailing> _log;
	unsigned long long _scrollPosition;

}

@property (assign,nonatomic) unsigned long long scrollPosition;              //@synthesize scrollPosition=_scrollPosition - In the implementation block
-(id)analyticsModule;
-(BOOL)fb_showAuxiliaryViewController;
-(id)initWithTitle:(id)arg1 logTailing:(id)arg2 scrollPosition:(unsigned long long)arg3 ;
-(unsigned long long)scrollPosition;
-(void)setScrollPosition:(unsigned long long)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

