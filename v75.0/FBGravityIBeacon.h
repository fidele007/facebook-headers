/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface FBGravityIBeacon : NSObject {

	long long _state;
	BOOL _monitoring;
	NSString* _uuid;
	NSNumber* _major;
	NSNumber* _minor;
	NSDate* _enterDate;
	NSDate* _exitDate;
	NSDate* _lastSeenDate;
	long long _rssi;

}

@property (copy,readonly) NSString * uuid;                        //@synthesize uuid=_uuid - In the implementation block
@property (copy,readonly) NSNumber * major;                       //@synthesize major=_major - In the implementation block
@property (copy,readonly) NSNumber * minor;                       //@synthesize minor=_minor - In the implementation block
@property (copy) NSDate * enterDate;                              //@synthesize enterDate=_enterDate - In the implementation block
@property (copy) NSDate * exitDate;                               //@synthesize exitDate=_exitDate - In the implementation block
@property (copy) NSDate * lastSeenDate;                           //@synthesize lastSeenDate=_lastSeenDate - In the implementation block
@property (copy,readonly) NSDate * lastBoundaryDate; 
@property (assign) long long rssi;                                //@synthesize rssi=_rssi - In the implementation block
@property (assign) long long state; 
@property (getter=isMonitoring) BOOL monitoring;                  //@synthesize monitoring=_monitoring - In the implementation block
-(id)logExtras;
-(void)setEnterDate:(NSDate *)arg1 ;
-(void)setExitDate:(NSDate *)arg1 ;
-(NSDate *)enterDate;
-(NSDate *)exitDate;
-(id)initWithUUID:(id)arg1 major:(id)arg2 minor:(id)arg3 ;
-(NSDate *)lastBoundaryDate;
-(NSDate *)lastSeenDate;
-(void)setLastSeenDate:(NSDate *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSString *)uuid;
-(void)setMonitoring:(BOOL)arg1 ;
-(void)setRssi:(long long)arg1 ;
-(long long)rssi;
-(NSNumber *)major;
-(NSNumber *)minor;
-(BOOL)isMonitoring;
@end

