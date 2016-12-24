/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBExperimentManager.h>

@class FBMobileConfigContextManager;

@interface FBExperimentManagerForMobileConfig : FBExperimentManager {

	FBMobileConfigContextManager* _mobileConfigContextManager;

}
+(id)QEManagerWithSession:(id)arg1 ;
+(id)QEManagerWithSession:(id)arg1 jsonOverrides:(id)arg2 error:(id*)arg3 ;
-(id)autoExposedExperimentContextWithClass:(Class)arg1 ;
-(BOOL)isGKEnabledWithSpecifier:(const mc_gatekeeper_specifier_t*)arg1 ;
-(id)experimentContextWithClass:(Class)arg1 ;
-(BOOL)isGKEnabledWithSpecifier:(const mc_gatekeeper_specifier_t*)arg1 withDefaultValue:(BOOL)arg2 ;
-(void)logObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 identifier:(id)arg3 extraData:(id)arg4 ;
-(void)logObservationForExperimentWithContextClass:(Class)arg1 type:(id)arg2 ;
-(id)allExperimentsInCatalogAsShortDescription;
-(void)beginPreventingApplicationRefreshOnBackground;
-(void)endPreventingApplicationRefreshOnBackground;
-(id)initWithFBMobileConfigContextManager:(id)arg1 ;
-(void)_setupDebugHandler;
-(void)_doHandler:(id)arg1 ;
-(void)dealloc;
@end
