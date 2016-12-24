/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow;

@interface FBStatusBarWindowTracker : NSObject {

	BOOL _tracking;
	UIWindow* _statusBarWindow;

}

@property (assign,getter=isTracking,nonatomic) BOOL tracking;              //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,retain) UIWindow * statusBarWindow;                   //@synthesize statusBarWindow=_statusBarWindow - In the implementation block
+(id)sharedTracker;
-(void)startTracking;
-(void)_windowDidBecomeVisible:(id)arg1 ;
-(void)dealloc;
-(UIWindow *)statusBarWindow;
-(BOOL)isTracking;
-(void)setTracking:(BOOL)arg1 ;
-(void)setStatusBarWindow:(UIWindow *)arg1 ;
-(void)stopTracking;
@end
