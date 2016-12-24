/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>
#import <Facebook/FBNotificationsOptionsActionHandling.h>

@class UIViewController, NSString;

@interface FBNotificationsOpenDeviceSettingsActionHandler : NSObject <UIAlertViewDelegate, FBNotificationsOptionsActionHandling> {

	UIViewController* _parentViewController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithOptionModificationService:(id)arg1 controllerLifecycleAnnouncer:(id)arg2 parentController:(id)arg3 session:(id)arg4 ;
-(void)didSelectOption:(id)arg1 inOptionSet:(id)arg2 forNotification:(id)arg3 ;
-(void)didSelectOptionRow:(id)arg1 forNotification:(id)arg2 ;
-(void)didTapUndoButton:(id)arg1 forNotification:(id)arg2 ;
-(void)_showPushPrompt;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2 ;
@end

