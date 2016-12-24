/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBBrowserExtensionAutofillScrollViewDelegate;
@class NSArray, UIScrollView, UIView, NSMutableArray, UIImageView;

@interface FBBrowserExtensionAutofillScrollView : UIView {

	id<FBBrowserExtensionAutofillScrollViewDelegate> _delegate;
	NSArray* _autofillGroups;
	UIScrollView* _scrollView;
	UIView* _topDivider;
	NSMutableArray* _buttonArray;
	NSMutableArray* _roundedCornerArray;
	UIImageView* _iconView;

}
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)_onButtonTapped:(id)arg1 ;
-(void)setAutofillGroups:(id)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_configureViews;
@end

