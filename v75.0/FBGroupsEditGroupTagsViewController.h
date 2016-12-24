/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>
#import <Facebook/FBEntityPickerTextFieldDelegate.h>
#import <Facebook/FBGroupsTagTokenViewDelegate.h>
#import <Facebook/FBGroupsEditGroupTagsTypeaheadCellTapListener.h>
#import <Facebook/FBGroupsEditGroupTagsTypeaheadScrollListener.h>

@protocol FBGroupsInfoViewConfig, FBGroupsEditGroupTagsViewControllerDelegate;
@class UIView, FBEntityPickerTextField, FBListViewController, FBGroupsEditGroupTagsTypeaheadListenerAnnouncer, FBTimer, FBGroupsEditGroupTagsTypeaheadCellTapListenerAnnouncer, FBGroupsEditGroupTagsTypeaheadScrollListenerAnnouncer, FBUserSession, FBMemGroup, FBGroupsTagsEditViewConfig, FBBezelView, NSString;

@interface FBGroupsEditGroupTagsViewController : UITableViewController <FBEntityPickerTextFieldDelegate, FBGroupsTagTokenViewDelegate, FBGroupsEditGroupTagsTypeaheadCellTapListener, FBGroupsEditGroupTagsTypeaheadScrollListener> {

	UIView* _tagsBannerView;
	FBEntityPickerTextField* _tagPickerTextField;
	FBListViewController* _typeaheadViewController;
	FBGroupsEditGroupTagsTypeaheadListenerAnnouncer* _searchAnnouncer;
	FBTimer* _typeaheadTimer;
	FBGroupsEditGroupTagsTypeaheadCellTapListenerAnnouncer* _tapAnnouncer;
	FBGroupsEditGroupTagsTypeaheadScrollListenerAnnouncer* _scrollAnnouncer;
	FBUserSession* _session;
	FBMemGroup* _group;
	id<FBGroupsInfoViewConfig> _config;
	FBGroupsTagsEditViewConfig* _tagsEditViewConfig;
	id<FBGroupsEditGroupTagsViewControllerDelegate> _delegate;
	FBBezelView* _bezelView;

}

@property (assign,nonatomic,__weak) id<FBGroupsEditGroupTagsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBBezelView * bezelView;                                                    //@synthesize bezelView=_bezelView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_didTapCancel;
-(void)_createBezelView;
-(id)initWithGroup:(id)arg1 session:(id)arg2 infoViewConfig:(id)arg3 tagsEditViewConfig:(id)arg4 ;
-(FBBezelView *)bezelView;
-(void)showErrorMessage;
-(void)_didTapDone;
-(void)textField:(id)arg1 searchTextChanged:(id)arg2 ;
-(void)textFieldHeightDidChange:(id)arg1 ;
-(void)didTapCellWithTagName:(id)arg1 graphQLID:(id)arg2 ;
-(id)_createBannerView;
-(id)_createTagsFieldForGroup:(id)arg1 ;
-(void)_reloadTypeahead;
-(void)didScrollToBottomOfTypeaheadResults;
-(void)tokenViewDidTapRemoveTag:(id)arg1 ;
-(void)setDelegate:(id<FBGroupsEditGroupTagsViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBGroupsEditGroupTagsViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewWillLayoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
@end

