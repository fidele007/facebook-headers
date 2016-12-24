/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:30 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@interface FBBackgroundLocationWifiMonitorExperimentContext : FBExperimentContext {

	BOOL _enableMonitor;
	long long _pollInterval;
	BOOL _checkNetworkBssid;
	BOOL _checkNetworkName;

}

@property (assign,nonatomic) BOOL enableMonitor;                  //@synthesize enableMonitor=_enableMonitor - In the implementation block
@property (assign,nonatomic) long long pollInterval;              //@synthesize pollInterval=_pollInterval - In the implementation block
@property (assign,nonatomic) BOOL checkNetworkBssid;              //@synthesize checkNetworkBssid=_checkNetworkBssid - In the implementation block
@property (assign,nonatomic) BOOL checkNetworkName;               //@synthesize checkNetworkName=_checkNetworkName - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
+(unsigned)mobileconfigConfigSpecifier;
+(id)configurationName;
-(void)logExposure;
-(BOOL)checkNetworkBssid;
-(BOOL)checkNetworkName;
-(BOOL)enableMonitor;
-(void)setEnableMonitor:(BOOL)arg1 ;
-(void)setPollInterval:(long long)arg1 ;
-(void)setCheckNetworkBssid:(BOOL)arg1 ;
-(void)setCheckNetworkName:(BOOL)arg1 ;
-(long long)pollInterval;
@end
