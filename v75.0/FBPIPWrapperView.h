/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIView;

@interface FBPIPWrapperView : UIView {

	UIColor* _originalPIPViewBackgroundColor;
	CGRect _customScreenFrame;
	CGSize _lastRequestedSize;
	BOOL _useSmartSizing;
	UIView* _PIPView;

}

@property (nonatomic,readonly) UIView * PIPView;              //@synthesize PIPView=_PIPView - In the implementation block
+(id)sharedInstance;
-(CGSize)_screenSize;
-(void)updatePIPView:(id)arg1 ;
-(CGPoint)startingPointForPresentation;
-(CGPoint)closeAnchor;
-(void)updateSize:(CGSize)arg1 smartSizing:(BOOL)arg2 ;
-(void)updateUsableScreenFrame:(CGRect)arg1 ;
-(UIView *)PIPView;
-(CGPoint)_defaultAnchor;
-(id)init;
-(void)layoutSubviews;
@end

