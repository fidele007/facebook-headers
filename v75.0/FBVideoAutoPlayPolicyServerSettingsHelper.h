/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoAutoPlayPolicySettingsHelperProtocol.h>

@class FBUserSession;

@interface FBVideoAutoPlayPolicyServerSettingsHelper : NSObject <FBVideoAutoPlayPolicySettingsHelperProtocol> {

	FBUserSession* _session;
	BOOL _defaultsRegistered;
	long long _defaultAutoplaySetting;
	BOOL _hasMigrated;

}
-(void)setDefaultAutoplaySettings;
-(BOOL)autoplaySettingIsCurrentlyBeingReadFromTheServer;
-(void)setAutoplaySetting:(long long)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 ;
-(void)syncServerAndLocalAutoplaySettingsIfNeeded:(/*^block*/id)arg1 ;
-(void)retrieveAutoplayServerSettingIfCacheHasExpired;
-(long long)currentDefaultAutoplaySetting;
-(void)setSmartAutoplay:(BOOL)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 localCacheGKCallback:(/*^block*/id)arg3 notGeneratedByAUserChangingTheirSetting:(BOOL)arg4 ;
-(BOOL)autoplaySettingIsCurrentlyBeingWrittenToTheServer;
-(void)_pushLocalSettingToServer:(/*^block*/id)arg1 migrationType:(id)arg2 ;
-(void)_retrieveAutoplayServerSetting;
-(void)_setSmartAutoplayWithPostLocalCacheUpdateCallback:(/*^block*/id)arg1 enable:(BOOL)arg2 localCacheGKCallback:(/*^block*/id)arg3 notGeneratedByAUserChangingTheirSetting:(BOOL)arg4 autoplaySetting:(id)arg5 ;
-(void)_processSetAutoplaySettingSuccess;
-(id)_autoPlayValueToDataInputValue:(long long)arg1 ;
-(void)_handleRetrieveAutoplayServerSettingSuccess:(id)arg1 postLocalCacheUpdateCallback:(/*^block*/id)arg2 ;
-(long long)_dataInputToAutoPlayValue:(id)arg1 ;
-(void)_updateLocalAutoplayMigrateSuccess:(id)arg1 isSmartAutoplay:(BOOL)arg2 postLocalCacheUpdateCallback:(/*^block*/id)arg3 ;
-(id)initWithSession:(id)arg1 ;
@end

