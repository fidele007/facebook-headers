/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UITableViewCell.h>

@class UILabel, UIImageView, UISwitch, NSString;

@interface FBCommerceAdminSwitchTableViewCell : UITableViewCell {

	UILabel* _label;
	UILabel* _descriptionLabel;
	BOOL _includeShareDescription;
	UIImageView* _infoImageView;
	UISwitch* _featuredSwitch;
	NSString* _labelText;

}

@property (nonatomic,retain) UIImageView * infoImageView;               //@synthesize infoImageView=_infoImageView - In the implementation block
@property (nonatomic,retain) UISwitch * featuredSwitch;                 //@synthesize featuredSwitch=_featuredSwitch - In the implementation block
@property (nonatomic,copy) NSString * labelText;                        //@synthesize labelText=_labelText - In the implementation block
@property (assign,nonatomic) BOOL includeShareDescription;              //@synthesize includeShareDescription=_includeShareDescription - In the implementation block
+(double)heightForCellIncludingShareDescription:(BOOL)arg1 size:(CGSize)arg2 ;
-(void)setIncludeShareDescription:(BOOL)arg1 ;
-(UISwitch *)featuredSwitch;
-(void)setFeaturedSwitch:(UISwitch *)arg1 ;
-(BOOL)includeShareDescription;
-(UIImageView *)infoImageView;
-(void)setInfoImageView:(UIImageView *)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
@end

