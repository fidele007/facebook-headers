/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsSectionBasedTableViewController.h>

@class FBUserSession, NSArray;

@interface FBPaymentsNewSettingsViewController : FBPaymentsSectionBasedTableViewController {

	FBUserSession* _session;
	id _sectionsConfiguration;
	NSArray* _settingsSections;

}

@property (nonatomic,copy) NSArray * settingsSections;              //@synthesize settingsSections=_settingsSections - In the implementation block
-(BOOL)fb_showNavBarSearchField;
-(BOOL)fb_hideNavBarRightButton;
-(id)newNavigationController;
-(id)initWithSession:(id)arg1 sectionsConfiguration:(id)arg2 ;
-(void)setSettingsSections:(NSArray *)arg1 ;
-(void)_setTableSections;
-(NSArray *)settingsSections;
-(void)viewDidLoad;
-(id)viewControllerForPresenting;
@end

