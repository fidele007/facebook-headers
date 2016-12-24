/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class CKTextComponentViewControlTracker, CKTextComponentLayer, CKTextKitRenderer;

@interface CKTextComponentView : UIControl {

	CKTextComponentViewControlTracker* _controlTracker;

}

@property (nonatomic,readonly) CKTextComponentLayer * textLayer; 
@property (nonatomic,readonly) CKTextComponentViewControlTracker * controlTracker; 
@property (nonatomic,retain) CKTextKitRenderer * renderer; 
+(Class)layerClass;
-(CKTextComponentViewControlTracker *)controlTracker;
-(CKTextComponentLayer *)textLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)setRenderer:(CKTextKitRenderer *)arg1 ;
-(CKTextKitRenderer *)renderer;
@end

