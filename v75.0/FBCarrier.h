/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:02 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FBCarrier : NSObject {

	BOOL _allowsVOIP;
	NSString* _carrierName;
	NSString* _mobileCountryCode;
	NSString* _mobileNetworkCode;
	NSString* _isoCountryCode;

}

@property (nonatomic,copy,readonly) NSString * carrierName;                    //@synthesize carrierName=_carrierName - In the implementation block
@property (nonatomic,copy,readonly) NSString * mobileCountryCode;              //@synthesize mobileCountryCode=_mobileCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * mobileNetworkCode;              //@synthesize mobileNetworkCode=_mobileNetworkCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * isoCountryCode;                 //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,readonly) BOOL allowsVOIP;                                //@synthesize allowsVOIP=_allowsVOIP - In the implementation block
-(id)initWithCarrier:(id)arg1 ;
-(BOOL)allowsVOIP;
-(NSString *)isoCountryCode;
-(NSString *)mobileCountryCode;
-(NSString *)mobileNetworkCode;
-(NSString *)carrierName;
@end

