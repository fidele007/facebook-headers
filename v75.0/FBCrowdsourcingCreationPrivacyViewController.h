/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBPrivacySettingPickerDelegate.h>

@protocol FBCrowdsourcingCreationPrivacyViewControllerDelegate;
@class FBPrivacySettingPicker, FBComposerPrivacySetting, FBMemPerson, FBCacheAndRemoteComposerPrivacySettingFetcher, FBUserSession, NSArray;

@interface FBCrowdsourcingCreationPrivacyViewController : UIViewController <FBPrivacySettingPickerDelegate> {

	FBPrivacySettingPicker* _privacyView;
	FBComposerPrivacySetting* _privacySetting;
	FBMemPerson* _viewer;
	FBCacheAndRemoteComposerPrivacySettingFetcher* _fetcher;
	FBUserSession* _session;
	id<FBCrowdsourcingCreationPrivacyViewControllerDelegate> _delegate;
	NSArray* _settings;

}

@property (nonatomic,copy) NSArray * settings;                                                                      //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic,__weak) id<FBCrowdsourcingCreationPrivacyViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)fb_showNavBarSearchField;
-(void)_didTapCancel;
-(void)_didTapDone;
-(id)filterPrivacySetting:(id)arg1 ;
-(void)privacyPicker:(id)arg1 didSelectPrivacySetting:(id)arg2 ;
-(id)initWithUserSession:(id)arg1 privacySetting:(id)arg2 person:(id)arg3 ;
-(void)setDelegate:(id<FBCrowdsourcingCreationPrivacyViewControllerDelegate>)arg1 ;
-(id<FBCrowdsourcingCreationPrivacyViewControllerDelegate>)delegate;
-(NSArray *)settings;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)setSettings:(NSArray *)arg1 ;
@end

