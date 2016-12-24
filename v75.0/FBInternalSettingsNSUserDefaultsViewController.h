/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <UIKit/UIAlertViewDelegate.h>

@class UIPickerView, UITextView, NSArray, UILabel, UIButton, NSString, UIAlertView;

@interface FBInternalSettingsNSUserDefaultsViewController : UIViewController <UIPickerViewDelegate, UIAlertViewDelegate> {

	UIPickerView* _userDefaultPickerView;
	UITextView* _userDefaultShowValueView;
	NSArray* _syncedUserDefaultKeys;
	UILabel* _userDefaultNameLabel;
	UIButton* _deleteButton;
	NSString* _selectedKey;
	UIAlertView* _alertView;

}

@property (nonatomic,retain) UIAlertView * alertView;               //@synthesize alertView=_alertView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)fb_showAuxiliaryViewController;
-(void)dealloc;
-(long long)numberOfComponentsInPickerView:(id)arg1 ;
-(long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(long long)arg2 forComponent:(long long)arg3 ;
-(double)pickerView:(id)arg1 widthForComponent:(long long)arg2 ;
-(void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setAlertView:(UIAlertView *)arg1 ;
-(UIAlertView *)alertView;
-(void)_deleteButtonPressed:(id)arg1 ;
@end
