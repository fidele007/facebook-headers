/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBFacecastWithLoggerDataSource;
@interface FBFacecastWithLogger : NSObject {

	id<FBFacecastWithLoggerDataSource> _dataSource;

}

@property (assign,nonatomic,__weak) id<FBFacecastWithLoggerDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(void)_logEvent:(id)arg1 extraBlock:(/*^block*/id)arg2 ;
-(id)_commonExtraDictionary;
-(void)logLiveWithEligibilityForCallWithViewerID:(id)arg1 andHostID:(id)arg2 isEligible:(BOOL)arg3 reasonIfNotEligible:(id)arg4 ;
-(void)setDataSource:(id<FBFacecastWithLoggerDataSource>)arg1 ;
-(id<FBFacecastWithLoggerDataSource>)dataSource;
@end

