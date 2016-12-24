/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIControl.h>

@class UIView, FBRichTextView;

@interface FBReactionLeftAlignDetailFooterView : UIControl {

	UIView* _topBorderView;
	UIView* _chevronView;
	FBRichTextView* _textView;
	FBRichTextView* _detailTextView;
	double _horizontalMargin;

}
-(id)initWithHorizontalMargin:(double)arg1 chevronView:(id)arg2 text:(id)arg3 detailText:(id)arg4 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTextColor:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setDetailTextColor:(id)arg1 ;
@end

