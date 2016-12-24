/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession, FBMemFacecastNuxVideo;

@interface FBFacecastBroadcastNuxFetcher : NSObject {

	FBUserSession* _session;
	FBMemFacecastNuxVideo* _nuxModel;
	unsigned long long _numRetries;

}

@property (getter=isFetched,nonatomic,readonly) BOOL fetched; 
-(BOOL)isFetched;
-(void)fetchNuxWithCallback:(/*^block*/id)arg1 ;
-(void)_nuxQuerySucceededWithCallback:(/*^block*/id)arg1 nuxModel:(id)arg2 ;
-(void)_nuxQueryFailedWithCallback:(/*^block*/id)arg1 ;
-(BOOL)_videoPrefetched;
-(void)_prefetchVideo;
-(id)initWithSession:(id)arg1 ;
@end
