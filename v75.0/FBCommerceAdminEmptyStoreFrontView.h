/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UILabel, FBButton;

@interface FBCommerceAdminEmptyStoreFrontView : UIView {

	UIImageView* _emptyStoreImageView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	BOOL _commerceStoreAvailablity;
	FBButton* _addProductsButton;
	FBButton* _addShopButton;

}

@property (nonatomic,retain) FBButton * addProductsButton;              //@synthesize addProductsButton=_addProductsButton - In the implementation block
@property (nonatomic,retain) FBButton * addShopButton;                  //@synthesize addShopButton=_addShopButton - In the implementation block
-(double)_getTopMarginOffset;
-(void)setAddProductsButton:(FBButton *)arg1 ;
-(void)setAddShopButton:(FBButton *)arg1 ;
-(void)updateCommerceStoreAvailability:(BOOL)arg1 ;
-(id)initWithCommerceStoreAvailablity:(BOOL)arg1 ;
-(FBButton *)addProductsButton;
-(FBButton *)addShopButton;
-(void)layoutSubviews;
@end
