/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, FBCoverPhotoCropRectView;

@interface FBCoverPhotoPositioningView : UIView {

	CGPoint _lastLocation;
	double _aspectRatio;
	UIImageView* _imageView;
	CGRect _defaultImageRect;
	FBCoverPhotoCropRectView* _cropRectView;
	CGPoint _focus;

}

@property (assign,nonatomic) CGPoint focus;              //@synthesize focus=_focus - In the implementation block
-(id)initWithFrame:(CGRect)arg1 image:(id)arg2 aspectRatio:(double)arg3 ;
-(void)_updateImagePositioning;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(CGPoint)focus;
-(void)setFocus:(CGPoint)arg1 ;
@end

