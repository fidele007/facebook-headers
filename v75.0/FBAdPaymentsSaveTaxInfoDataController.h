/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPaymentsDataLoadingControlling.h>

@class FBUserSession, NSString, FBAdPaymentsSaveTaxInfoRequestsCoordinator, FBPaymentsUpdateListenerAnnouncer, NSMutableArray;

@interface FBAdPaymentsSaveTaxInfoDataController : NSObject <FBPaymentsDataLoadingControlling> {

	FBUserSession* _session;
	NSString* _adAccountId;
	FBAdPaymentsSaveTaxInfoRequestsCoordinator* _requestsCoordinator;
	FBPaymentsUpdateListenerAnnouncer* _updateAnnouncer;
	long long _dataLoadingStatus;
	NSMutableArray* _requestCompletionBlocks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)announcerIdentifier;
-(void)addUpdateListener:(id)arg1 ;
-(void)removeUpdateListener:(id)arg1 ;
-(long long)dataLoadingStatus;
-(void)_setDataLoadingStatus:(long long)arg1 ;
-(id)initWithSession:(id)arg1 adAccountId:(id)arg2 ;
-(void)_triggerSaveTaxInfoRequestWithBusinessCollectedData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)saveTaxInfoWithBusinessCollectedData:(id)arg1 ;
-(void)saveTaxInfoWithBusinessCollectedData:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
@end

