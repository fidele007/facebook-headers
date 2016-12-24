/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class NSMutableDictionary, NSArray, NSDate;

@interface FBExperimentCatalog : NSObject {

	NSMutableDictionary* _experimentRegistrationData;
	NSMutableDictionary* _experiments;
	NSMutableDictionary* _overrides;
	NSArray* _availableExperimentNames;
	mutex _lock;
	NSDate* _startDate;

}

@property (nonatomic,copy) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
-(BOOL)hasOverrideForExperimentWithName:(id)arg1 ;
-(id)groupForExperimentWithName:(id)arg1 ;
-(void)removeOverrideForExperimentWithName:(id)arg1 ;
-(void)registerOverrideWithName:(id)arg1 forExperimentWithName:(id)arg2 ;
-(void)removeAllExperimentOverrides;
-(void)registerOverrides:(id)arg1 ;
-(id)experimentWithName:(id)arg1 ;
-(id)experimentTestModuleNameForExperimentWithName:(id)arg1 ;
-(void)replaceExperimentsWithNames:(id)arg1 withExperiments:(id)arg2 preservingOverrides:(BOOL)arg3 ;
-(void)registerExperiment:(id)arg1 ;
-(void)setExperiments:(id)arg1 ;
-(id)experimentsIncludingInactive:(BOOL)arg1 ;
-(BOOL)registerValidOverrides:(id)arg1 ;
-(id)allOverrides;
-(id)allRegisteredExperimentNames;
-(id)GKWithName:(id)arg1 ;
-(BOOL)isExperimentActive:(id)arg1 ;
-(id)activeExperimentNames;
-(void)_replaceExperimentNames_locked:(id)arg1 withExperiments:(id)arg2 preservingOverrides:(BOOL)arg3 ;
-(BOOL)_isExperimentActive_unlocked:(id)arg1 ;
-(id)_registeredExperimentNamesIncludingInactive_unlocked:(BOOL)arg1 ;
-(id)_experimentsIncludingInactive_locked:(BOOL)arg1 ;
-(void)_removeOverridesFromExperimentsWithNames_unlocked:(id)arg1 ;
-(void)_removeExperimentsWithNames_unlocked:(id)arg1 ;
-(void)_addExperiments_unlocked:(id)arg1 ;
-(BOOL)hasOverrideForExperimentWithName_unlocked:(id)arg1 ;
-(void)registerOverrideWithName_unlocked:(id)arg1 forExperimentWithName:(id)arg2 ;
-(id)groupForExperimentWithName_unlocked:(id)arg1 ;
-(id)QEWithName:(id)arg1 ;
-(id)allExperimentNames;
-(id)init;
-(void)reset;
-(void)setStartDate:(NSDate *)arg1 ;
-(NSDate *)startDate;
@end

