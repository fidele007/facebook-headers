/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAvatarPickerControllerDelegate.h>

@protocol FBQueriedFundraiserFieldsProtocol;
@class FBFundraiserPageToolbox, FBMemModelObject, NSString;

@interface FBFundraiserInviteHandler : NSObject <FBAvatarPickerControllerDelegate> {

	FBFundraiserPageToolbox* _toolbox;
	FBMemModelObject*<FBQueriedFundraiserFieldsProtocol> _campaign;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)avatarPicker:(id)arg1 didFinishWithSelection:(id)arg2 ;
-(void)avatarPickerDidCancel:(id)arg1 ;
-(void)_logOpenedInviteFlow;
-(void)sendInvitesToFriends:(id)arg1 forCampaignID:(id)arg2 completion:(/*^block*/id)arg3 session:(id)arg4 ;
-(void)setToolboxWithNavigationCoordinator:(id)arg1 intentHandler:(id)arg2 source:(id)arg3 session:(id)arg4 ;
-(void)setCampaign:(id)arg1 ;
@end
