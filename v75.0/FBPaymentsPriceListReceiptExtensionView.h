/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBPaymentsReceiptExtensionView.h>

@protocol FBPaymentsReceiptExtensionViewDelegate;
@class FBPaymentsPriceListView, UIView, NSString;

@interface FBPaymentsPriceListReceiptExtensionView : UIView <FBPaymentsReceiptExtensionView> {

	FBPaymentsPriceListView* _priceListView;
	FBPaymentsPriceListView* _itemizedPriceListView;
	UIView* _itemizedPriceListViewBottomSeparatorView;
	id _viewModel;
	id<FBPaymentsReceiptExtensionViewDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel;                                                              //@synthesize viewModel=_viewModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsReceiptExtensionViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(void)_updateViewsLayout;
-(id)_viewsLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBPaymentsReceiptExtensionViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentsReceiptExtensionViewDelegate>)delegate;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

