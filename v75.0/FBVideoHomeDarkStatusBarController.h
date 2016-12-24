/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBStatusBarTrackingWindow;

@interface FBVideoHomeDarkStatusBarController : NSObject {

	FBStatusBarTrackingWindow* _statusBarOverlayWindow;

}

@property (nonatomic,readonly) FBStatusBarTrackingWindow * statusBarOverlayWindow;              //@synthesize statusBarOverlayWindow=_statusBarOverlayWindow - In the implementation block
-(id)buildDebugInfo;
-(void)stopListeningForStatusBarFrameChange;
-(void)_didChangeStatusBarFrame:(id)arg1 ;
-(void)updateStatusBarOverlayWindowHidden:(BOOL)arg1 ;
-(void)listenForStatusBarFrameChange;
-(FBStatusBarTrackingWindow *)statusBarOverlayWindow;
-(void)dealloc;
-(id)init;
@end
