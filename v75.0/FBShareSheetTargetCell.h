/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol FBShareSheetTargetProtocol;
@class UIView, UILabel, UIImageView;

@interface FBShareSheetTargetCell : UITableViewCell {

	UIView* _border;
	id<FBShareSheetTargetProtocol> _modelObject;
	BOOL _checked;
	UILabel* _nameLabel;
	UIImageView* _checkmarkButton;
	UIView* _targetIconView;
	UIImageView* _targetDetailIcon;
	UILabel* _detailLabel;

}

@property (nonatomic,retain) UILabel * nameLabel;                         //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) UIImageView * checkmarkButton;               //@synthesize checkmarkButton=_checkmarkButton - In the implementation block
@property (nonatomic,retain) UIView * targetIconView;                     //@synthesize targetIconView=_targetIconView - In the implementation block
@property (nonatomic,retain) UIImageView * targetDetailIcon;              //@synthesize targetDetailIcon=_targetDetailIcon - In the implementation block
@property (nonatomic,retain) UILabel * detailLabel;                       //@synthesize detailLabel=_detailLabel - In the implementation block
@property (nonatomic,readonly) BOOL checked;                              //@synthesize checked=_checked - In the implementation block
-(void)setupCell;
-(void)setChecked:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)configureWithModel:(id)arg1 checked:(BOOL)arg2 ;
-(id)modelObject;
-(UIView *)targetIconView;
-(void)setTargetIconView:(UIView *)arg1 ;
-(void)setTargetDetailIcon:(UIImageView *)arg1 ;
-(UIImageView *)targetDetailIcon;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(BOOL)checked;
-(UILabel *)nameLabel;
-(void)setNameLabel:(UILabel *)arg1 ;
-(UILabel *)detailLabel;
-(void)setDetailLabel:(UILabel *)arg1 ;
-(UIImageView *)checkmarkButton;
-(void)setCheckmarkButton:(UIImageView *)arg1 ;
@end
