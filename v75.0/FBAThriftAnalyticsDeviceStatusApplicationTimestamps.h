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

@interface FBAThriftAnalyticsDeviceStatusApplicationTimestamps : TBaseStruct <TBase, NSCoding> {

	long long __thrift_timeSinceInitInMilliseconds;
	long long __thrift_activeTimeSinceInitInMilliseconds;
	long long __thrift_backgroundTimeSinceInitInMilliseconds;
	BOOL __thrift_timeSinceInitInMilliseconds_set;
	BOOL __thrift_activeTimeSinceInitInMilliseconds_set;
	BOOL __thrift_backgroundTimeSinceInitInMilliseconds_set;

}

@property (assign,nonatomic) long long timeSinceInitInMilliseconds; 
@property (assign,nonatomic) long long activeTimeSinceInitInMilliseconds; 
@property (assign,nonatomic) long long backgroundTimeSinceInitInMilliseconds; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setTimeSinceInitInMilliseconds:(long long)arg1 ;
-(void)setActiveTimeSinceInitInMilliseconds:(long long)arg1 ;
-(void)setBackgroundTimeSinceInitInMilliseconds:(long long)arg1 ;
-(id)toDict;
-(id)initWithTimeSinceInitInMilliseconds:(long long)arg1 activeTimeSinceInitInMilliseconds:(long long)arg2 backgroundTimeSinceInitInMilliseconds:(long long)arg3 ;
-(long long)timeSinceInitInMilliseconds;
-(BOOL)timeSinceInitInMillisecondsIsSet;
-(void)unsetTimeSinceInitInMilliseconds;
-(long long)activeTimeSinceInitInMilliseconds;
-(BOOL)activeTimeSinceInitInMillisecondsIsSet;
-(void)unsetActiveTimeSinceInitInMilliseconds;
-(long long)backgroundTimeSinceInitInMilliseconds;
-(BOOL)backgroundTimeSinceInitInMillisecondsIsSet;
-(void)unsetBackgroundTimeSinceInitInMilliseconds;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end

