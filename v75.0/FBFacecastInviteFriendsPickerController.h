/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAvatarPickerController.h>
#import <Facebook/FBFacecastInvitedUsersSourceDelegate.h>

@class NSMutableArray, FBFacecastAlreadyInvitedUsersSource, NSString;

@interface FBFacecastInviteFriendsPickerController : FBAvatarPickerController <FBFacecastInvitedUsersSourceDelegate> {

	NSMutableArray* _alreadyInvitedFriends;
	FBFacecastAlreadyInvitedUsersSource* _alreadyInvitedSource;
	BOOL _multiSelectInvite;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didSelectAvatar:(id)arg1 atIndexPath:(id)arg2 ;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(void)fetchAlreadyInvitedUsers:(id)arg1 alreadyInvitedUsers:(id)arg2 ;
-(void)_setupDataSourceWithSession:(id)arg1 taggableCollections:(id)arg2 sortDescriptors:(id)arg3 videoID:(id)arg4 ;
-(id)initWithSession:(id)arg1 target:(id)arg2 videoID:(id)arg3 multiSelectInvite:(BOOL)arg4 ;
@end

