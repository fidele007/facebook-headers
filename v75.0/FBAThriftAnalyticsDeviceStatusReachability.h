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

@interface FBAThriftAnalyticsDeviceStatusReachability : TBaseStruct <TBase, NSCoding> {

	int __thrift_radioTechnology;
	int __thrift_connectionType;
	BOOL __thrift_radioTechnology_set;
	BOOL __thrift_connectionType_set;

}

@property (assign,nonatomic) int radioTechnology; 
@property (assign,nonatomic) int connectionType; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)toDict;
-(id)initWithRadioTechnology:(int)arg1 connectionType:(int)arg2 ;
-(BOOL)radioTechnologyIsSet;
-(void)unsetRadioTechnology;
-(BOOL)connectionTypeIsSet;
-(void)unsetConnectionType;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)setConnectionType:(int)arg1 ;
-(int)connectionType;
-(void)write:(id)arg1 ;
-(int)radioTechnology;
-(void)setRadioTechnology:(int)arg1 ;
@end

