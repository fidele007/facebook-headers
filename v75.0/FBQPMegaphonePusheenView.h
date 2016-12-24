/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBQPCustomRenderView.h>

@class FBUserSession, FBQPPromotion, UIButton, UILabel, FBNetworkImageView, FBRichTextView, FBFacepileView, UITextField, UITableView;

@interface FBQPMegaphonePusheenView : UIView <FBQPCustomRenderView> {

	FBUserSession* _session;
	FBQPPromotion* _promotion;
	UIButton* _primaryButton1;
	UIButton* _primaryButton2;
	UILabel* _primaryButtonDemoLabel;
	UIButton* _secondaryButton;
	UILabel* _secondaryButtonDemoLabel;
	UIButton* _dismissButton;
	FBNetworkImageView* _image;
	FBRichTextView* _socialContextTextView;
	FBFacepileView* _socialContextFacepileView;
	UITextField* _textField;
	UILabel* _textFieldDemoLabel;
	UITableView* _checkBoxes;
	UILabel* _checkBoxesDemoLabel;
	UITableView* _radioBoxes;
	UILabel* _radioBoxesDemoLabel;

}

@property (nonatomic,retain) UIButton * primaryButton1;                               //@synthesize primaryButton1=_primaryButton1 - In the implementation block
@property (nonatomic,retain) UIButton * primaryButton2;                               //@synthesize primaryButton2=_primaryButton2 - In the implementation block
@property (nonatomic,retain) UILabel * primaryButtonDemoLabel;                        //@synthesize primaryButtonDemoLabel=_primaryButtonDemoLabel - In the implementation block
@property (nonatomic,retain) UIButton * secondaryButton;                              //@synthesize secondaryButton=_secondaryButton - In the implementation block
@property (nonatomic,retain) UILabel * secondaryButtonDemoLabel;                      //@synthesize secondaryButtonDemoLabel=_secondaryButtonDemoLabel - In the implementation block
@property (nonatomic,retain) UIButton * dismissButton;                                //@synthesize dismissButton=_dismissButton - In the implementation block
@property (nonatomic,retain) FBNetworkImageView * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) FBRichTextView * socialContextTextView;                  //@synthesize socialContextTextView=_socialContextTextView - In the implementation block
@property (nonatomic,retain) FBFacepileView * socialContextFacepileView;              //@synthesize socialContextFacepileView=_socialContextFacepileView - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                 //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) UILabel * textFieldDemoLabel;                            //@synthesize textFieldDemoLabel=_textFieldDemoLabel - In the implementation block
@property (nonatomic,retain) UITableView * checkBoxes;                                //@synthesize checkBoxes=_checkBoxes - In the implementation block
@property (nonatomic,retain) UILabel * checkBoxesDemoLabel;                           //@synthesize checkBoxesDemoLabel=_checkBoxesDemoLabel - In the implementation block
@property (nonatomic,retain) UITableView * radioBoxes;                                //@synthesize radioBoxes=_radioBoxes - In the implementation block
@property (nonatomic,retain) UILabel * radioBoxesDemoLabel;                           //@synthesize radioBoxesDemoLabel=_radioBoxesDemoLabel - In the implementation block
+(CGSize)viewSizeWithPromotion:(id)arg1 frame:(CGRect)arg2 session:(id)arg3 ;
-(id)initWithPromotion:(id)arg1 frame:(CGRect)arg2 session:(id)arg3 ;
-(void)setFacepileViewWithURLs:(id)arg1 text:(id)arg2 ;
-(void)setImageWithURL:(id)arg1 ;
-(void)_setUpUIViewWithFrame:(CGRect)arg1 ;
-(CGSize)_calculateSizeByMockView;
-(CGSize)_layoutSubviewsWithSize:(CGSize)arg1 ;
-(UIButton *)primaryButton1;
-(void)setPrimaryButton1:(UIButton *)arg1 ;
-(UIButton *)primaryButton2;
-(void)setPrimaryButton2:(UIButton *)arg1 ;
-(UILabel *)primaryButtonDemoLabel;
-(void)setPrimaryButtonDemoLabel:(UILabel *)arg1 ;
-(UIButton *)secondaryButton;
-(void)setSecondaryButton:(UIButton *)arg1 ;
-(UILabel *)secondaryButtonDemoLabel;
-(void)setSecondaryButtonDemoLabel:(UILabel *)arg1 ;
-(FBRichTextView *)socialContextTextView;
-(void)setSocialContextTextView:(FBRichTextView *)arg1 ;
-(FBFacepileView *)socialContextFacepileView;
-(void)setSocialContextFacepileView:(FBFacepileView *)arg1 ;
-(UILabel *)textFieldDemoLabel;
-(void)setTextFieldDemoLabel:(UILabel *)arg1 ;
-(UITableView *)checkBoxes;
-(void)setCheckBoxes:(UITableView *)arg1 ;
-(UILabel *)checkBoxesDemoLabel;
-(void)setCheckBoxesDemoLabel:(UILabel *)arg1 ;
-(UITableView *)radioBoxes;
-(void)setRadioBoxes:(UITableView *)arg1 ;
-(UILabel *)radioBoxesDemoLabel;
-(void)setRadioBoxesDemoLabel:(UILabel *)arg1 ;
-(void)setImage:(FBNetworkImageView *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(FBNetworkImageView *)image;
-(UITextField *)textField;
-(void)setDismissButton:(UIButton *)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
-(UIButton *)dismissButton;
@end

