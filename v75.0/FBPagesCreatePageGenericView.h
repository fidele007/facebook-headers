/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, FBWebImageView;

@interface FBPagesCreatePageGenericView : UIView {

	UILabel* _title;
	UILabel* _subtitle;
	FBWebImageView* _backgroundImage;

}
-(id)initWithFrame:(CGRect)arg1 title:(id)arg2 subtitle:(id)arg3 background:(id)arg4 ;
-(void)_configureViewsWithTitle:(id)arg1 subtitle:(id)arg2 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

