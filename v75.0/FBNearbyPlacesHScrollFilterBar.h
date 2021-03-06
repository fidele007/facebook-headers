/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, FBShimmeringView, NSArray, UICollectionView;

@interface FBNearbyPlacesHScrollFilterBar : UIView {

	UIView* _backgroundView;
	UIView* _bottomBorder;
	FBShimmeringView* _inProgressContainerView;
	NSArray* _inProgressPills;
	UICollectionView* _collectionView;

}

@property (nonatomic,readonly) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 solidBackground:(BOOL)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UICollectionView *)collectionView;
-(void)setMode:(unsigned long long)arg1 ;
@end

