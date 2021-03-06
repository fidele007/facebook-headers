/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol FBPageCTADialogContentViewDelegate;
@class NSString, FBImageDownloader, UIButton, UIView, UILabel, UIImageView;

@interface FBPageCTADialogContentView : UIView {

	NSString* _pageName;
	unsigned long long _dialogViewType;
	FBImageDownloader* _imageDownloader;
	id<FBPageCTADialogContentViewDelegate> _delegate;
	UIButton* _closeButton;
	UIButton* _continueButton;
	UIView* _imageView;
	UILabel* _descriptionLabel;
	UILabel* _titleLabel;
	UIView* _seperator;
	UIImageView* _cardBackground;

}

@property (nonatomic,retain) UIButton * closeButton;                                              //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIButton * continueButton;                                           //@synthesize continueButton=_continueButton - In the implementation block
@property (nonatomic,retain) UIView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                                          //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                                //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * seperator;                                                  //@synthesize seperator=_seperator - In the implementation block
@property (nonatomic,retain) UIImageView * cardBackground;                                        //@synthesize cardBackground=_cardBackground - In the implementation block
@property (assign,nonatomic,__weak) id<FBPageCTADialogContentViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UIImageView *)cardBackground;
-(UIView *)seperator;
-(UIButton *)continueButton;
-(void)_closeButtonTapped:(id)arg1 ;
-(void)_continueButtonTapped:(id)arg1 ;
-(void)setContinueButton:(UIButton *)arg1 ;
-(void)setSeperator:(UIView *)arg1 ;
-(void)setCardBackground:(UIImageView *)arg1 ;
-(id)initWithPageName:(id)arg1 dialogViewType:(unsigned long long)arg2 imageDownloader:(id)arg3 ;
-(void)setDelegate:(id<FBPageCTADialogContentViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBPageCTADialogContentViewDelegate>)delegate;
-(UILabel *)titleLabel;
-(UIView *)imageView;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(void)setImageView:(UIView *)arg1 ;
-(UIButton *)closeButton;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

