/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBLigerProvidesNetworkStatusMonitor.h>

@class FBRadioTechnologyFetcher, NSDictionary, FBLigerNetworkStatusLogger, NSString;

@interface FBLigerNetworkStatusMonitor : NSObject <FBLigerProvidesNetworkStatusMonitor> {

	unique_ptr<proxygen::httpclient::monitor::NetworkStatusMonitor, std::__1::default_delete<proxygen::httpclient::monitor::NetworkStatusMonitor> >* _networkStatusMonitor;
	FBRadioTechnologyFetcher* _radioTechnologyFetcher;
	NSDictionary* _priorityLevels;
	FBLigerNetworkStatusLogger* _networkStatusLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NetworkStatusMonitor*)getNetworkStatusMonitor;
-(void)_didEnterBackground;
-(void)_willEnterForeground;
-(id)initWithMaxPriority:(unsigned char)arg1 radioMonitorEnabled:(BOOL)arg2 rawDataUsageLogging:(BOOL)arg3 ;
-(void)populateNetworkInfo:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)networkChanged:(id)arg1 ;
@end

