/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@class FBCameraModifiedTouchTrackingButtonListenerAnnouncer;

@interface FBCameraModifiedTouchTrackingButton : UIButton {

	FBCameraModifiedTouchTrackingButtonListenerAnnouncer* _announcer;
	double _boundsExtensionForTracking;

}

@property (assign,nonatomic) double boundsExtensionForTracking;              //@synthesize boundsExtensionForTracking=_boundsExtensionForTracking - In the implementation block
-(CGRect)_extendedBounds;
-(double)boundsExtensionForTracking;
-(void)setBoundsExtensionForTracking:(double)arg1 ;
-(void)addModifiedTouchTrackingButtonListener:(id)arg1 ;
-(void)removeModifiedTouchTrackingButtonListener:(id)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
@end
