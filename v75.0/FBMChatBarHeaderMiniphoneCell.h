/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIColor, UIImage, NSString;

@interface FBMChatBarHeaderMiniphoneCell : UITableViewCell {

	UIImageView* _locationIconView;
	UIImageView* _arrowImageView;
	UILabel* _infoLabel;
	UILabel* _bylineLabel;
	UIColor* _bylineLabelTextHighLightedColor;

}

@property (nonatomic,retain) UIImageView * locationIconView;                         //@synthesize locationIconView=_locationIconView - In the implementation block
@property (nonatomic,retain) UIImageView * arrowImageView;                           //@synthesize arrowImageView=_arrowImageView - In the implementation block
@property (nonatomic,retain) UILabel * infoLabel;                                    //@synthesize infoLabel=_infoLabel - In the implementation block
@property (nonatomic,retain) UILabel * bylineLabel;                                  //@synthesize bylineLabel=_bylineLabel - In the implementation block
@property (nonatomic,retain) UIColor * bylineLabelTextHighLightedColor;              //@synthesize bylineLabelTextHighLightedColor=_bylineLabelTextHighLightedColor - In the implementation block
@property (nonatomic,copy) UIImage * locationIcon; 
@property (nonatomic,copy) NSString * infoText; 
@property (nonatomic,copy) NSString * bylineText; 
@property (nonatomic,copy) UIColor * bylineTextColor; 
@property (nonatomic,copy) UIColor * bylineTextHighlightedColor; 
-(UIImageView *)locationIconView;
-(void)setLocationIconView:(UIImageView *)arg1 ;
-(UILabel *)bylineLabel;
-(UIColor *)bylineLabelTextHighLightedColor;
-(void)setBylineLabelTextHighLightedColor:(UIColor *)arg1 ;
-(UIImage *)locationIcon;
-(void)setLocationIcon:(UIImage *)arg1 ;
-(NSString *)bylineText;
-(void)setBylineText:(NSString *)arg1 ;
-(UIColor *)bylineTextColor;
-(void)setBylineTextColor:(UIColor *)arg1 ;
-(UIColor *)bylineTextHighlightedColor;
-(void)setBylineTextHighlightedColor:(UIColor *)arg1 ;
-(void)setBylineLabel:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)infoLabel;
-(void)setInfoText:(NSString *)arg1 ;
-(NSString *)infoText;
-(void)setInfoLabel:(UILabel *)arg1 ;
-(UIImageView *)arrowImageView;
-(void)setArrowImageView:(UIImageView *)arg1 ;
@end

