/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBMailShareSheetEmailNotSupportedViewDelegate;
@class UIButton, UILabel, UIImageView;

@interface FBMailShareSheetEmailNotSupportedView : UIView {

	id<FBMailShareSheetEmailNotSupportedViewDelegate> _delegate;
	UIButton* _closeButton;
	UILabel* _mailNotSupportedLabel;
	UIImageView* _mailNotSupportedImageView;

}
-(id)initWithFrame:(CGRect)arg1 delegate:(id)arg2 ;
-(void)_didTouchCloseButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
@end

