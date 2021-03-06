/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNotificationsOptionsActionHandling.h>

@class FBNotificationsOptionsModificationService, UIViewController, NSString;

@interface FBNotificationsOpenActionSheetActionHandler : NSObject <FBNotificationsOptionsActionHandling> {

	FBNotificationsOptionsModificationService* _modificationService;
	UIViewController* _parentViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOptionModificationService:(id)arg1 controllerLifecycleAnnouncer:(id)arg2 parentController:(id)arg3 session:(id)arg4 ;
-(void)_showActionSheetForNotifOptionSet:(id)arg1 forNotification:(id)arg2 ;
-(void)didSelectActionSheetOption:(id)arg1 ;
-(void)_dismissActionSheetViewController;
-(void)didSelectOption:(id)arg1 inOptionSet:(id)arg2 forNotification:(id)arg3 ;
-(void)_presentActionSheetViewController:(id)arg1 ;
-(void)didSelectOptionRow:(id)arg1 forNotification:(id)arg2 ;
-(void)didTapUndoButton:(id)arg1 forNotification:(id)arg2 ;
-(id)_actionSheetButtonItemsForOptionSet:(id)arg1 notification:(id)arg2 ;
-(id)_actionSheetForOptionSet:(id)arg1 actionItems:(id)arg2 ;
-(unsigned long long)_actionSheetStyleForOptionSet:(id)arg1 ;
-(void)_performActionForOption:(id)arg1 inOptionSet:(id)arg2 notification:(id)arg3 ;
@end

