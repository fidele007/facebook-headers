/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class FBGraphQLQuery, NSDictionary, NSString;

@interface FBGraphQLDownloadRequest : FBNetworkerRequest {

	FBGraphQLQuery* _query;
	NSDictionary* _extraQueryParameters;
	NSString* _targetID;

}

@property (nonatomic,copy,readonly) NSString * targetID;                   //@synthesize targetID=_targetID - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryName; 
@property (nonatomic,retain,readonly) FBGraphQLQuery * query; 
-(id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 ;
-(id)newQuery;
-(NSString *)queryName;
-(id)networkRequest;
-(id)initWithQuery:(id)arg1 callbackPerformer:(id)arg2 ;
-(id)extraQueryParameters;
-(id)initWithTargetID:(id)arg1 callbackPerformer:(id)arg2 extraQueryParameters:(id)arg3 ;
-(id)networkRequestForQuery:(id)arg1 withName:(id)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBGraphQLQuery *)query;
-(id)parameters;
-(NSString *)targetID;
@end

