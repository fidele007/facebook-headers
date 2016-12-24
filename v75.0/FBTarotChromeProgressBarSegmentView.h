/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface FBTarotChromeProgressBarSegmentView : UIView {

	CAShapeLayer* _backgroundBarLayer;
	CAShapeLayer* _foregroundBarMaskLayer;
	CAShapeLayer* _foregroundBarLayer;

}

@property (nonatomic,readonly) CAShapeLayer * backgroundBarLayer;                  //@synthesize backgroundBarLayer=_backgroundBarLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * foregroundBarMaskLayer;              //@synthesize foregroundBarMaskLayer=_foregroundBarMaskLayer - In the implementation block
@property (nonatomic,readonly) CAShapeLayer * foregroundBarLayer;                  //@synthesize foregroundBarLayer=_foregroundBarLayer - In the implementation block
@property (assign,nonatomic) double progress; 
-(CAShapeLayer *)foregroundBarLayer;
-(CAShapeLayer *)backgroundBarLayer;
-(CAShapeLayer *)foregroundBarMaskLayer;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setProgress:(double)arg1 ;
-(double)progress;
@end

