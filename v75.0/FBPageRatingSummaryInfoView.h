/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@protocol FBPageRatingSummaryInfoViewDelegate;
@class UIImageView, UILabel, FBRichTextView;

@interface FBPageRatingSummaryInfoView : UIView {

	UIImageView* _overallStarRatingBackgroundImageView;
	UILabel* _overallStarRatingValueLabel;
	FBRichTextView* _detailedOverallStarRatingLabel;
	id<FBPageRatingSummaryInfoViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPageRatingSummaryInfoViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_detailedAttributedStringWithRating:(double)arg1 numberOfRatings:(long long)arg2 ;
-(void)didReceiveTap:(id)arg1 ;
-(id)initWithRating:(double)arg1 numberOfRatings:(long long)arg2 ;
-(void)setDelegate:(id<FBPageRatingSummaryInfoViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<FBPageRatingSummaryInfoViewDelegate>)delegate;
@end

