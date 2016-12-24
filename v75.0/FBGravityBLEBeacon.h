/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSData, NSDictionary;

@interface FBGravityBLEBeacon : NSObject {

	NSString* _fullLegacyFBPayloadString;
	NSArray* _serviceUUIDs;
	long long _rssi;
	NSString* _hardwareAddress;
	NSData* _manufacturerData;
	NSDictionary* _servicesData;
	NSData* _payload;
	NSData* _payloadPrefix;

}

@property (nonatomic,copy,readonly) NSArray * serviceUUIDs;                   //@synthesize serviceUUIDs=_serviceUUIDs - In the implementation block
@property (nonatomic,readonly) long long rssi;                                //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,copy,readonly) NSString * hardwareAddress;               //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
@property (nonatomic,readonly) NSData * manufacturerData;                     //@synthesize manufacturerData=_manufacturerData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * servicesData;              //@synthesize servicesData=_servicesData - In the implementation block
@property (nonatomic,readonly) NSData * payload;                              //@synthesize payload=_payload - In the implementation block
@property (nonatomic,readonly) NSData * payloadPrefix;                        //@synthesize payloadPrefix=_payloadPrefix - In the implementation block
-(NSString *)hardwareAddress;
-(id)flattenedPayload;
-(id)legacyFBPayloadString;
-(NSArray *)serviceUUIDs;
-(NSData *)manufacturerData;
-(NSDictionary *)servicesData;
-(NSData *)payloadPrefix;
-(id)initFromPeripheral:(id)arg1 withAdvertisementData:(id)arg2 withRSSI:(id)arg3 ;
-(NSData *)payload;
-(long long)rssi;
@end
