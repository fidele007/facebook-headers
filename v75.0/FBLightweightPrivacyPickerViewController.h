/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBLightweightPrivacyPickerViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBLightweightPrivacyPickerViewControllerDelegate;
@class FBLightweightPrivacyPickerView, FBComposerAudiencePrivacyDataSource, FBUserSession, FBPrivacyTokenableOption, FBTypedNSArrayOfFBComposerPrivacySetting, FBPrivacyPickerDataSourceConfig, FBPrivacyPickerAnalyticsData, NSString;

@interface FBLightweightPrivacyPickerViewController : UIViewController <FBLightweightPrivacyPickerViewDelegate, UITableViewDelegate> {

	FBLightweightPrivacyPickerView* _pickerView;
	FBComposerAudiencePrivacyDataSource* _privacyDataSource;
	FBUserSession* _session;
	FBPrivacyTokenableOption* _selectedOption;
	FBTypedNSArrayOfFBComposerPrivacySetting* _availableSettings;
	FBPrivacyPickerDataSourceConfig* _config;
	FBPrivacyPickerAnalyticsData* _analyticsData;
	id<FBLightweightPrivacyPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLightweightPrivacyPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 analyticsData:(id)arg2 ;
-(void)configureWithSelectedSetting:(id)arg1 availableSettings:(id)arg2 ;
-(CGSize)sizeForPickerWithFrame:(CGRect)arg1 ;
-(void)dismissLightweightPicker;
-(void)_updateDataSourceWithFilteredAvailablePrivacySettings:(id)arg1 ;
-(void)_assertOptionTypeFailure:(unsigned long long)arg1 ;
-(void)setDelegate:(id<FBLightweightPrivacyPickerViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBLightweightPrivacyPickerViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
@end

