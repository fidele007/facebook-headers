/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:56 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTGraphQLRequest : NSObject <TBase, NSCoding> {

	int __requestId;
	long long __queryId;
	NSString* __queryParams;
	BOOL __requestId_isset;
	BOOL __queryId_isset;
	BOOL __queryParams_isset;

}

@property (assign,setter=setRequestId:,getter=requestId,nonatomic) int requestId; 
@property (assign,setter=setQueryId:,getter=queryId,nonatomic) long long queryId; 
@property (setter=setQueryParams:,getter=queryParams,nonatomic,retain) NSString * queryParams; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setQueryParams:(NSString *)arg1 ;
-(id)initWithRequestId:(int)arg1 queryId:(long long)arg2 queryParams:(id)arg3 ;
-(BOOL)requestIdIsSet;
-(void)unsetRequestId;
-(BOOL)queryIdIsSet;
-(void)unsetQueryId;
-(NSString *)queryParams;
-(BOOL)queryParamsIsSet;
-(void)unsetQueryParams;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(void)validate;
-(int)requestId;
-(void)setRequestId:(int)arg1 ;
-(long long)queryId;
-(void)setQueryId:(long long)arg1 ;
-(void)write:(id)arg1 ;
@end

