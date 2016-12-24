/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor, UIImageView, UILabel;

@interface FBPageCTARequestTimeIntroItemView : UIView {

	NSString* _description;
	unsigned long long _glyphName;
	UIColor* _glyphColor;
	UIImageView* _glyphImageView;
	UILabel* _descriptionLabel;

}

@property (nonatomic,retain) UIImageView * glyphImageView;              //@synthesize glyphImageView=_glyphImageView - In the implementation block
@property (nonatomic,retain) UILabel * descriptionLabel;                //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
-(id)initWithDescription:(id)arg1 glyphName:(unsigned long long)arg2 glyphColor:(id)arg3 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)glyphImageView;
-(void)setGlyphImageView:(UIImageView *)arg1 ;
-(UILabel *)descriptionLabel;
-(void)setDescriptionLabel:(UILabel *)arg1 ;
@end

