/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class FBNetworkImageView, FBGradientView, UIImageView, UILabel, FBRichTextView, NSURL, NSString;

@interface FBFeedSideFeedTrendingArticlesUnitHeaderView : UIView {

	FBNetworkImageView* _coverImageView;
	FBGradientView* _coverImageGradientView;
	UIImageView* _coverImageShadowView;
	UILabel* _categoryLabel;
	UIImageView* _categoryBackground;
	FBRichTextView* _titleLabel;
	UILabel* _domainLabel;

}

@property (nonatomic,readonly) UILabel * categoryLabel;              //@synthesize categoryLabel=_categoryLabel - In the implementation block
@property (nonatomic,retain) NSURL * coverImageURL; 
@property (nonatomic,copy) NSString * category; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * domain; 
+(double)coverImageHeight;
-(id)initWithFrame:(CGRect)arg1 session:(id)arg2 ;
-(id)_addLineSpacingToTitle:(id)arg1 ;
-(CGSize)_sizeForTitleLabelWithViewSize:(CGSize)arg1 ;
-(CGSize)_sizeForDomainLabelWithViewSize:(CGSize)arg1 ;
-(CGSize)_sizeForCategoryLabelWithViewSize:(CGSize)arg1 ;
-(CGSize)_sizeForCategoryBackgroundWithViewSize:(CGSize)arg1 categoryLabelSize:(CGSize)arg2 ;
-(NSURL *)coverImageURL;
-(void)setCoverImageURL:(NSURL *)arg1 ;
-(UILabel *)categoryLabel;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setCategory:(NSString *)arg1 ;
-(NSString *)category;
-(NSString *)title;
-(NSString *)domain;
-(void)fadeOut;
-(void)fadeIn;
-(void)_setAlpha:(double)arg1 ;
-(void)setDomain:(NSString *)arg1 ;
@end

