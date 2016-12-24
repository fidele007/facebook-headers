/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBGroupToolbox, FBMemPerson, FBMemGroup;

@interface FBCollegeCommunityInviteSingleFriendComponent : CKCompositeComponent {

	FBGroupToolbox* _toolbox;
	FBMemPerson* _person;
	FBMemGroup* _group;
	CKTypedComponentAction<> _inviteAction;

}
+(id)newWithPerson:(id)arg1 group:(id)arg2 toolbox:(id)arg3 inviteAction:(CKTypedComponentAction<>)arg4 options:(const FBCollegeCommunityInviteSingleFriendComponentOptions*)arg5 ;
-(void)inviteFriendToGroup;
-(void)didTapPerson;
@end
