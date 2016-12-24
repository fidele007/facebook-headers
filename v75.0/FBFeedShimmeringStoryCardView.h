/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBFeedShimmeringStoryView, UIImageView;

@interface FBFeedShimmeringStoryCardView : UIView {

	FBFeedShimmeringStoryView* _shimmeringView;
	BOOL _isCardlessUI;
	UIImageView* _backgroundView;
	unsigned long long _style;

}

@property (assign,getter=isShimmering,nonatomic) BOOL shimmering; 
@property (assign,nonatomic) unsigned long long style;                         //@synthesize style=_style - In the implementation block
+(double)recommendedHeightForStyle:(unsigned long long)arg1 ;
+(double)recommendedHeight;
-(void)setShimmering:(BOOL)arg1 ;
-(BOOL)isShimmering;
-(UIEdgeInsets)_storyInsets;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
@end
