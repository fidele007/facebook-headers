/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLDownloadRequest.h>

@class NSString, CLLocation;

@interface FBGraphSearchSingleStateRequest : FBGraphQLDownloadRequest {

	NSString* _rankingModel;
	CLLocation* _location;
	NSString* _singleStateEntityFBID;
	NSString* _webURL;

}

@property (nonatomic,copy) NSString * rankingModel;                       //@synthesize rankingModel=_rankingModel - In the implementation block
@property (nonatomic,retain) CLLocation * location;                       //@synthesize location=_location - In the implementation block
@property (nonatomic,copy) NSString * singleStateEntityFBID;              //@synthesize singleStateEntityFBID=_singleStateEntityFBID - In the implementation block
@property (nonatomic,copy) NSString * webURL;                             //@synthesize webURL=_webURL - In the implementation block
-(id)newQuery;
-(id)_locationInfo;
-(id)_singleStateParams;
-(id)_sourceParams;
-(NSString *)rankingModel;
-(void)setRankingModel:(NSString *)arg1 ;
-(NSString *)singleStateEntityFBID;
-(void)setSingleStateEntityFBID:(NSString *)arg1 ;
-(CLLocation *)location;
-(void)setLocation:(CLLocation *)arg1 ;
-(NSString *)webURL;
-(void)setWebURL:(NSString *)arg1 ;
@end

