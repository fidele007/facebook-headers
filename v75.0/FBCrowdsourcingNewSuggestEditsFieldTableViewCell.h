/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate;
@class CALayer, UITextField, UIImageView, UIButton, NSString;

@interface FBCrowdsourcingNewSuggestEditsFieldTableViewCell : UITableViewCell <UITextFieldDelegate> {

	CALayer* _topBorder;
	CALayer* _bottomBorder;
	BOOL _isFirstCell;
	BOOL _isLastCell;
	unsigned long long _rightButtonStyle;
	UITextField* _textField;
	UIImageView* _leftIconView;
	unsigned long long _section;
	UIButton* _rightButton;
	id<FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long rightButtonStyle;                                                       //@synthesize rightButtonStyle=_rightButtonStyle - In the implementation block
@property (nonatomic,readonly) UITextField * textField;                                                                 //@synthesize textField=_textField - In the implementation block
@property (nonatomic,readonly) UIImageView * leftIconView;                                                              //@synthesize leftIconView=_leftIconView - In the implementation block
@property (assign,nonatomic) BOOL isFirstCell;                                                                          //@synthesize isFirstCell=_isFirstCell - In the implementation block
@property (assign,nonatomic) BOOL isLastCell;                                                                           //@synthesize isLastCell=_isLastCell - In the implementation block
@property (assign,nonatomic) unsigned long long section;                                                                //@synthesize section=_section - In the implementation block
@property (nonatomic,retain) UIButton * rightButton;                                                                    //@synthesize rightButton=_rightButton - In the implementation block
@property (assign,nonatomic,__weak) id<FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isLastCell;
-(void)setIsLastCell:(BOOL)arg1 ;
-(void)setRightButtonStyle:(unsigned long long)arg1 ;
-(void)setIsFirstCell:(BOOL)arg1 ;
-(unsigned long long)rightButtonStyle;
-(UIImageView *)leftIconView;
-(void)setDelegate:(id<FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(id<FBCrowdsourcingNewSuggestEditsFieldTableViewCellDelegate>)delegate;
-(unsigned long long)section;
-(void)prepareForReuse;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(UITextField *)textField;
-(void)setSection:(unsigned long long)arg1 ;
-(void)setRightButton:(UIButton *)arg1 ;
-(UIButton *)rightButton;
-(BOOL)isFirstCell;
@end

