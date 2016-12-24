/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, CAShapeLayer, UILabel, NSString;

@interface FBStorylineRenderingIndicatorView : UIView {

	UIView* _renderingPreviewCoverView;
	UIView* _progressBarView;
	CAShapeLayer* _barLayer;
	UILabel* _renderingHintTextLabel;
	NSString* _hintText;
	double _progress;
	CGRect _playerViewFrame;

}

@property (nonatomic,copy) NSString * hintText;                   //@synthesize hintText=_hintText - In the implementation block
@property (assign,nonatomic) double progress;                     //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) CGRect playerViewFrame;              //@synthesize playerViewFrame=_playerViewFrame - In the implementation block
-(CGRect)playerViewFrame;
-(void)setPlayerViewFrame:(CGRect)arg1 ;
-(NSString *)hintText;
-(void)show;
-(id)init;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(void)dismiss;
-(double)progress;
-(void)setHintText:(NSString *)arg1 ;
@end
