/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBQPCustomRenderActionHandler.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class UIButton, UILabel, NSArray, UITableView, NSString;

@interface FBQPMegaphonePusheenActionHandler : FBQPCustomRenderActionHandler <UITableViewDataSource, UITableViewDelegate> {

	UIButton* _primaryButton1;
	UIButton* _primaryButton2;
	UILabel* _primaryButtonDemoLabel;
	UIButton* _secondaryButton;
	UILabel* _secondaryButtonDemoLabel;
	long long _secondaryButtonClickCounter;
	UIButton* _dismissButton;
	UILabel* _textFieldDemoLabel;
	NSArray* _checkBoxesOptions;
	UITableView* _checkBoxes;
	UILabel* _checkBoxesDemoLabel;
	NSArray* _radioBoxesOptions;
	UITableView* _radioBoxes;
	UILabel* _radioBoxesDemoLabel;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_additionalActionForPrimaryButton:(id)arg1 ;
-(void)_additionalActionForSecondaryButton:(id)arg1 ;
-(void)_textEditing:(id)arg1 ;
-(void)_updateCheckBoxDemoLabel;
-(void)_updateRadioBoxDemoLabelWithIndex:(long long)arg1 ;
-(void)dealloc;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didDeselectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)setUp;
@end

