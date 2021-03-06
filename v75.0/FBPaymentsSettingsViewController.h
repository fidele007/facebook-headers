/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPaymentsSettingsSectionExtensionDelegate.h>
#import <Facebook/FBPaymentsSettingsViewDataSourceDelegate.h>
#import <Facebook/FBPaymentsToastControllerDelegate.h>
#import <Facebook/FBPaymentsNavigationDelegate.h>
#import <Facebook/FBModalWebFlowDelegate.h>
#import <Facebook/FBPaymentsViewControllerToasting.h>

@protocol FBPaymentsNavigationDelegate;
@class FBPaymentsSettingsViewDataSource, FBPaymentsSettingsPreviewingHandler, FBToastPresenter, FBPaymentsToastCoordinator, FBPaymentsToastController, FBPaymentsSettingsLogger, FBPaymentsTableViewToastWrapperView, NSArray, NSString;

@interface FBPaymentsSettingsViewController : UIViewController <FBPaymentsSettingsSectionExtensionDelegate, FBPaymentsSettingsViewDataSourceDelegate, FBPaymentsToastControllerDelegate, FBPaymentsNavigationDelegate, FBModalWebFlowDelegate, FBPaymentsViewControllerToasting> {

	FBPaymentsSettingsViewDataSource* _dataSource;
	FBPaymentsSettingsPreviewingHandler* _previewingHandler;
	FBToastPresenter* _topToastPresenter;
	FBPaymentsToastCoordinator* _toastCoordinator;
	FBPaymentsToastController* _toastController;
	FBPaymentsSettingsLogger* _logger;
	id<FBPaymentsNavigationDelegate> _navigationDelegate;
	FBPaymentsTableViewToastWrapperView* _settingsView;
	NSArray* _sectionExtensions;

}

@property (assign,nonatomic,__weak) id<FBPaymentsNavigationDelegate> navigationDelegate;              //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (nonatomic,readonly) FBPaymentsTableViewToastWrapperView * settingsView;                    //@synthesize settingsView=_settingsView - In the implementation block
@property (nonatomic,copy,readonly) NSArray * sectionExtensions;                                      //@synthesize sectionExtensions=_sectionExtensions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)toastSurfaceIdentifier;
-(void)modalWebFlowControllerDidCancel:(id)arg1 ;
-(id)newNavigationController;
-(id)paymentsTableViewSection:(id)arg1 dequeueReusableCellForIdentifier:(id)arg2 ;
-(void)paymentsTableViewSectionDidUpdate:(id)arg1 ;
-(void)paymentsSettingsSectionExtensionWillBeginProcessing:(id)arg1 ;
-(void)paymentsSettingsSectionExtensionDidEndProcessing:(id)arg1 ;
-(void)paymentsSettingsSectionExtensionDidEndEditing:(id)arg1 ;
-(CGRect)rectForPaymentsSettingsSectionExtension:(id)arg1 withRowAtIndex:(unsigned long long)arg2 ;
-(id)_toastingContext;
-(void)_updateActiveSectionExtensionsIfNeeded;
-(void)_registerForPreviewing;
-(void)_reloadSection:(id)arg1 ;
-(NSArray *)sectionExtensions;
-(FBPaymentsTableViewToastWrapperView *)settingsView;
-(void)settingsViewDataSourceDidUpdate:(id)arg1 ;
-(void)didUpdateToasts:(id)arg1 ;
-(id)initWithFetchController:(id)arg1 sectionExtensionFactory:(id)arg2 paymentsToastCoordinator:(id)arg3 ;
-(void)paymentsSettingsSectionExtension:(id)arg1 reloadIndexes:(id)arg2 ;
-(void)dealloc;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id<FBPaymentsNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<FBPaymentsNavigationDelegate>)arg1 ;
-(id)viewControllerForPresenting;
@end

