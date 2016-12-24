/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBMQTTClientSettings : NSObject {

	BOOL _useWhistleDNSCache;
	BOOL _useWhistleSPDYStream;
	BOOL _whistleResetOnNetworkSwitch;
	BOOL _whistleNoBgTaskOnConnect;
	BOOL _whistleUseLigerThread;
	BOOL _whistleConnectionMerge;
	BOOL _useWorkerThread;
	BOOL _useZeroProtocol;
	BOOL _enableFastSend;
	BOOL _radioStatusMonitorEnabled;
	BOOL _whistleUseProxy;
	int _mqttKeepAliveTime;
	int _mqttForegroundKeepAliveTime;
	float _pingResponseTimeout;
	float _connectTimeout;
	NSString* _connectionMergeHost;
	NSString* _connectionMergeHostCname;
	NSString* _mqttOriginalHost;
	NSString* _proxyAddress;
	unsigned long long _proxyPort;

}

@property (assign,nonatomic) int mqttKeepAliveTime;                         //@synthesize mqttKeepAliveTime=_mqttKeepAliveTime - In the implementation block
@property (assign,nonatomic) int mqttForegroundKeepAliveTime;               //@synthesize mqttForegroundKeepAliveTime=_mqttForegroundKeepAliveTime - In the implementation block
@property (assign,nonatomic) float pingResponseTimeout;                     //@synthesize pingResponseTimeout=_pingResponseTimeout - In the implementation block
@property (assign,nonatomic) float connectTimeout;                          //@synthesize connectTimeout=_connectTimeout - In the implementation block
@property (assign,nonatomic) BOOL useWhistleDNSCache;                       //@synthesize useWhistleDNSCache=_useWhistleDNSCache - In the implementation block
@property (assign,nonatomic) BOOL useWhistleSPDYStream;                     //@synthesize useWhistleSPDYStream=_useWhistleSPDYStream - In the implementation block
@property (assign,nonatomic) BOOL whistleResetOnNetworkSwitch;              //@synthesize whistleResetOnNetworkSwitch=_whistleResetOnNetworkSwitch - In the implementation block
@property (assign,nonatomic) BOOL whistleNoBgTaskOnConnect;                 //@synthesize whistleNoBgTaskOnConnect=_whistleNoBgTaskOnConnect - In the implementation block
@property (assign,nonatomic) BOOL whistleUseLigerThread;                    //@synthesize whistleUseLigerThread=_whistleUseLigerThread - In the implementation block
@property (assign,nonatomic) BOOL whistleConnectionMerge;                   //@synthesize whistleConnectionMerge=_whistleConnectionMerge - In the implementation block
@property (assign,nonatomic) BOOL useWorkerThread;                          //@synthesize useWorkerThread=_useWorkerThread - In the implementation block
@property (assign,nonatomic) BOOL useZeroProtocol;                          //@synthesize useZeroProtocol=_useZeroProtocol - In the implementation block
@property (assign,nonatomic) BOOL enableFastSend;                           //@synthesize enableFastSend=_enableFastSend - In the implementation block
@property (assign,nonatomic) BOOL radioStatusMonitorEnabled;                //@synthesize radioStatusMonitorEnabled=_radioStatusMonitorEnabled - In the implementation block
@property (copy) NSString * connectionMergeHost;                            //@synthesize connectionMergeHost=_connectionMergeHost - In the implementation block
@property (copy) NSString * connectionMergeHostCname;                       //@synthesize connectionMergeHostCname=_connectionMergeHostCname - In the implementation block
@property (copy) NSString * mqttOriginalHost;                               //@synthesize mqttOriginalHost=_mqttOriginalHost - In the implementation block
@property (assign,nonatomic) BOOL whistleUseProxy;                          //@synthesize whistleUseProxy=_whistleUseProxy - In the implementation block
@property (nonatomic,copy) NSString * proxyAddress;                         //@synthesize proxyAddress=_proxyAddress - In the implementation block
@property (assign,nonatomic) unsigned long long proxyPort;                  //@synthesize proxyPort=_proxyPort - In the implementation block
-(float)pingResponseTimeout;
-(int)mqttKeepAliveTime;
-(void)setMqttKeepAliveTime:(int)arg1 ;
-(int)mqttForegroundKeepAliveTime;
-(void)setMqttForegroundKeepAliveTime:(int)arg1 ;
-(void)setPingResponseTimeout:(float)arg1 ;
-(BOOL)useWhistleSPDYStream;
-(BOOL)enableFastSend;
-(BOOL)useWhistleDNSCache;
-(BOOL)whistleResetOnNetworkSwitch;
-(BOOL)whistleNoBgTaskOnConnect;
-(BOOL)useZeroProtocol;
-(BOOL)whistleUseProxy;
-(NSString *)connectionMergeHost;
-(NSString *)connectionMergeHostCname;
-(void)setUseWhistleDNSCache:(BOOL)arg1 ;
-(void)setUseWhistleSPDYStream:(BOOL)arg1 ;
-(void)setWhistleResetOnNetworkSwitch:(BOOL)arg1 ;
-(void)setWhistleNoBgTaskOnConnect:(BOOL)arg1 ;
-(void)setWhistleUseLigerThread:(BOOL)arg1 ;
-(void)setWhistleConnectionMerge:(BOOL)arg1 ;
-(void)setUseWorkerThread:(BOOL)arg1 ;
-(void)setUseZeroProtocol:(BOOL)arg1 ;
-(void)setConnectionMergeHost:(NSString *)arg1 ;
-(void)setMqttOriginalHost:(NSString *)arg1 ;
-(void)setConnectionMergeHostCname:(NSString *)arg1 ;
-(void)setEnableFastSend:(BOOL)arg1 ;
-(void)setWhistleUseProxy:(BOOL)arg1 ;
-(void)setProxyAddress:(NSString *)arg1 ;
-(void)setRadioStatusMonitorEnabled:(BOOL)arg1 ;
-(BOOL)whistleUseLigerThread;
-(BOOL)whistleConnectionMerge;
-(BOOL)useWorkerThread;
-(BOOL)radioStatusMonitorEnabled;
-(NSString *)mqttOriginalHost;
-(NSString *)proxyAddress;
-(unsigned long long)proxyPort;
-(void)setProxyPort:(unsigned long long)arg1 ;
-(id)description;
-(float)connectTimeout;
-(void)setConnectTimeout:(float)arg1 ;
@end
