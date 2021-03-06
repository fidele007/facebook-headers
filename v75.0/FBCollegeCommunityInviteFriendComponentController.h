/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <Facebook/FBGroupsSuggestedMembersPickerDelegate.h>

@protocol FBGroupsPreAddMemberHandling;
@class NSString;

@interface FBCollegeCommunityInviteFriendComponentController : CKComponentController <FBGroupsSuggestedMembersPickerDelegate> {

	id<FBGroupsPreAddMemberHandling> _confirmationHandler;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapInviteFriend:(id)arg1 context:(id)arg2 ;
-(void)didTapSeeAllFriends;
-(void)_inviteFriends:(id)arg1 emails:(id)arg2 pickerController:(id)arg3 confirmationCallback:(/*^block*/id)arg4 ;
-(void)groupsSuggestedMembersPickerController:(id)arg1 didSelectAvatars:(id)arg2 emails:(id)arg3 ;
-(void)groupsSuggestedMembersPickerControllerDidCancel:(id)arg1 ;
-(void)groupsSuggestedMembersPickerControllerDidChangeSelection:(id)arg1 ;
@end

