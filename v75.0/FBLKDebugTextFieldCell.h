/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UILabel, UITextField;

@interface FBLKDebugTextFieldCell : UITableViewCell {

	UILabel* _label;
	UITextField* _textField;

}

@property (nonatomic,readonly) UILabel * label;                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UITextField * textField;              //@synthesize textField=_textField - In the implementation block
-(id)initWithReuseIdentifier:(id)arg1 ;
-(void)prepareForReuse;
-(UILabel *)label;
-(UITextField *)textField;
@end

