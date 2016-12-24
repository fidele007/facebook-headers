/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBFaceboxShimmerView;

@interface FBFaceboxView : UIView {

	UIImageView* _imageView;
	FBFaceboxShimmerView* _shimmerView;
	CGRect _faceRect;

}

@property (assign,nonatomic) CGRect faceRect;              //@synthesize faceRect=_faceRect - In the implementation block
-(id)initWithFaceRect:(CGRect)arg1 withShimmer:(BOOL)arg2 ;
-(void)animateThinkingFaceBox;
-(void)stopAnimateThinkingFaceBox;
-(void)shrinkOutAnimationWithCompletion:(/*^block*/id)arg1 ;
-(CGRect)faceRect;
-(void)setFaceRect:(CGRect)arg1 ;
-(void)layoutSubviews;
@end
