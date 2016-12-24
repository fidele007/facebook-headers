/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBBrowserFooterView.h>
#import <Facebook/FBUFIButtonsComponentViewDelegate.h>

@class FBBrowserLayoutConfig, UIView, NSString;

@interface FBBrowserUFIFooterView : FBBrowserFooterView <FBUFIButtonsComponentViewDelegate> {

	FBBrowserLayoutConfig* _layoutConfig;
	UIView* _UFIView;
	UIView* _dividerLine;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)ufiButtonsComponentViewDidTapLike:(id)arg1 ;
-(void)ufiButtonsComponentViewDidTapComment:(id)arg1 popoverOrigin:(CGPoint)arg2 shouldShowKeyboard:(BOOL)arg3 ;
-(void)ufiButtonsComponentViewDidTapShare:(id)arg1 popoverOrigin:(CGPoint)arg2 ;
-(id)initWithLayoutConfig:(id)arg1 feedback:(id)arg2 toolbox:(id)arg3 ;
-(CGSize)sizeThatFits:(CGSize)arg1 chromeState:(double)arg2 ;
-(void)layoutSubviews;
@end
