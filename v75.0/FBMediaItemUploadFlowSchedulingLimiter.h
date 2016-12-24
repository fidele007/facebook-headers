/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBMediaItemUploadFlowSchedulingLimiter : NSObject {

	long long _numOfItemsInUploadQueue;
	long long _numOfItemsInProcessingStep;
	long long _uploadItemsLimit;
	long long _itemsInProcessingStepLimit;
	long long _currentNetworkPenalty;
	int _priority;

}
-(id)initWithPriorityStatus:(int)arg1 ;
-(void)releaseResourceForProcessingQueue;
-(void)itemUploadDidSuceeded;
-(void)releaseResourceForUploadingQueue;
-(void)itemUploadDidFail;
-(void)resetAllQueues;
-(void)setupSchedulingLimitsWith:(int)arg1 ;
-(unsigned long long)numOfItemsToSchedule;
-(void)didScheduleItem;
-(unsigned long long)numOfItemsToUpload;
-(void)didAddItemToUploadQueue;
-(id)description;
@end

