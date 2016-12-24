/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, NSString;

@interface FBFundraiserLogger : NSObject {

	NSDictionary* _commonExtras;
	NSString* _analyticsModule;
	NSString* _sessionID;

}

@property (nonatomic,copy) NSDictionary * commonExtras;                      //@synthesize commonExtras=_commonExtras - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;              //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,copy,readonly) NSString * sessionID;                    //@synthesize sessionID=_sessionID - In the implementation block
-(NSString *)analyticsModule;
-(void)logEvent:(id)arg1 extraInfo:(id)arg2 ;
-(void)setCommonExtras:(NSDictionary *)arg1 ;
-(id)initWithAnalyticsModule:(id)arg1 sessionID:(id)arg2 ;
-(id)mergeExtras:(id)arg1 ;
-(NSDictionary *)commonExtras;
-(NSString *)sessionID;
@end

