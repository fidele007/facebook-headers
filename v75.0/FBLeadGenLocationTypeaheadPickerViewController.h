/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <Facebook/FBEntityPickerTextFieldDelegate.h>
#import <Facebook/FBLeadGenLocationTypeaheadFetcherDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@protocol FBLeadGenLocationTypeaheadPickerViewControllerDelegate;
@class NSArray, FBLeadGenLocationTypeaheadFetcher, NSString, UITableView, FBAvatarPickerView;

@interface FBLeadGenLocationTypeaheadPickerViewController : UIViewController <FBEntityPickerTextFieldDelegate, FBLeadGenLocationTypeaheadFetcherDelegate, UITableViewDataSource, UITableViewDelegate> {

	NSArray* _currentResults;
	FBLeadGenLocationTypeaheadFetcher* _fetcher;
	NSString* _initalLocation;
	NSString* _locationType;
	UITableView* _tableView;
	FBAvatarPickerView* _pickerView;
	id<FBLeadGenLocationTypeaheadPickerViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBLeadGenLocationTypeaheadPickerViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)textField:(id)arg1 searchTextChanged:(id)arg2 ;
-(void)tokenFetcher:(id)arg1 didFetchResults:(id)arg2 ;
-(void)tokenFetcher:(id)arg1 didFinishWithError:(id)arg2 ;
-(id)initWithSession:(id)arg1 initialLocation:(id)arg2 locationType:(id)arg3 ;
-(void)dismissTypeaheadPicker;
-(void)tapClearButton;
-(void)setDelegate:(id<FBLeadGenLocationTypeaheadPickerViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBLeadGenLocationTypeaheadPickerViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewWillAppear:(BOOL)arg1 ;
@end

