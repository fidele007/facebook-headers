/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, UIView, UIControl;

@interface FBPageNuxView : UIView {

	FBRichTextView* _titleLabel;
	FBRichTextView* _descriptionLabel;
	UIView* _nuxImageView;
	FBRichTextView* _actionLabel;
	UIControl* _closeButton;

}

@property (nonatomic,readonly) UIControl * closeButton;              //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,readonly) UIControl * actionLabel;              //@synthesize actionLabel=_actionLabel - In the implementation block
-(id)initWithTitle:(id)arg1 descriptionText:(id)arg2 mainActionText:(id)arg3 imageBackgroundColor:(id)arg4 networkImage:(id)arg5 imageDownloader:(id)arg6 ;
-(id)_initWithTitle:(id)arg1 descriptionText:(id)arg2 mainActionText:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIControl *)actionLabel;
-(UIControl *)closeButton;
@end

