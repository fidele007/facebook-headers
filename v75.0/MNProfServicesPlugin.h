/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/MNPlugin.h>

@protocol MNPluginServices, MNAuthenticationManager;
@class MNThreadToastCoordinator, MNProfServicesBookingToastProvider, MNProfServicesBookingToastCoordinator;

@interface MNProfServicesPlugin : MNPlugin {

	id<MNPluginServices> _services;
	MNThreadToastCoordinator* _threadToastCoordinator;
	id<MNAuthenticationManager> _authManager;
	MNProfServicesBookingToastProvider* _profServicesToastProvider;
	MNProfServicesBookingToastCoordinator* _toastCoordinator;

}

@property (nonatomic,readonly) MNProfServicesBookingToastProvider * profServicesToastProvider;              //@synthesize profServicesToastProvider=_profServicesToastProvider - In the implementation block
@property (nonatomic,readonly) MNProfServicesBookingToastCoordinator * toastCoordinator;                    //@synthesize toastCoordinator=_toastCoordinator - In the implementation block
-(id)initWithThreadToastCoordinator:(id)arg1 authenticationManager:(id)arg2 ;
-(void)startWithServices:(id)arg1 session:(id)arg2 ;
-(MNProfServicesBookingToastProvider *)profServicesToastProvider;
-(MNProfServicesBookingToastCoordinator *)toastCoordinator;
-(id)navigationPluginService;
-(void)stop;
@end

