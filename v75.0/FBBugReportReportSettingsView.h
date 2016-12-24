/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UILabel, UITableView, UISwitch;

@interface FBBugReportReportSettingsView : UIView {

	UIView* _grayArea;
	UILabel* _explanationLabel;
	UIView* _longDivider1;
	UIView* _longDivider2;
	double _dividerHeight;
	double _switchVerticalOffset;
	double _contentViewHeight;
	double _tableViewHeight;
	double _horizontalMargin;
	double _dialogMaxWidth;
	UITableView* _settingsTableView;
	UISwitch* _shakeToReportSwitch;

}

@property (nonatomic,retain) UITableView * settingsTableView;              //@synthesize settingsTableView=_settingsTableView - In the implementation block
@property (nonatomic,retain) UISwitch * shakeToReportSwitch;               //@synthesize shakeToReportSwitch=_shakeToReportSwitch - In the implementation block
-(void)initializeLayoutParameters;
-(UISwitch *)shakeToReportSwitch;
-(UITableView *)settingsTableView;
-(void)setSettingsTableView:(UITableView *)arg1 ;
-(void)setShakeToReportSwitch:(UISwitch *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end
