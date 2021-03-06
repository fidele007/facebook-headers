/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MNLocationPickerMapGestureRecognizerDelegate;
@class UIPanGestureRecognizer, UITapGestureRecognizer, UIPinchGestureRecognizer, NSString;

@interface MNLocationPickerMapGestureRecognizer : NSObject <UIGestureRecognizerDelegate> {

	UIPanGestureRecognizer* _panGestureRecognizer;
	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UITapGestureRecognizer* _doubleTapGestureRecognizer;
	UITapGestureRecognizer* _twoFingerTapGestureRecognizer;
	id<MNLocationPickerMapGestureRecognizerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNLocationPickerMapGestureRecognizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleTwoFingerTapGesture:(id)arg1 ;
-(void)setDelegate:(id<MNLocationPickerMapGestureRecognizerDelegate>)arg1 ;
-(void)dealloc;
-(id<MNLocationPickerMapGestureRecognizerDelegate>)delegate;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(id)initWithMapView:(id)arg1 ;
-(void)_handleDoubleTapGesture:(id)arg1 ;
-(void)_handlePinchGesture:(id)arg1 ;
@end

