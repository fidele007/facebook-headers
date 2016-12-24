/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating;
@class FBUserSession, NSDictionary, SBMomentsAppInfo;

@interface SBMomentsAppDataSource : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _queryTransaction;
	NSDictionary* _lastResponse;
	SBMomentsAppInfo* _momentsAppInfo;

}

@property (retain) SBMomentsAppInfo * momentsAppInfo;              //@synthesize momentsAppInfo=_momentsAppInfo - In the implementation block
+(id)_appInfoFromResponse:(id)arg1 ;
+(id)_interstitialInfoFromPromotion:(id)arg1 isMomentsInstalled:(BOOL)arg2 ;
+(BOOL)_shoeboxAllowedToBeEnabledFromResponse:(id)arg1 ;
+(BOOL)_hasInstalledMoments;
-(void)_handleError;
-(void)_handleGraphQLResponse:(id)arg1 ;
-(SBMomentsAppInfo *)momentsAppInfo;
-(void)recomputeInfo;
-(void)fetchIfNecessary;
-(void)setMomentsAppInfo:(SBMomentsAppInfo *)arg1 ;
-(id)initWithSession:(id)arg1 ;
@end
