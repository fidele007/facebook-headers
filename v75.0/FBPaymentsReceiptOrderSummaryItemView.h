/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>
#import <Facebook/FBPaymentsViewModelConfigurable.h>

@class FBRichTextView, NSArray, NSString;

@interface FBPaymentsReceiptOrderSummaryItemView : UIView <FBPaymentsViewModelConfigurable> {

	FBRichTextView* _titleTextView;
	FBRichTextView* _priceTextView;
	NSArray* _variantTextViews;
	id _viewModel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id viewModel;                            //@synthesize viewModel=_viewModel - In the implementation block
+(CGSize)sizeWithViewModel:(id)arg1 constrainedSize:(CGSize)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)viewModel;
-(void)setViewModel:(id)arg1 ;
@end

