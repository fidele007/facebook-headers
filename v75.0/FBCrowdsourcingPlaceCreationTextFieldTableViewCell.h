/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBCrowdsourcingNewPlaceCreationTextFieldTableViewCellDelegate;
@class FBFourRoundedCornerView, UITextField, UIButton;

@interface FBCrowdsourcingPlaceCreationTextFieldTableViewCell : UITableViewCell {

	FBFourRoundedCornerView* _corneredMaskView;
	unsigned long long _cellStyle;
	UITextField* _textField;
	UIButton* _rightImageButton;
	id<FBCrowdsourcingNewPlaceCreationTextFieldTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long cellStyle;                                                            //@synthesize cellStyle=_cellStyle - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                                               //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIButton * rightImageButton;                                                           //@synthesize rightImageButton=_rightImageButton - In the implementation block
@property (assign,nonatomic) id<FBCrowdsourcingNewPlaceCreationTextFieldTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIButton *)rightImageButton;
-(void)_textFieldTextChanged;
-(void)setDelegate:(id<FBCrowdsourcingNewPlaceCreationTextFieldTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBCrowdsourcingNewPlaceCreationTextFieldTableViewCellDelegate>)delegate;
-(void)prepareForReuse;
-(UITextField *)textField;
-(unsigned long long)cellStyle;
-(void)setCellStyle:(unsigned long long)arg1 ;
@end

