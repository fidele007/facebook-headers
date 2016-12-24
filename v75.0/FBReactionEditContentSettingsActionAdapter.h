/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionBaseActionAdapter.h>
#import <Facebook/FBReactionContentSettingsViewControllerDelegate.h>
#import <Facebook/FBSportsFavoriteTeamsChangeListener.h>

@class UIControl, FBUserSession, FBMemReactionUnitUserSettings, FBSportsFavoriteTeamsChangeListenerAnnouncer, NSString;

@interface FBReactionEditContentSettingsActionAdapter : FBReactionBaseActionAdapter <FBReactionContentSettingsViewControllerDelegate, FBSportsFavoriteTeamsChangeListener> {

	UIControl* _actionView;
	FBUserSession* _session;
	FBMemReactionUnitUserSettings* _unitUserSettings;
	FBSportsFavoriteTeamsChangeListenerAnnouncer* _announcer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)threadsafeActionViewHeightForUnit:(id)arg1 action:(id)arg2 constrainedSize:(CGSize)arg3 ;
-(void)performActionWithExtras:(id)arg1 ;
-(id)initWithReactionContext:(id)arg1 resultStyle:(id)arg2 reactionUnit:(id)arg3 action:(id)arg4 ;
-(BOOL)performMagicTap;
-(void)_unitSettingsUpdated:(id)arg1 ;
-(id)_interactionEvent;
-(void)userDidPerformInteraction:(id)arg1 withExtras:(id)arg2 forContentsettingsViewController:(id)arg3 ;
-(void)favoriteTeamsDidChange;
-(id)actionAccessoryIcon;
-(void)actionViewTapped:(id)arg1 ;
-(id)actionDefaultIcon;
-(void)_performAction;
-(void)dealloc;
-(id)actionView;
@end

