/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, UIView, FBBugReportCoordinator, UIButton;

@interface FBBugReportOldBuildView : UIView {

	UILabel* _messageLabel;
	UIImageView* _imageView;
	UIView* _horizontalDivider;
	UIView* _verticalDivider;
	FBBugReportCoordinator* _coordinator;
	UIButton* _updateBuildButton;
	UIButton* _reportAnywayButton;

}

@property (nonatomic,retain) UIButton * updateBuildButton;               //@synthesize updateBuildButton=_updateBuildButton - In the implementation block
@property (nonatomic,retain) UIButton * reportAnywayButton;              //@synthesize reportAnywayButton=_reportAnywayButton - In the implementation block
-(double)heightForLabelText:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 coordinator:(id)arg2 ;
-(UIButton *)updateBuildButton;
-(void)setUpdateBuildButton:(UIButton *)arg1 ;
-(UIButton *)reportAnywayButton;
-(void)setReportAnywayButton:(UIButton *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

