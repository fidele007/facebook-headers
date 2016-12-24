/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSArray;

@interface FBNewUserExperienceStateRequest : FBNetworkerRequest {

	NSArray* _flows;

}

@property (nonatomic,copy) NSArray * flows;              //@synthesize flows=_flows - In the implementation block
+(id)idForFlow:(unsigned long long)arg1 ;
+(id)userDefaultsKeyForFlow:(unsigned long long)arg1 ;
+(BOOL)hasSeenFlow:(unsigned long long)arg1 session:(id)arg2 ;
-(id)networkRequest;
-(NSArray *)flows;
-(id)initWithFlows:(id)arg1 callbackPerformer:(id)arg2 ;
-(void)setFlows:(NSArray *)arg1 ;
@end
