/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBFourRoundedCornerView.h>

@class UIView;

@interface FBCalendarHighlightRangeView : FBFourRoundedCornerView {

	UIView* _thumbView;
	long long _thumbPosition;

}

@property (nonatomic,retain) UIView * thumbView;                   //@synthesize thumbView=_thumbView - In the implementation block
@property (assign,nonatomic) long long thumbPosition;              //@synthesize thumbPosition=_thumbPosition - In the implementation block
-(id)initWithBackgroundColor:(id)arg1 cornerColor:(id)arg2 accentColor:(id)arg3 ;
-(UIView *)thumbView;
-(void)setThumbPosition:(long long)arg1 ;
-(long long)thumbPosition;
-(void)setThumbView:(UIView *)arg1 ;
-(void)layoutSubviews;
@end
