/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSDictionary;

@interface FBCrowdsourcingCreationRequest : FBNetworkerRequest {

	BOOL _shouldCompress;
	NSDictionary* _parameters;

}

@property (nonatomic,copy,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)networkRequestParametersWithModel:(id)arg1 ;
-(id)networkRequest;
-(id)initWithRequestParameters:(id)arg1 shouldCompress:(BOOL)arg2 callbackPerformer:(id)arg3 ;
-(NSDictionary *)parameters;
@end

