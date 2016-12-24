/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol FBPaymentsCheckoutActionButtonViewDelegate;
@class FBRichTextView, FBPaymentsLoadingStatusButton, FBPaymentsCheckoutTermsAndPoliciesModel, NSString;

@interface FBPaymentsCheckoutActionButtonView : UIView <UITextViewDelegate> {

	FBRichTextView* _termsAndPoliciesLabel;
	FBPaymentsLoadingStatusButton* _actionButton;
	FBPaymentsCheckoutTermsAndPoliciesModel* _termsAndPoliciesModel;
	id<FBPaymentsCheckoutActionButtonViewDelegate> _delegate;

}

@property (nonatomic,readonly) FBPaymentsLoadingStatusButton * actionButton;                              //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,copy) FBPaymentsCheckoutTermsAndPoliciesModel * termsAndPoliciesModel;               //@synthesize termsAndPoliciesModel=_termsAndPoliciesModel - In the implementation block
@property (assign,nonatomic,__weak) id<FBPaymentsCheckoutActionButtonViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_handleLinkTapAtLocation:(CGPoint)arg1 inView:(id)arg2 ;
-(void)_tapLinkAction:(id)arg1 withEvent:(id)arg2 ;
-(void)setTermsAndPoliciesModel:(FBPaymentsCheckoutTermsAndPoliciesModel *)arg1 ;
-(FBPaymentsCheckoutTermsAndPoliciesModel *)termsAndPoliciesModel;
-(void)setDelegate:(id<FBPaymentsCheckoutActionButtonViewDelegate>)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPaymentsCheckoutActionButtonViewDelegate>)delegate;
-(FBPaymentsLoadingStatusButton *)actionButton;
@end

