/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIColor;

@interface FBReportingFlowDetailedResponsesViewHeader : UIView {

	int _presentationStyle;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	unsigned long long _cornersToRound;
	UIColor* _cornerColor;

}

@property (nonatomic,readonly) UILabel * titleLabel;                         //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,readonly) UILabel * subtitleLabel;                      //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
@property (assign,nonatomic) int presentationStyle;                          //@synthesize presentationStyle=_presentationStyle - In the implementation block
@property (assign,nonatomic) unsigned long long cornersToRound;              //@synthesize cornersToRound=_cornersToRound - In the implementation block
@property (nonatomic,retain) UIColor * cornerColor;                          //@synthesize cornerColor=_cornerColor - In the implementation block
-(void)setCornersToRound:(unsigned long long)arg1 ;
-(void)setCornerColor:(UIColor *)arg1 ;
-(UIColor *)cornerColor;
-(unsigned long long)cornersToRound;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)layoutSubviews;
-(int)presentationStyle;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(void)setPresentationStyle:(int)arg1 ;
@end

