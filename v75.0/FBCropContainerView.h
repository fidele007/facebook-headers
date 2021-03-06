/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView, FBCropConstraintView;

@interface FBCropContainerView : UIView {

	BOOL _animating;
	UIImageView* _imageView;
	UIView* _checkView;
	FBCropConstraintView* _cropConstraintView;
	double _currentRotation;
	double _currentScale;
	double _currentXOffset;
	double _currentYOffset;
	CGRect _initialImageViewFrame;

}

@property (nonatomic,retain) UIImageView * imageView;                                //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIView * checkView;                                     //@synthesize checkView=_checkView - In the implementation block
@property (nonatomic,retain) FBCropConstraintView * cropConstraintView;              //@synthesize cropConstraintView=_cropConstraintView - In the implementation block
@property (nonatomic,readonly) CGRect initialImageViewFrame;                         //@synthesize initialImageViewFrame=_initialImageViewFrame - In the implementation block
@property (assign,nonatomic) double currentRotation;                                 //@synthesize currentRotation=_currentRotation - In the implementation block
@property (assign,nonatomic) double currentScale;                                    //@synthesize currentScale=_currentScale - In the implementation block
@property (assign,nonatomic) double currentXOffset;                                  //@synthesize currentXOffset=_currentXOffset - In the implementation block
@property (assign,nonatomic) double currentYOffset;                                  //@synthesize currentYOffset=_currentYOffset - In the implementation block
@property (assign,nonatomic) BOOL animating;                                         //@synthesize animating=_animating - In the implementation block
-(double)currentRotation;
-(void)setCurrentRotation:(double)arg1 ;
-(FBCropConstraintView *)cropConstraintView;
-(void)setCurrentXOffset:(double)arg1 ;
-(void)setCurrentYOffset:(double)arg1 ;
-(void)setCurrentScale:(double)arg1 ;
-(CGAffineTransform)getTotalTransform;
-(UIView *)checkView;
-(double)currentScale;
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 startingCropConfiguration:(id)arg3 userManipulableCropbox:(BOOL)arg4 shouldDrawInnerGrid:(BOOL)arg5 mediaPickerStyle:(unsigned long long)arg6 ;
-(void)setCheckView:(UIView *)arg1 ;
-(void)setCropConstraintView:(FBCropConstraintView *)arg1 ;
-(CGRect)initialImageViewFrame;
-(double)currentXOffset;
-(double)currentYOffset;
-(void)layoutSubviews;
-(UIImageView *)imageView;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(void)setImageView:(UIImageView *)arg1 ;
@end

