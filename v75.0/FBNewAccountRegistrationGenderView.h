/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBNewAccountRegistrationStepView.h>

@class UIButton, FBItemView;

@interface FBNewAccountRegistrationGenderView : FBNewAccountRegistrationStepView {

	UIButton* _buttonMale;
	UIButton* _buttonFemale;
	FBItemView* _itemViewMale;
	FBItemView* _itemViewFemale;
	BOOL _enableNewGenderUI;

}

@property (nonatomic,readonly) UIButton * buttonMale;                    //@synthesize buttonMale=_buttonMale - In the implementation block
@property (nonatomic,readonly) UIButton * buttonFemale;                  //@synthesize buttonFemale=_buttonFemale - In the implementation block
@property (nonatomic,readonly) FBItemView * itemViewMale;                //@synthesize itemViewMale=_itemViewMale - In the implementation block
@property (nonatomic,readonly) FBItemView * itemViewFemale;              //@synthesize itemViewFemale=_itemViewFemale - In the implementation block
-(CGSize)layoutBodyContentConstrainedToSize:(CGSize)arg1 ;
-(BOOL)adjustsLayoutForKeyboard;
-(UIButton *)buttonMale;
-(UIButton *)buttonFemale;
-(FBItemView *)itemViewMale;
-(FBItemView *)itemViewFemale;
-(void)_configureGenderButton:(id)arg1 ;
-(id)_configureContentCellWithTitle:(id)arg1 withImage:(id)arg2 ;
-(void)_layoutGenderButton:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
@end

