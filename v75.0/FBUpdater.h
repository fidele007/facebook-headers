/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBUpdaterDelegate;
@class NSDate, FBUpdateDataFetcher;

@interface FBUpdater : NSObject {

	unsigned long long _checkInterval;
	NSDate* _lastUpdateDate;
	FBUpdateDataFetcher* _dataFetcher;
	id<FBUpdaterDelegate> _delegate;

}

@property (assign,nonatomic) unsigned long long checkInterval;                   //@synthesize checkInterval=_checkInterval - In the implementation block
@property (nonatomic,readonly) NSDate * lastUpdateDate;                          //@synthesize lastUpdateDate=_lastUpdateDate - In the implementation block
@property (nonatomic,retain) FBUpdateDataFetcher * dataFetcher;                  //@synthesize dataFetcher=_dataFetcher - In the implementation block
@property (assign,nonatomic,__weak) id<FBUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(FBUpdateDataFetcher *)dataFetcher;
-(void)setDataFetcher:(FBUpdateDataFetcher *)arg1 ;
-(id)initWithUserSession:(id)arg1 forceManualUpdate:(BOOL)arg2 ;
-(void)registerDefaultDataFetcherWithUserSession:(id)arg1 ;
-(id)initWithDataFetcher:(id)arg1 delegate:(id)arg2 forceManualUpdate:(BOOL)arg3 ;
-(BOOL)runService;
-(BOOL)forceFetchingData;
-(unsigned long long)checkInterval;
-(void)setCheckInterval:(unsigned long long)arg1 ;
-(void)registerDefaultDelegate;
-(id)registeredDefaultUpdateCoordinator;
-(id)registeredDefaultUpdateController;
-(void)stopService;
-(void)setDelegate:(id<FBUpdaterDelegate>)arg1 ;
-(id<FBUpdaterDelegate>)delegate;
-(NSDate *)lastUpdateDate;
@end
