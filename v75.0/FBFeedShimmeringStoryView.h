/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBShimmeringView, UIImageView;

@interface FBFeedShimmeringStoryView : UIView {

	FBShimmeringView* _shimmeringView;
	UIImageView* _shimmeringImageView;
	UIImageView* _baseImageView;
	unsigned long long _style;
	CGPoint _contentOffset;

}

@property (assign,getter=isShimmering,nonatomic) BOOL shimmering; 
@property (assign,nonatomic) unsigned long long style;                         //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) CGPoint contentOffset;                            //@synthesize contentOffset=_contentOffset - In the implementation block
+(CGPoint)_contentOffsetForStyle:(unsigned long long)arg1 ;
-(void)setShimmering:(BOOL)arg1 ;
-(BOOL)isShimmering;
-(void)_setupShimmer;
-(id)_baseImageForStyle:(unsigned long long)arg1 ;
-(id)_shimmeringImageForStyle:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGPoint)contentOffset;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
@end

