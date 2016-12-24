/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:38 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBFacecastCommercialBreakConfirmationViewDelegate;
@class UIView, UILabel, UIButton, UIActivityIndicatorView, FBTimer, NSString, UIColor;

@interface FBFacecastCommercialBreakConfirmationView : UIView {

	UIView* _backgroundView;
	UILabel* _title;
	UILabel* _message;
	UILabel* _notNowLabel;
	UIButton* _confirmButton;
	UIActivityIndicatorView* _loadingIndicator;
	FBTimer* _loadingTimer;
	UIView* _bannerView;
	UILabel* _bannerText;
	BOOL _showCountdown;
	id<FBFacecastCommercialBreakConfirmationViewDelegate> _delegate;
	NSString* _titleText;
	NSString* _messageText;
	UIColor* _contentColor;

}

@property (assign,nonatomic,__weak) id<FBFacecastCommercialBreakConfirmationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * titleText;                                                                 //@synthesize titleText=_titleText - In the implementation block
@property (nonatomic,copy) NSString * messageText;                                                               //@synthesize messageText=_messageText - In the implementation block
@property (nonatomic,retain) UIColor * contentColor;                                                             //@synthesize contentColor=_contentColor - In the implementation block
@property (assign,nonatomic) BOOL showCountdown;                                                                 //@synthesize showCountdown=_showCountdown - In the implementation block
-(void)didTapNotNow;
-(void)didTapConfirmButton:(id)arg1 ;
-(void)_stopLoading;
-(void)setShowCountdown:(BOOL)arg1 ;
-(BOOL)showCountdown;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBFacecastCommercialBreakConfirmationViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<FBFacecastCommercialBreakConfirmationViewDelegate>)delegate;
-(void)setTitleText:(NSString *)arg1 ;
-(void)setMessageText:(NSString *)arg1 ;
-(void)setContentColor:(UIColor *)arg1 ;
-(UIColor *)contentColor;
-(NSString *)messageText;
-(NSString *)titleText;
@end

