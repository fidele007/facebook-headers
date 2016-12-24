/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBRichTextView, FBRoundedCornerView, UIImageView, UIButton, UIImage;

@interface FBQRCodeGeneratorView : UIView {

	FBRichTextView* _description;
	FBRoundedCornerView* _topLeftRoundedCorner;
	FBRoundedCornerView* _topRightRoundedCorner;
	FBRoundedCornerView* _bottomLeftRoundedCorner;
	FBRoundedCornerView* _bottomRightRoundedCorner;
	UIImageView* _qrBackground;
	BOOL _duringAnimation;
	BOOL _showPostButton;
	BOOL _showVanityQRCode;
	UIImageView* _qrcode;
	UIButton* _postButton;
	UIButton* _saveImageButton;
	UIImage* _standardQRCodeImage;
	UIImage* _vanityQRCodeImage;
	double _topLayoutGuideLength;

}

@property (nonatomic,retain) UIImageView * qrcode;                       //@synthesize qrcode=_qrcode - In the implementation block
@property (nonatomic,retain) UIButton * postButton;                      //@synthesize postButton=_postButton - In the implementation block
@property (nonatomic,retain) UIButton * saveImageButton;                 //@synthesize saveImageButton=_saveImageButton - In the implementation block
@property (nonatomic,retain) UIImage * standardQRCodeImage;              //@synthesize standardQRCodeImage=_standardQRCodeImage - In the implementation block
@property (nonatomic,retain) UIImage * vanityQRCodeImage;                //@synthesize vanityQRCodeImage=_vanityQRCodeImage - In the implementation block
@property (assign,nonatomic) BOOL showVanityQRCode;                      //@synthesize showVanityQRCode=_showVanityQRCode - In the implementation block
@property (assign,nonatomic) double topLayoutGuideLength;                //@synthesize topLayoutGuideLength=_topLayoutGuideLength - In the implementation block
-(void)setTopLayoutGuideLength:(double)arg1 ;
-(double)topLayoutGuideLength;
-(void)toggleQRCodeImage;
-(UIImage *)vanityQRCodeImage;
-(UIImage *)standardQRCodeImage;
-(UIImageView *)qrcode;
-(id)initWithFrame:(CGRect)arg1 showShareTimelineButton:(BOOL)arg2 ;
-(void)setQrcode:(UIImageView *)arg1 ;
-(void)setPostButton:(UIButton *)arg1 ;
-(UIButton *)saveImageButton;
-(void)setSaveImageButton:(UIButton *)arg1 ;
-(void)setStandardQRCodeImage:(UIImage *)arg1 ;
-(void)setVanityQRCodeImage:(UIImage *)arg1 ;
-(BOOL)showVanityQRCode;
-(void)setShowVanityQRCode:(BOOL)arg1 ;
-(void)layoutSubviews;
-(UIButton *)postButton;
@end
