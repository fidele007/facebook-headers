/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class FBPaymentsHorizontalSeparatorView;

@interface FBPaymentsCheckoutConfirmationActionTableViewCell : UITableViewCell {

	FBPaymentsHorizontalSeparatorView* _topSeparatorView;
	FBPaymentsHorizontalSeparatorView* _bottomSeparatorView;
	unsigned long long _separatorMask;

}

@property (assign,nonatomic) unsigned long long separatorMask;              //@synthesize separatorMask=_separatorMask - In the implementation block
-(void)configureWithConfirmationAction:(id)arg1 checkoutResponse:(id)arg2 isPrimaryAction:(BOOL)arg3 ;
-(void)setSeparatorMask:(unsigned long long)arg1 ;
-(unsigned long long)separatorMask;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
