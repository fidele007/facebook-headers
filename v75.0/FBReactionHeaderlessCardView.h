/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UIView;

@interface FBReactionHeaderlessCardView : UIView {

	UIImageView* _backgroundImageView;
	UIView* _footerView;
	UIEdgeInsets _cardInsets;

}
-(id)initWithFrame:(CGRect)arg1 footerView:(id)arg2 backgroundImage:(id)arg3 cardInsets:(UIEdgeInsets)arg4 ;
-(void)fb_asyncTransactionContainerStateDidChange;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isAccessibilityElement;
@end

