/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/TBaseStruct.h>
#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBAThriftAnalyticsDeviceStatusBattery : TBaseStruct <TBase, NSCoding> {

	unsigned char __thrift_batteryLevel;
	int __thrift_batteryState;
	BOOL __thrift_batteryLevel_set;
	BOOL __thrift_batteryState_set;

}

@property (assign,nonatomic) unsigned char batteryLevel; 
@property (assign,nonatomic) int batteryState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)toDict;
-(id)initWithBatteryLevel:(unsigned char)arg1 batteryState:(int)arg2 ;
-(BOOL)batteryLevelIsSet;
-(void)unsetBatteryLevel;
-(BOOL)batteryStateIsSet;
-(void)unsetBatteryState;
-(BOOL)makeImmutable;
-(void)setBatteryLevel:(unsigned char)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(int)batteryState;
-(unsigned char)batteryLevel;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)setBatteryState:(int)arg1 ;
-(void)write:(id)arg1 ;
@end
