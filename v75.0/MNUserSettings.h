/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUserSessionClassProvidable.h>

@protocol OS_dispatch_queue, MNAuthenticationManager;
@class NSNotificationCenter, NSMutableDictionary, NSObject, FBTimeThrottler, MNUserSettingsListenerAnnouncer, NSUserDefaults, NSString;

@interface MNUserSettings : NSObject <FBUserSessionClassProvidable> {

	NSNotificationCenter* _notificationCenter;
	NSMutableDictionary* _userSettings;
	NSMutableDictionary* _userThreadSettings;
	NSObject*<OS_dispatch_queue> _saveQueue;
	FBTimeThrottler* _saveThrottler;
	BOOL _didLoadSettings;
	MNUserSettingsListenerAnnouncer* _userSettingsListenerAnnouncer;
	id<MNAuthenticationManager> _authManager;
	NSUserDefaults* _userDefaults;

}

@property (nonatomic,retain) id<MNAuthenticationManager> authManager;              //@synthesize authManager=_authManager - In the implementation block
@property (nonatomic,retain) NSUserDefaults * userDefaults;                        //@synthesize userDefaults=_userDefaults - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNAuthenticationManager>)authManager;
-(void)setAuthManager:(id<MNAuthenticationManager>)arg1 ;
-(void)setShowAvailableToChatUserOverride:(BOOL)arg1 ;
-(id)getShowAvailableToChatUserOverride;
-(id)initWithAuthManager:(id)arg1 userDefaults:(id)arg2 notificationCenter:(id)arg3 saveQueue:(id)arg4 ;
-(void)_executeSave;
-(id)getCurrentUserSettings;
-(void)_performDelayedSaveSettings;
-(void)clearSettings;
-(void)setObject:(id)arg1 forKey:(id)arg2 threadFbId:(id)arg3 ;
-(id)objectForKey:(id)arg1 threadFbId:(id)arg2 ;
-(void)loadSettings;
-(void)saveSettings;
-(void)dealloc;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(void)setUserDefaults:(NSUserDefaults *)arg1 ;
-(NSUserDefaults *)userDefaults;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

