/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIWindow, UIView, NSArray;

@interface _O_UIHover : NSObject {

	UIWindow* _window;
	UIView* _view;
	NSArray* _gestureRecognizers;
	double _timestamp;
	long long _phase;

}

@property (nonatomic,readonly) UIWindow * window;                         //@synthesize window=_window - In the implementation block
@property (nonatomic,readonly) UIView * view;                             //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) NSArray * gestureRecognizers;              //@synthesize gestureRecognizers=_gestureRecognizers - In the implementation block
@property (nonatomic,readonly) double timestamp;                          //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long phase;                           //@synthesize phase=_phase - In the implementation block
+(id)alloc;
-(UIWindow *)window;
-(UIView *)view;
-(double)timestamp;
-(long long)phase;
-(NSArray *)gestureRecognizers;
@end

