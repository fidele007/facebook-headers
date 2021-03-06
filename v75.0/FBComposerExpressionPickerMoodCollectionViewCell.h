/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UILabel, FBNetworkImageView;

@interface FBComposerExpressionPickerMoodCollectionViewCell : UICollectionViewCell {

	UIView* _animatableView;
	unsigned long long _borderOptions;
	UIView* _bottomBorder;
	UILabel* _nameLabel;
	UIView* _rightBorder;
	FBNetworkImageView* _thumbnailImageView;

}
+(BOOL)canFitTwoCellsForWidth:(double)arg1 longestText:(id)arg2 ;
-(void)configureWithSession:(id)arg1 title:(id)arg2 imageURL:(id)arg3 freeformEntry:(BOOL)arg4 borderOptions:(unsigned long long)arg5 ;
-(void)animatePressedDownState;
-(void)animateLiftedUpState;
-(void)_setTitleString:(id)arg1 ;
-(void)_setImageURL:(id)arg1 withSession:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(void)accessibilityElementDidBecomeFocused;
@end

