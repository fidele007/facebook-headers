/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBFacecastCameraPointOfInterestView : UIView {

	UIView* _outerRing;
	UIView* _outerContentRing;
	UIView* _outerShadowRing;
	UIView* _innerRing;

}

@property (nonatomic,retain) UIView * outerRing;                     //@synthesize outerRing=_outerRing - In the implementation block
@property (nonatomic,retain) UIView * outerContentRing;              //@synthesize outerContentRing=_outerContentRing - In the implementation block
@property (nonatomic,retain) UIView * outerShadowRing;               //@synthesize outerShadowRing=_outerShadowRing - In the implementation block
@property (nonatomic,retain) UIView * innerRing;                     //@synthesize innerRing=_innerRing - In the implementation block
-(UIView *)outerRing;
-(UIView *)innerRing;
-(void)showWithEntranceAnimation:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setOuterRing:(UIView *)arg1 ;
-(UIView *)outerContentRing;
-(void)setOuterContentRing:(UIView *)arg1 ;
-(UIView *)outerShadowRing;
-(void)setOuterShadowRing:(UIView *)arg1 ;
-(void)setInnerRing:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

