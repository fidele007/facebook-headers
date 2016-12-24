/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBVideoHomeGuideDataFetcherListener.h>

@class FBVideoHomeGuideDataFetcher, NSDate, FBVideoHomeInAppNotificationListenerAnnouncer, NSString;

@interface FBVideoHomeInAppNotificationDataSource : NSObject <FBVideoHomeGuideDataFetcherListener> {

	FBVideoHomeGuideDataFetcher* _dataFetcher;
	NSDate* _lastNotificationDate;
	FBVideoHomeInAppNotificationListenerAnnouncer* _annoucer;

}

@property (nonatomic,retain) NSDate * lastNotificationDate;              //@synthesize lastNotificationDate=_lastNotificationDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addInAppNotificationListener:(id)arg1 ;
-(void)removeInAppNotificationListener:(id)arg1 ;
-(NSDate *)lastNotificationDate;
-(void)setLastNotificationDate:(NSDate *)arg1 ;
-(void)videoHomeGuideDataFetcherWillLoadUnits:(id)arg1 loadType:(unsigned long long)arg2 ;
-(void)videoHomeGuideDataFetcher:(id)arg1 didLoadUnits:(id)arg2 loadType:(unsigned long long)arg3 requestType:(unsigned long long)arg4 error:(id)arg5 ;
-(void)videoHomeGuideDataFetcherDidClearDataAndRequests:(id)arg1 ;
-(void)videoHomeGuideDataFetcherDidMarkDataDirty:(id)arg1 withReason:(id)arg2 ;
-(id)initWithSession:(id)arg1 dataFetcher:(id)arg2 ;
-(void)dealloc;
@end

