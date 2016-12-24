/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExperimentManager.h>
#import <Facebook/FBExperimentDebugInfoProvider.h>

@protocol FBExperimentManagerPolicy;
@class NSDictionary, NSSet, FBExperimentCatalog, FBExperimentLogger, FBExperimentCrashManager, FBExperimentPersistentStore, NSMutableDictionary, NSMutableSet, FBMobileConfigContextManager, FBMobileConfigContextImpl, FBScenePath, NSString;

@interface FBExperimentManagerLegacy : FBExperimentManager <FBExperimentDebugInfoProvider> {

	FBExperimentCatalog* _experimentCatalog;
	FBExperimentLogger* _experimentLogger;
	FBExperimentCrashManager* _experimentCrashManager;
	FBExperimentPersistentStore* _persistentStore;
	BOOL _catalogLocked;
	double _startSyncExperimentsTimestamp;
	double _lastUpdateTime;
	ReadWriteLock _frozenExperimentsLock;
	NSMutableDictionary* _frozenExperiments;
	NSMutableSet* _frozenExperimentNamesWithoutConfig;
	NSMutableDictionary* _contextClasses;
	NSMutableDictionary* _contexts;
	BOOL _includeAllGroupsAndParameters;
	double _startTime;
	id<FBExperimentManagerPolicy> _policy;
	FBMobileConfigContextManager* _mobileConfigContextManager;
	FBMobileConfigContextImpl* _shadowMobileConfigContext;
	BOOL _enableMobileConfigShadowing;
	NSDictionary* _stashedOverrides;
	BOOL _automatedTestingOverridesSet;
	ReadWriteLock _contextLock;
	FBScenePath* _scenePath;
	NSMutableSet* _gatekeeperAccessed;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDictionary * activatedExperimentsWithConfig; 
@property (nonatomic,copy,readonly) NSSet * activatedExperimentNamesWithoutConfig; 
+(id)loggedOutQEManager;
+(BOOL)isGKEnabledWithSpecifier:(const mc_gatekeeper_specifier_t*)arg1 forSession:(id)arg2 withDefaultValue:(BOOL)arg3 ;
+(id)QEManagerWithSession:(id)arg1 ;
+(id)loggedOutQEManagerWithJSONOverrides:(id)arg1 error:(id*)arg2 ;
+(id)QEManagerWithSession:(id)arg1 jsonOverrides:(id)arg2 error:(id*)arg3 ;
+(BOOL)isGKEnabled:(id)arg1 forSession:(id)arg2 withDefaultValue:(BOOL)arg3 ;
+(id)_getSupportedConfigurationsFromPolicy:(id)arg1 ;
+(id)appShipDate;
+(id)_applyJSONOverrides:(id)arg1 toCurrentOverrides:(id)arg2 withExperimentNames:(id)arg3 ;
-(id)autoExposedExperimentContextWithClass:(Class)arg1 ;
-(BOOL)isGKEnabledWithSpecifier:(const mc_gatekeeper_specifier_t*)arg1 ;
-(void)updateExperimentGroupsIfStale:(/*^block*/id)arg1 ;
-(id)experimentContextWithClass:(Class)arg1 ;
-(BOOL)isGKEnabled:(id)arg1 ;
-(id)effectiveGroupForExperimentWithName:(id)arg1 ;
-(void)syncExperimentsOnStartup:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(id)frozenExperimentGroupForName:(id)arg1 ;
-(BOOL)hasOverrideForExperimentWithName:(id)arg1 ;
-(id)groupForExperimentWithName:(id)arg1 ;
-(void)removeOverrideForExperimentWithName:(id)arg1 ;
-(void)registerOverrideWithName:(id)arg1 forExperimentWithName:(id)arg2 ;
-(Class)contextClassForExperimentWithName:(id)arg1 ;
-(BOOL)isExperimentFrozen:(id)arg1 ;
-(void)setAllowForceConfigRefreshInDebugBuilds:(BOOL)arg1 ;
-(void)clearExperiments;
-(void)updateExperimentGroups:(/*^block*/id)arg1 ;
-(BOOL)containsFrozenExperimentsInList:(id)arg1 ;
-(BOOL)containsFrozenOverridenExperiments;
-(id)allExperimentOverrides;
-(void)removeAllExperimentOverrides;
-(void)registerOverrides:(id)arg1 ;
-(BOOL)isGKEnabled:(id)arg1 withDefaultValue:(BOOL)arg2 ;
-(BOOL)isGKEnabledWithSpecifier:(const mc_gatekeeper_specifier_t*)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)updateExperimentGroups:(/*^block*/id)arg1 withTimeout:(double)arg2 ;
-(id)parametersIdentifierForExperimentWithName:(id)arg1 ;
-(void)logObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 identifier:(id)arg3 extraData:(id)arg4 ;
-(void)logObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 ;
-(id)allExperimentsInCatalogAsShortDescription;
-(void)beginPreventingApplicationRefreshOnBackground;
-(void)endPreventingApplicationRefreshOnBackground;
-(void)requestColdStartForExperimentWithName:(id)arg1 ;
-(void)saveExperiments;
-(void)replaceExperimentsWithNames:(id)arg1 withExperiments:(id)arg2 preservingOverrides:(BOOL)arg3 ;
-(BOOL)shouldLogExperimentActionsWithName:(id)arg1 ;
-(id)initWithPolicy:(id)arg1 experimentDiskFetcher:(id)arg2 jsonOverrides:(id)arg3 mobileConfigContextManager:(id)arg4 enableMobileConfigShadowing:(BOOL)arg5 ;
-(void)registerContextClass:(Class)arg1 ;
-(void)_logGatekeeperAccessForKey:(id)arg1 value:(BOOL)arg2 ;
-(void)_validateExperiments;
-(BOOL)_isExperimentNameFrozen_unlocked:(id)arg1 ;
-(void)_fetchExperimentsAndPerformAction:(/*^block*/id)arg1 withAllGroupsAndParameters:(BOOL)arg2 ;
-(void)_replaceExperimentsWithNames:(id)arg1 withExperiments:(id)arg2 withCallbackOnSuccess:(/*^block*/id)arg3 ;
-(void)_requestColdStartForFrozenExperimenthNames:(id)arg1 ;
-(id)_experimentNamesThatChangeWhenReplacingNames:(id)arg1 withExperiments:(id)arg2 ;
-(id)_parametersForExperimentWithName:(id)arg1 allowInactive:(BOOL)arg2 ;
-(void)freezeExperiment:(id)arg1 ;
-(id)_parametersForExperimentWithName:(id)arg1 ;
-(id)_constructContextWithClass:(Class)arg1 parameters:(id)arg2 parameterConfigurations:(id)arg3 ;
-(BOOL)_shouldNotifyExperimentObserver;
-(void)_requestColdStartForFrozenExperimentWithName:(id)arg1 ;
-(void)syncExperimentGroups:(/*^block*/id)arg1 ;
-(void)_performActionIfExperimentCatalogUnlocked:(/*^block*/id)arg1 ;
-(id)activatedGroupForExperimentName:(id)arg1 ;
-(NSDictionary *)activatedExperimentsWithConfig;
-(NSSet *)activatedExperimentNamesWithoutConfig;
-(id)catalog;
@end
