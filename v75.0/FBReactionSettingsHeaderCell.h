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

@interface FBReactionSettingsHeaderCell : UITableViewCell {

	FBRichTextView* _messageView;
	UIView* _borderBottom;
	UIEdgeInsets _contentInsets;
	NSString* _titleText;

}

@property (nonatomic,copy) NSString * titleText;              //@synthesize titleText=_titleText - In the implementation block
-(id)initWithContentInsets:(UIEdgeInsets)arg1 reuseIdentifier:(id)arg2 ;
-(void)layoutSubviews;
-(void)setTitleText:(NSString *)arg1 ;
-(NSString *)titleText;
@end

