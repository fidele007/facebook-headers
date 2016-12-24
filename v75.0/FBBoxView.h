/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBUIConfigurable.h>
#import <Facebook/FBUIThreadSafeSizable.h>

@class UIView, NSString;

@interface FBBoxView : UIView <FBUIConfigurable, FBUIThreadSafeSizable> {

	UIView* _topBorderView;
	UIView* _leftBorderView;
	UIView* _bottomBorderView;
	UIView* _rightBorderView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithConfig:(id)arg1 ;
+(id)defaultFBUIConfig;
+(CGSize)threadSafeSizeThatFits:(id)arg1 size:(CGSize)arg2 ;
+(FBBoxViewLayout)_layoutForConfig:(id)arg1 size:(CGSize)arg2 ;
-(void)oldConfig:(id)arg1 configDidChange:(id)arg2 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_init;
-(id)config;
-(void)applyConfig:(id)arg1 ;
@end
