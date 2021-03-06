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

@interface FBReactionSettingsPlainTextCell : UITableViewCell {

	FBRichTextView* _messageView;
	UIView* _borderBottom;
	UIEdgeInsets _contentInsets;
	BOOL _checked;
	BOOL _bottomBorderFullWidth;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) BOOL checked;                            //@synthesize checked=_checked - In the implementation block
@property (assign,nonatomic) BOOL bottomBorderFullWidth;              //@synthesize bottomBorderFullWidth=_bottomBorderFullWidth - In the implementation block
-(BOOL)bottomBorderFullWidth;
-(void)setBottomBorderFullWidth:(BOOL)arg1 ;
-(id)initWithContentInsets:(UIEdgeInsets)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(BOOL)checked;
@end

