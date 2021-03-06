/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBCodeGeneratorActivationViewDelegate;
@class UIButton, UIImageView, UILabel, UIActivityIndicatorView, UIView;

@interface FBCodeGeneratorActivationView : UIView {

	UIButton* _activateButton;
	UIImageView* _instructionsImageView;
	UILabel* _instructionsLabel;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _spacerView1;
	UIView* _spacerView2;
	BOOL _haveConstraints;
	id<FBCodeGeneratorActivationViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCodeGeneratorActivationViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_tappedActivate;
-(void)setActivating:(BOOL)arg1 ;
-(void)_updatePadConstraints;
-(void)_updatePhoneConstraints;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBCodeGeneratorActivationViewDelegate>)arg1 ;
-(void)dealloc;
-(id<FBCodeGeneratorActivationViewDelegate>)delegate;
-(void)updateConstraints;
@end

