/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIButton.h>

@class UIView;

@interface FBNearbyPlacesResultBaseActionButton : UIButton {

	UIView* _leftBorder;
	BOOL _showLeftBorder;
	unsigned long long _actionButtonType;
	double _imageSize;

}

@property (assign,nonatomic) BOOL showLeftBorder;                                //@synthesize showLeftBorder=_showLeftBorder - In the implementation block
@property (nonatomic,readonly) unsigned long long actionButtonType;              //@synthesize actionButtonType=_actionButtonType - In the implementation block
@property (assign,nonatomic) double imageSize;                                   //@synthesize imageSize=_imageSize - In the implementation block
-(unsigned long long)actionButtonType;
-(void)_updateSelectedState:(BOOL)arg1 ;
-(BOOL)showLeftBorder;
-(id)initWithFrame:(CGRect)arg1 actionButtonType:(unsigned long long)arg2 ;
-(void)setShowLeftBorder:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(double)imageSize;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImageSize:(double)arg1 ;
@end

