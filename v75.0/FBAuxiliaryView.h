/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <Facebook/FBAccessibilityInvalidationEventsListener.h>
#import <Facebook/FBUIConfigurable.h>
#import <Facebook/FBUIThreadSafeSizable.h>

@class UIImageView, UILabel, NSString;

@interface FBAuxiliaryView : UIControl <UIGestureRecognizerDelegate, FBAccessibilityInvalidationEventsListener, FBUIConfigurable, FBUIThreadSafeSizable> {

	UIImageView* _glyphView;
	UILabel* _textLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(id)defaultFBUIConfig;
+(id)newWithText:(id)arg1 ;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(id)newWithGlyphName:(unsigned long long)arg1 glyphSize:(unsigned long long)arg2 text:(id)arg3 ;
+(FBAuxiliaryViewLayout)_layoutForConfig:(id)arg1 constrainedToSize:(CGSize)arg2 ;
+(id)newWithGlyphColor:(id)arg1 text:(id)arg2 ;
+(id)newWithGlyphName:(unsigned long long)arg1 glyphSize:(unsigned long long)arg2 ;
+(id)newWithGlyphName:(unsigned long long)arg1 glyphSize:(unsigned long long)arg2 glyphColor:(id)arg3 ;
+(id)newWithGlyphName:(unsigned long long)arg1 glyphSize:(unsigned long long)arg2 glyphColor:(id)arg3 text:(id)arg4 ;
+(id)new;
-(void)didReceiveAccessibilityInvalidation;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(void)_setUpGlyphView;
-(void)_animateSubviewsAlpha:(double)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(id)_init;
-(id)config;
-(void)applyConfig:(id)arg1 ;
@end
