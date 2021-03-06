/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, FBScrollInsetTrackingView;

@interface FBPhotosGridContainerView : UIView {

	UIImageView* _backgroundImageView;
	FBScrollInsetTrackingView* _contentView;
	BOOL _embeddedInCard;

}

@property (assign,nonatomic) double topLayoutGuideLength; 
@property (assign,nonatomic) double bottomLayoutGuideLength; 
@property (nonatomic,readonly) BOOL embeddedInCard;                       //@synthesize embeddedInCard=_embeddedInCard - In the implementation block
-(void)setBottomLayoutGuideLength:(double)arg1 ;
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(double)bottomLayoutGuideLength;
-(id)initWithContentView:(id)arg1 embedding:(unsigned long long)arg2 ;
-(BOOL)embeddedInCard;
-(void)layoutSubviews;
@end

