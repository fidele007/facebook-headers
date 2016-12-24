/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface FBReactionFixedHeightHeroImageAttachmentView : UIView {

	UIView* _highlightableView;
	UIView* _footerContentView;
	UIView* _bleedView;
	UIView* _cardImageView;
	UIView* _headerView;
	UIView* _heroImageView;
	UIView* _footerView;

}

@property (nonatomic,readonly) UIView * headerView;                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,readonly) UIView * heroImageView;              //@synthesize heroImageView=_heroImageView - In the implementation block
@property (nonatomic,readonly) UIView * footerView;                 //@synthesize footerView=_footerView - In the implementation block
-(id)initWithSession:(id)arg1 config:(id)arg2 ;
-(UIView *)heroImageView;
-(double)_coverPhotoHeightFromWidth:(double)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIView *)headerView;
-(UIView *)footerView;
@end
