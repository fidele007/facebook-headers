/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBStreamLoadResult.h>

@class NSArray, NSDictionary, FBMemReactionUnitExpirationCondition, NSString;

@interface FBReactionUnitsLoadResult : FBStreamLoadResult {

	NSArray* _reactionUnits;
	NSDictionary* _userData;
	FBMemReactionUnitExpirationCondition* _expirationCondition;
	double _networkTime;
	NSString* _sessionId;

}

@property (nonatomic,copy) NSArray * reactionUnits;                                                 //@synthesize reactionUnits=_reactionUnits - In the implementation block
@property (nonatomic,copy) NSDictionary * userData;                                                 //@synthesize userData=_userData - In the implementation block
@property (nonatomic,copy) FBMemReactionUnitExpirationCondition * expirationCondition;              //@synthesize expirationCondition=_expirationCondition - In the implementation block
@property (assign,nonatomic) double networkTime;                                                    //@synthesize networkTime=_networkTime - In the implementation block
@property (nonatomic,copy) NSString * sessionId;                                                    //@synthesize sessionId=_sessionId - In the implementation block
-(NSArray *)reactionUnits;
-(double)networkTime;
-(void)setNetworkTime:(double)arg1 ;
-(FBMemReactionUnitExpirationCondition *)expirationCondition;
-(void)setReactionUnits:(NSArray *)arg1 ;
-(void)setExpirationCondition:(FBMemReactionUnitExpirationCondition *)arg1 ;
-(NSDictionary *)userData;
-(void)setUserData:(NSDictionary *)arg1 ;
-(NSString *)sessionId;
-(void)setSessionId:(NSString *)arg1 ;
@end

