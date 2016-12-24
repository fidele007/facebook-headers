/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKComponentController.h>
#import <Facebook/FBInspirationTextOnAssetsUpdateDelegate.h>

@class NSString;

@interface FBInspirationTextOnAssetsViewComponentController : CKComponentController <FBInspirationTextOnAssetsUpdateDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didMount;
-(void)didRemount;
-(void)didFinishEditingThroughGesture:(BOOL)arg1 ;
-(void)didTapTextToStartEditing;
-(void)updateOverlayTextPosition:(CGPoint)arg1 translation:(CGPoint)arg2 rotation:(double)arg3 scale:(double)arg4 ;
-(void)_keyboardWillShowWithNotification:(id)arg1 ;
-(void)_keyboardWillHideWithNotification:(id)arg1 ;
-(id)textOnAssetsView;
-(void)_updateModelWithAnalyticsEvent:(id)arg1 textContext:(id)arg2 ;
-(void)dealloc;
@end

