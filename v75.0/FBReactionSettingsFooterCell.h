/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class FBRichTextView, UIView, NSString;

@interface FBReactionSettingsFooterCell : UITableViewCell {

	FBRichTextView* _messageView;
	UIView* _borderBottom;
	UIView* _chevron;
	UIEdgeInsets _contentInsets;
	BOOL _bottomBorderIsFullWidth;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL bottomBorderIsFullWidth;              //@synthesize bottomBorderIsFullWidth=_bottomBorderIsFullWidth - In the implementation block
-(id)initWithContentInsets:(UIEdgeInsets)arg1 reuseIdentifier:(id)arg2 session:(id)arg3 ;
-(void)setBottomBorderIsFullWidth:(BOOL)arg1 ;
-(BOOL)bottomBorderIsFullWidth;
-(void)layoutSubviews;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

