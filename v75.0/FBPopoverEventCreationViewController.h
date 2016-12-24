/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UIViewController.h>
#import <Facebook/FBPlacePickerViewControllerDelegate.h>
#import <Facebook/FBTimeInputDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <Facebook/FBPresentableViewController.h>

@protocol FBPopoverEventCreationDelegate;
@class FBEventEditDataSet, FBUserSession, FBPopoverEventCreationView, FBPopoverController, FBPopoverActionSheet, FBNearbyCache, NSDateFormatter, NSString;

@interface FBPopoverEventCreationViewController : UIViewController <FBPlacePickerViewControllerDelegate, FBTimeInputDelegate, UITextFieldDelegate, FBPresentableViewController> {

	FBEventEditDataSet* _dataSet;
	FBUserSession* _session;
	FBPopoverEventCreationView* _view;
	FBPopoverController* _popoverController;
	FBPopoverActionSheet* _popoverActionSheet;
	FBNearbyCache* _nearbyCache;
	NSDateFormatter* _dateFormatter;
	NSDateFormatter* _timeFormatter;
	Class _popoverBorderClass;
	id<FBPopoverEventCreationDelegate> _delegate;

}

@property (assign,nonatomic) Class popoverBorderClass;                                        //@synthesize popoverBorderClass=_popoverBorderClass - In the implementation block
@property (assign,nonatomic,__weak) id<FBPopoverEventCreationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long preferredPresentationMethod; 
@property (nonatomic,readonly) unsigned long long preferredPresentationOptions; 
+(id)_mergeDate:(id)arg1 time:(id)arg2 ;
-(void)setPrivacy:(id)arg1 ;
-(BOOL)placePickerDidCancel:(id)arg1 ;
-(void)placePicker:(id)arg1 didFinishWithPlace:(id)arg2 location:(id)arg3 suggestedPhoto:(BOOL)arg4 ;
-(void)placePicker:(id)arg1 didFinishWithFreeString:(id)arg2 ;
-(void)placePickerDidRemoveCurrentPlace:(id)arg1 ;
-(void)_titleViewTapped:(id)arg1 ;
-(void)setPopoverBorderClass:(Class)arg1 ;
-(void)_startDateFieldTapped:(id)arg1 ;
-(void)_endDateFieldTapped:(id)arg1 ;
-(void)_placeFieldTapped:(id)arg1 ;
-(void)_allowGuestsSwitchToggled:(id)arg1 ;
-(void)_toggleEndTimeTapped:(id)arg1 ;
-(void)_submitTapped;
-(void)_mergeStartDate:(id)arg1 startTime:(id)arg2 ;
-(void)_mergeEndDate:(id)arg1 endTime:(id)arg2 ;
-(void)_updatePlaceWithLocation:(id)arg1 locationString:(id)arg2 ;
-(void)_presentPopoverWithViewController:(id)arg1 inView:(id)arg2 fixedHeight:(BOOL)arg3 ;
-(void)_presentActionSheetWithItems:(id)arg1 inView:(id)arg2 ;
-(void)timeInputDidChangeTime:(id)arg1 ;
-(Class)popoverBorderClass;
-(void)_startDateChanged:(id)arg1 ;
-(void)_endDateChanged:(id)arg1 ;
-(void)setDelegate:(id<FBPopoverEventCreationDelegate>)arg1 ;
-(id<FBPopoverEventCreationDelegate>)delegate;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(void)viewDidLoad;
-(void)_cancelButtonTapped;
-(void)_updateViewState;
-(id)initWithSession:(id)arg1 ;
@end
