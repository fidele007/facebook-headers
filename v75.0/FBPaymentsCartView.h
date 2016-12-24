/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIView;

@interface FBPaymentsCartView : UIView {

	UIView* _contentView;
	UIView* _cartItemsCollectionViewBottomSeparatorView;
	double _topLayoutGuideLength;
	UIView* _cartItemCollectionView;
	UIView* _invoiceSummaryView;
	UIView* _actionButtonView;

}

@property (assign,nonatomic) double topLayoutGuideLength;                  //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
@property (nonatomic,retain) UIView * cartItemCollectionView;              //@synthesize cartItemCollectionView=_cartItemCollectionView - In the implementation block
@property (nonatomic,retain) UIView * invoiceSummaryView;                  //@synthesize invoiceSummaryView=_invoiceSummaryView - In the implementation block
@property (nonatomic,retain) UIView * actionButtonView;                    //@synthesize actionButtonView=_actionButtonView - In the implementation block
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(void)_updateViewsLayout;
-(id)_viewsLayout;
-(void)setCartItemCollectionView:(UIView *)arg1 ;
-(void)setInvoiceSummaryView:(UIView *)arg1 ;
-(void)setActionButtonView:(UIView *)arg1 ;
-(UIView *)cartItemCollectionView;
-(UIView *)invoiceSummaryView;
-(UIView *)actionButtonView;
-(id)init;
-(void)layoutSubviews;
@end

