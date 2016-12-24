/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@protocol FBGroupsCreationFlowRequesterDelegate;
@class FBUserSession, FBGroupCreationConfig, UIAlertView, FBGroupsLogger, FBMemGroupsYouShouldCreateFeedUnitItem, FBGroupMutationInfo, NSString;

@interface FBGroupsCreationFlowRequester : NSObject <UIAlertViewDelegate> {

	FBUserSession* _session;
	FBGroupCreationConfig* _config;
	UIAlertView* _alertView;
	FBGroupsLogger* _logger;
	FBMemGroupsYouShouldCreateFeedUnitItem* _gyscFeedUnitItem;
	id<FBGroupsCreationFlowRequesterDelegate> _delegate;
	FBGroupMutationInfo* _groupMutationInfo;

}

@property (assign,nonatomic,__weak) id<FBGroupsCreationFlowRequesterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) FBGroupMutationInfo * groupMutationInfo;                              //@synthesize groupMutationInfo=_groupMutationInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfig:(id)arg1 session:(id)arg2 ;
-(void)sendQueryForPageID:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)_addMembers;
-(void)_finishCreation;
-(void)_dismissFlowWithEntryPoint:(id)arg1 ;
-(BOOL)_hasModifiedFields:(id)arg1 ;
-(void)createGroupWithGyscFeedUnitItem:(id)arg1 entryPoint:(id)arg2 ;
-(void)didTapCancelWithPrimaryView:(id)arg1 entryPoint:(id)arg2 shouldUsePopover:(BOOL)arg3 ;
-(void)resetGroupMutationInfo;
-(FBGroupMutationInfo *)groupMutationInfo;
-(void)setDelegate:(id<FBGroupsCreationFlowRequesterDelegate>)arg1 ;
-(void)dealloc;
-(id<FBGroupsCreationFlowRequesterDelegate>)delegate;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(long long)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
@end

