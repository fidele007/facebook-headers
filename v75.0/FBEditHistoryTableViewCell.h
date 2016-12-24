/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, FBRichTextView, FBEditActionLayout, UIView;

@interface FBEditHistoryTableViewCell : UITableViewCell {

	UILabel* _timestampLabel;
	FBRichTextView* _messageLabel;
	FBEditActionLayout* _layout;
	UIView* _divider;

}

@property (nonatomic,retain) FBEditActionLayout * layout;                  //@synthesize layout=_layout - In the implementation block
@property (nonatomic,readonly) FBRichTextView * messageLabel;              //@synthesize messageLabel=_messageLabel - In the implementation block
@property (nonatomic,readonly) UIView * divider;                           //@synthesize divider=_divider - In the implementation block
+(id)reuseIdentifier;
-(UIView *)divider;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id)accessibilityLabel;
-(FBEditActionLayout *)layout;
-(FBRichTextView *)messageLabel;
-(void)setLayout:(FBEditActionLayout *)arg1 ;
@end
