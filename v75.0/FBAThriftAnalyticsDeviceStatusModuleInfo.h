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

@interface FBAThriftAnalyticsDeviceStatusModuleInfo : TBaseStruct <TBase, NSCoding> {

	NSString* __thrift_lastModuleClassName;
	NSString* __thrift_lastModuleName;
	BOOL __thrift_lastModuleClassName_set;
	BOOL __thrift_lastModuleName_set;

}

@property (nonatomic,retain) NSString * lastModuleClassName; 
@property (nonatomic,retain) NSString * lastModuleName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(NSString *)lastModuleClassName;
-(NSString *)lastModuleName;
-(void)setLastModuleClassName:(NSString *)arg1 ;
-(id)toDict;
-(void)setLastModuleName:(NSString *)arg1 ;
-(id)initWithLastModuleClassName:(id)arg1 lastModuleName:(id)arg2 ;
-(BOOL)lastModuleClassNameIsSet;
-(void)unsetLastModuleClassName;
-(BOOL)lastModuleNameIsSet;
-(void)unsetLastModuleName;
-(BOOL)makeImmutable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)validate;
-(void)write:(id)arg1 ;
@end
