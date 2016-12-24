/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:57 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphBatchParticipatingRequest.h>

@class NSDictionary, NSString;

@interface FBFQLRequest : FBGraphBatchParticipatingRequest {

	NSDictionary* _parameters;
	NSDictionary* _queries;
	NSString* _queryName;

}

@property (nonatomic,copy,readonly) NSDictionary * queries;              //@synthesize queries=_queries - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryName;                //@synthesize queryName=_queryName - In the implementation block
-(NSString *)queryName;
-(id)analyticsName;
-(void)setQueryParameter:(id)arg1 forKey:(id)arg2 ;
-(id)initWithFQLQuery:(id)arg1 friendlyName:(id)arg2 callerClass:(Class)arg3 ;
-(id)batchParameters;
-(id)initWithFQLQueries:(id)arg1 friendlyName:(id)arg2 callerClass:(Class)arg3 ;
-(id)initWithFQLQuery:(id)arg1 ;
-(id)initWithFQLQueries:(id)arg1 friendlyName:(id)arg2 callerContext:(id)arg3 ;
-(id)initWithFQLQueries:(id)arg1 ;
-(/*^block*/id)responseHandlerFactory;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)host;
-(id)parameters;
-(id)httpMethod;
-(id)relativePath;
-(NSDictionary *)queries;
@end

