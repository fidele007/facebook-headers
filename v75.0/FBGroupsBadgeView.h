/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSString;

@interface FBGroupsBadgeView : UIView {

	UILabel* _badgeLabel;
	UIImageView* _badgeBackground;
	unsigned long long _badgeViewStyle;
	double _labelMinPadding;
	double _circleSize;
	double _maxSize;
	long long _badgeCount;
	long long _maxBadgeCount;

}

@property (nonatomic,copy,readonly) NSString * text; 
@property (assign,nonatomic) long long badgeCount;                 //@synthesize badgeCount=_badgeCount - In the implementation block
@property (assign,nonatomic) long long maxBadgeCount;              //@synthesize maxBadgeCount=_maxBadgeCount - In the implementation block
+(id)landingBadgeImage;
+(id)groupBadgeImage;
-(void)setMaxBadgeCount:(long long)arg1 ;
-(void)showAnimated:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)hideAnimated:(BOOL)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(long long)maxBadgeCount;
-(void)setHidden:(BOOL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(NSString *)text;
-(void)setBadgeCount:(long long)arg1 ;
-(long long)badgeCount;
@end

