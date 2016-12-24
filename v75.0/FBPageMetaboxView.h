/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, FBStarRatingView, FBPageMetaboxViewModel;

@interface FBPageMetaboxView : UIView {

	UILabel* _categoryView;
	UILabel* _locationView;
	UILabel* _statusView;
	FBStarRatingView* _starRatingView;
	UILabel* _ratingCountView;
	UILabel* _starScoreView;
	FBPageMetaboxViewModel* _viewModel;

}
-(void)configureWithViewModel:(id)arg1 ;
-(void)_removeAllSubviews;
-(BOOL)_canShowCategory;
-(BOOL)_canShowLocation;
-(BOOL)_canShowStarRating;
-(BOOL)_canShowRatingCount;
-(BOOL)_canShowOpenStatus;
-(CGSize)sizeForLabel:(id)arg1 constrainedToSize:(CGSize)arg2 ;
-(BOOL)shouldShowTopRow;
-(BOOL)shouldShowBottomRow;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
