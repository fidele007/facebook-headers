/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKComponentController.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIActionSheet, NSString;

@interface FBEventInvitedByRelationshipComponentController : CKComponentController <UIActionSheetDelegate> {

	UIActionSheet* _actionSheet;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)didTapInvitedBy:(id)arg1 ;
-(id)textForActions;
-(void)didTapMessage;
-(void)didTapViewProfile;
-(void)didTapBlockInvite;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

