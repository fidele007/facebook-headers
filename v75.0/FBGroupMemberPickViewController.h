/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGroupsMemberInviteWithViaEmailAvatarPicker.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class FBGroupsLogger, FBUserSession, NSString;

@interface FBGroupMemberPickViewController : FBGroupsMemberInviteWithViaEmailAvatarPicker <UIGestureRecognizerDelegate> {

	FBGroupsLogger* _logger;
	FBUserSession* _session;
	BOOL _ttiLogged;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(void)didTapCancel;
-(id)initWithSession:(id)arg1 configuration:(id)arg2 searchProvider:(id)arg3 group:(id)arg4 inviteViaEmailEnabled:(BOOL)arg5 initialEmails:(id)arg6 ;
-(void)didSelectAvatar:(id)arg1 atIndexPath:(id)arg2 ;
-(void)didTapDone;
-(void)configureCell:(id)arg1 atIndexPath:(id)arg2 ;
-(id)newCellWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
@end

