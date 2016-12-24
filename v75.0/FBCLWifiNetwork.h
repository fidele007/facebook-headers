/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSDate;

@interface FBCLWifiNetwork : NSObject <NSCoding> {

	NSString* _networkName;
	NSString* _networkBSSID;
	NSDate* _timestamp;

}

@property (nonatomic,copy) NSString * networkName;               //@synthesize networkName=_networkName - In the implementation block
@property (nonatomic,copy) NSString * networkBSSID;              //@synthesize networkBSSID=_networkBSSID - In the implementation block
@property (nonatomic,retain) NSDate * timestamp;                 //@synthesize timestamp=_timestamp - In the implementation block
+(id)newConnectedWifi;
-(NSString *)networkBSSID;
-(void)setNetworkBSSID:(NSString *)arg1 ;
-(id)initWithNetworkName:(id)arg1 bssid:(id)arg2 timestamp:(id)arg3 ;
-(NSString *)networkName;
-(void)setNetworkName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
@end

