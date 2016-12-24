/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:58 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLInput.h>

@class NSNumber;

@interface FBLocationManagerWCDMAInfo : FBGraphQLInput {

	NSNumber* _cellId;
	NSNumber* _locationAreaCode;
	NSNumber* _mobileCountryCode;
	NSNumber* _mobileNetworkCode;
	NSNumber* _primaryScramblingCode;
	NSNumber* _rssiDbm;

}

@property (nonatomic,copy) NSNumber * cellId;                             //@synthesize cellId=_cellId - In the implementation block
@property (nonatomic,copy) NSNumber * locationAreaCode;                   //@synthesize locationAreaCode=_locationAreaCode - In the implementation block
@property (nonatomic,copy) NSNumber * mobileCountryCode;                  //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,copy) NSNumber * mobileNetworkCode;                  //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,copy) NSNumber * primaryScramblingCode;              //@synthesize primaryScramblingCode=_primaryScramblingCode - In the implementation block
@property (nonatomic,copy) NSNumber * rssiDbm;                            //@synthesize rssiDbm=_rssiDbm - In the implementation block
-(void)setRssiDbm:(NSNumber *)arg1 ;
-(const FBGraphQLInputField*)fieldsMetadataWithOutLength:(out int*)arg1 ;
-(NSNumber *)locationAreaCode;
-(void)setLocationAreaCode:(NSNumber *)arg1 ;
-(NSNumber *)primaryScramblingCode;
-(void)setPrimaryScramblingCode:(NSNumber *)arg1 ;
-(NSNumber *)rssiDbm;
-(void)setCellId:(NSNumber *)arg1 ;
-(NSNumber *)cellId;
-(NSNumber *)mobileCountryCode;
-(NSNumber *)mobileNetworkCode;
-(void)setMobileCountryCode:(NSNumber *)arg1 ;
-(void)setMobileNetworkCode:(NSNumber *)arg1 ;
@end

