/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, FBFadeInPhotoView, CAShapeLayer, CAGradientLayer, FBRichTextView;

@interface FBReactionSingleLargePhotoView : UIControl {

	UIView* _borderView;
	FBFadeInPhotoView* _photoView;
	CAShapeLayer* _backgroundMaskLayer;
	CAGradientLayer* _gradientLayer;
	FBRichTextView* _timeStamp;
	FBRichTextView* _messageLabel;
	FBRichTextView* _nameLabel;
	double _maxHeightCappedRatio;

}

@property (assign,nonatomic) double maxHeightCappedRatio;              //@synthesize maxHeightCappedRatio=_maxHeightCappedRatio - In the implementation block
-(unsigned long long)displayedImageFlag;
-(id)initWithFrame:(CGRect)arg1 photo:(id)arg2 name:(id)arg3 message:(id)arg4 showTimestamp:(BOOL)arg5 roundCorners:(BOOL)arg6 session:(id)arg7 hasTopBorder:(BOOL)arg8 ;
-(void)setMaxHeightCappedRatio:(double)arg1 ;
-(double)maxHeightCappedRatio;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)photoView;
@end

