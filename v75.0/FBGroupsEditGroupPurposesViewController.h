/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewController.h>

@protocol FBGroupsInfoViewConfig, FBGroupsPresentationHandlerProtocol, FBGroupsEditGroupPurposesViewControllerDelegate;
@class FBUserSession, FBMemGroup, FBGroupDownloadRequestProvider, FBTransientViewStateManager, FBMemGroupPurpose, NSString;

@interface FBGroupsEditGroupPurposesViewController : UITableViewController {

	FBUserSession* _session;
	FBMemGroup* _group;
	FBGroupDownloadRequestProvider* _downloadProvider;
	FBTransientViewStateManager* _viewStateManager;
	FBMemGroupPurpose* _selectedGroupPurpose;
	NSString* _groupID;
	id<FBGroupsInfoViewConfig> _config;
	id<FBGroupsPresentationHandlerProtocol> _presentationHandler;
	id<FBGroupsEditGroupPurposesViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBGroupsEditGroupPurposesViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapCancel;
-(void)_didTapSave;
-(void)_loadGroup;
-(id)_purposeForIndexPath:(id)arg1 ;
-(id)initWithGroupID:(id)arg1 session:(id)arg2 viewConfig:(id)arg3 presentationHandler:(id)arg4 ;
-(void)setDelegate:(id<FBGroupsEditGroupPurposesViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id<FBGroupsEditGroupPurposesViewControllerDelegate>)delegate;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)preferredInterfaceOrientationForPresentation;
-(void)viewDidLoad;
-(void)_saveAndDismiss;
@end

