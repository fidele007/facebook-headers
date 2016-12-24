/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber, NSString;

@interface FBLocationManagerBluetoothScan : FBGraphQLInput {

	NSNumber* _ageMs;
	NSNumber* _rssiDbm;
	NSString* _advertisementPayloadBase64;
	NSString* _hardwareAddress;

}

@property (nonatomic,copy) NSNumber * ageMs;                                   //@synthesize ageMs=_ageMs - In the implementation block
@property (nonatomic,copy) NSNumber * rssiDbm;                                 //@synthesize rssiDbm=_rssiDbm - In the implementation block
@property (nonatomic,copy) NSString * advertisementPayloadBase64;              //@synthesize advertisementPayloadBase64=_advertisementPayloadBase64 - In the implementation block
@property (nonatomic,copy) NSString * hardwareAddress;                         //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
-(NSString *)hardwareAddress;
-(void)setAgeMs:(NSNumber *)arg1 ;
-(void)setRssiDbm:(NSNumber *)arg1 ;
-(void)setAdvertisementPayloadBase64:(NSString *)arg1 ;
-(void)setHardwareAddress:(NSString *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSString *)advertisementPayloadBase64;
-(NSNumber *)ageMs;
-(NSNumber *)rssiDbm;
@end
