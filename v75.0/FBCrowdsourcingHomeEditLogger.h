/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBCrowdsourcingHomeEditModel;

@interface FBCrowdsourcingHomeEditLogger : NSObject {

	NSString* _homeSessionID;
	FBCrowdsourcingHomeEditModel* _model;

}

@property (nonatomic,copy) NSString * homeSessionID;                            //@synthesize homeSessionID=_homeSessionID - In the implementation block
@property (nonatomic,retain) FBCrowdsourcingHomeEditModel * model;              //@synthesize model=_model - In the implementation block
-(id)extraDictionary;
-(void)logEvent:(id)arg1 WithExtraData:(id)arg2 ;
-(NSString *)homeSessionID;
-(void)setHomeSessionID:(NSString *)arg1 ;
-(FBCrowdsourcingHomeEditModel *)model;
-(id)initWithModel:(id)arg1 ;
-(void)setModel:(FBCrowdsourcingHomeEditModel *)arg1 ;
-(void)logEvent:(id)arg1 ;
@end

