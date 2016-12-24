/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CADisplayLink, UIScrollView, NSTimer;

@interface FBAutoScroller : NSObject {

	CADisplayLink* _displayLink;
	double _expectedOffsetY;
	double _expectedOffsetYMax;
	UIScrollView* _scrollView;
	BOOL _scrollViewDelegateRespondsToScrollViewDidScroll;
	NSTimer* _restartAutoScrolling;

}
+(BOOL)enabled;
-(void)startIfEnabled;
-(void)_startAutoScroll;
-(void)_stopAutoScroll;
-(void)displayLinkDidFire:(id)arg1 ;
-(double)_currentOffsetYMax;
-(void)dealloc;
-(id)initWithScrollView:(id)arg1 ;
@end
