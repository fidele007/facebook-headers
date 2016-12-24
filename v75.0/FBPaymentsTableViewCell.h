/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <Facebook/FBPaymentsEdgeInsetsConfigurable.h>

@class UIView, NSString;

@interface FBPaymentsTableViewCell : UITableViewCell <FBPaymentsEdgeInsetsConfigurable> {

	long long _paymentsTableViewCellStyle;
	UIView* _customView;
	UIEdgeInsets _edgeInsets;

}

@property (assign,nonatomic) long long paymentsTableViewCellStyle;              //@synthesize paymentsTableViewCellStyle=_paymentsTableViewCellStyle - In the implementation block
@property (nonatomic,retain) UIView * customView;                               //@synthesize customView=_customView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                           //@synthesize edgeInsets=_edgeInsets - In the implementation block
+(double)heightWithStyle:(long long)arg1 ;
+(double)heightForCustomStyleWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(id)initWithPaymentsTableViewCellStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)_configureWithCurrentStyle;
-(void)_layoutWithCurrentStyle;
-(BOOL)_hasAccessoryViewOrHasNotNoneAccessoryType;
-(void)setPaymentsTableViewCellStyle:(long long)arg1 ;
-(long long)paymentsTableViewCellStyle;
-(void)layoutSubviews;
-(UIEdgeInsets)edgeInsets;
-(UIView *)customView;
-(void)setCustomView:(UIView *)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
@end

