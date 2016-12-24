/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBExperimentContext.h>

@class NSString;

@interface FBScenePathPrioritizationExperimentContext : FBExperimentContext {

	BOOL _feedFineGrainScenePath;
	BOOL _feedFocusedRangeScenePath;
	BOOL _useFeedScenePathContext;
	BOOL _shouldMarkVideo;
	BOOL _cancelInvalidatedDownloads;
	BOOL _alwaysSendHighPriorityRequestsPoorNw;
	BOOL _alwaysSendHighPriorityRequestsGoodNw;
	BOOL _alwaysSendHighPriorityRequestsExcellentNw;
	BOOL _onlySendLowPriorityRequestsWhenIdlePoorNw;
	BOOL _onlySendLowPriorityRequestsWhenIdleGoodNw;
	BOOL _onlySendLowPriorityRequestsWhenIdleExcellentNw;
	unsigned char _ligerRestartTimeoutSeconds;
	int _maxNonTransientFailures;
	int _maxTransientFailures;
	int _numberVirtualLevels;
	unsigned long long _scorePerLCAUnitDistance;
	unsigned long long _siblingNormalizedDistanceWeight;
	unsigned long long _maxLCADistance;
	NSString* _callpathImmediatePriorityOverwrite;
	NSString* _callpathNormalPriorityOverwrite;
	NSString* _callpathLowPriorityOverwrite;
	NSString* _callpathNilScenePathBypass;
	NSString* _callpathScenePathBypass;
	long long _policyCheckDelayMS;
	long long _lowSlotsPoorNw;
	long long _normalSlotsPoorNw;
	long long _immediateSlotsPoorNw;
	long long _lowSlotsGoodNw;
	long long _normalSlotsGoodNw;
	long long _immediateSlotsGoodNw;
	long long _lowSlotsExcellentNw;
	long long _normalSlotsExcellentNw;
	long long _immediateSlotsExcellentNw;
	long long _goodNetworkRtt;
	long long _excellentNetworkRtt;
	NSString* _requestCallPaths;
	NSString* _priorityWeights;

}

@property (nonatomic,readonly) unsigned long long scorePerLCAUnitDistance;                       //@synthesize scorePerLCAUnitDistance=_scorePerLCAUnitDistance - In the implementation block
@property (nonatomic,readonly) unsigned long long siblingNormalizedDistanceWeight;               //@synthesize siblingNormalizedDistanceWeight=_siblingNormalizedDistanceWeight - In the implementation block
@property (nonatomic,readonly) unsigned long long maxLCADistance;                                //@synthesize maxLCADistance=_maxLCADistance - In the implementation block
@property (nonatomic,copy) NSString * callpathImmediatePriorityOverwrite;                        //@synthesize callpathImmediatePriorityOverwrite=_callpathImmediatePriorityOverwrite - In the implementation block
@property (nonatomic,copy) NSString * callpathNormalPriorityOverwrite;                           //@synthesize callpathNormalPriorityOverwrite=_callpathNormalPriorityOverwrite - In the implementation block
@property (nonatomic,copy) NSString * callpathLowPriorityOverwrite;                              //@synthesize callpathLowPriorityOverwrite=_callpathLowPriorityOverwrite - In the implementation block
@property (nonatomic,copy) NSString * callpathNilScenePathBypass;                                //@synthesize callpathNilScenePathBypass=_callpathNilScenePathBypass - In the implementation block
@property (nonatomic,copy) NSString * callpathScenePathBypass;                                   //@synthesize callpathScenePathBypass=_callpathScenePathBypass - In the implementation block
@property (nonatomic,readonly) BOOL feedFineGrainScenePath;                                      //@synthesize feedFineGrainScenePath=_feedFineGrainScenePath - In the implementation block
@property (nonatomic,readonly) BOOL feedFocusedRangeScenePath;                                   //@synthesize feedFocusedRangeScenePath=_feedFocusedRangeScenePath - In the implementation block
@property (nonatomic,readonly) BOOL useFeedScenePathContext;                                     //@synthesize useFeedScenePathContext=_useFeedScenePathContext - In the implementation block
@property (nonatomic,readonly) BOOL shouldMarkVideo;                                             //@synthesize shouldMarkVideo=_shouldMarkVideo - In the implementation block
@property (nonatomic,readonly) BOOL cancelInvalidatedDownloads;                                  //@synthesize cancelInvalidatedDownloads=_cancelInvalidatedDownloads - In the implementation block
@property (nonatomic,readonly) long long policyCheckDelayMS;                                     //@synthesize policyCheckDelayMS=_policyCheckDelayMS - In the implementation block
@property (nonatomic,readonly) long long lowSlotsPoorNw;                                         //@synthesize lowSlotsPoorNw=_lowSlotsPoorNw - In the implementation block
@property (nonatomic,readonly) long long normalSlotsPoorNw;                                      //@synthesize normalSlotsPoorNw=_normalSlotsPoorNw - In the implementation block
@property (nonatomic,readonly) long long immediateSlotsPoorNw;                                   //@synthesize immediateSlotsPoorNw=_immediateSlotsPoorNw - In the implementation block
@property (nonatomic,readonly) long long lowSlotsGoodNw;                                         //@synthesize lowSlotsGoodNw=_lowSlotsGoodNw - In the implementation block
@property (nonatomic,readonly) long long normalSlotsGoodNw;                                      //@synthesize normalSlotsGoodNw=_normalSlotsGoodNw - In the implementation block
@property (nonatomic,readonly) long long immediateSlotsGoodNw;                                   //@synthesize immediateSlotsGoodNw=_immediateSlotsGoodNw - In the implementation block
@property (nonatomic,readonly) long long lowSlotsExcellentNw;                                    //@synthesize lowSlotsExcellentNw=_lowSlotsExcellentNw - In the implementation block
@property (nonatomic,readonly) long long normalSlotsExcellentNw;                                 //@synthesize normalSlotsExcellentNw=_normalSlotsExcellentNw - In the implementation block
@property (nonatomic,readonly) long long immediateSlotsExcellentNw;                              //@synthesize immediateSlotsExcellentNw=_immediateSlotsExcellentNw - In the implementation block
@property (nonatomic,readonly) long long goodNetworkRtt;                                         //@synthesize goodNetworkRtt=_goodNetworkRtt - In the implementation block
@property (nonatomic,readonly) long long excellentNetworkRtt;                                    //@synthesize excellentNetworkRtt=_excellentNetworkRtt - In the implementation block
@property (nonatomic,readonly) BOOL alwaysSendHighPriorityRequestsPoorNw;                        //@synthesize alwaysSendHighPriorityRequestsPoorNw=_alwaysSendHighPriorityRequestsPoorNw - In the implementation block
@property (nonatomic,readonly) BOOL alwaysSendHighPriorityRequestsGoodNw;                        //@synthesize alwaysSendHighPriorityRequestsGoodNw=_alwaysSendHighPriorityRequestsGoodNw - In the implementation block
@property (nonatomic,readonly) BOOL alwaysSendHighPriorityRequestsExcellentNw;                   //@synthesize alwaysSendHighPriorityRequestsExcellentNw=_alwaysSendHighPriorityRequestsExcellentNw - In the implementation block
@property (nonatomic,readonly) BOOL onlySendLowPriorityRequestsWhenIdlePoorNw;                   //@synthesize onlySendLowPriorityRequestsWhenIdlePoorNw=_onlySendLowPriorityRequestsWhenIdlePoorNw - In the implementation block
@property (nonatomic,readonly) BOOL onlySendLowPriorityRequestsWhenIdleGoodNw;                   //@synthesize onlySendLowPriorityRequestsWhenIdleGoodNw=_onlySendLowPriorityRequestsWhenIdleGoodNw - In the implementation block
@property (nonatomic,readonly) BOOL onlySendLowPriorityRequestsWhenIdleExcellentNw;              //@synthesize onlySendLowPriorityRequestsWhenIdleExcellentNw=_onlySendLowPriorityRequestsWhenIdleExcellentNw - In the implementation block
@property (nonatomic,readonly) int maxNonTransientFailures;                                      //@synthesize maxNonTransientFailures=_maxNonTransientFailures - In the implementation block
@property (nonatomic,readonly) int maxTransientFailures;                                         //@synthesize maxTransientFailures=_maxTransientFailures - In the implementation block
@property (nonatomic,readonly) unsigned char ligerRestartTimeoutSeconds;                         //@synthesize ligerRestartTimeoutSeconds=_ligerRestartTimeoutSeconds - In the implementation block
@property (assign,nonatomic) int numberVirtualLevels;                                            //@synthesize numberVirtualLevels=_numberVirtualLevels - In the implementation block
@property (nonatomic,copy) NSString * requestCallPaths;                                          //@synthesize requestCallPaths=_requestCallPaths - In the implementation block
@property (nonatomic,copy) NSString * priorityWeights;                                           //@synthesize priorityWeights=_priorityWeights - In the implementation block
+(id)universeName;
+(id)parameterConfigurations;
-(BOOL)cancelInvalidatedDownloads;
-(unsigned long long)scorePerLCAUnitDistance;
-(unsigned long long)siblingNormalizedDistanceWeight;
-(unsigned long long)maxLCADistance;
-(NSString *)callpathImmediatePriorityOverwrite;
-(NSString *)callpathNormalPriorityOverwrite;
-(NSString *)callpathLowPriorityOverwrite;
-(NSString *)callpathNilScenePathBypass;
-(NSString *)callpathScenePathBypass;
-(long long)lowSlotsPoorNw;
-(long long)normalSlotsPoorNw;
-(long long)immediateSlotsPoorNw;
-(long long)lowSlotsGoodNw;
-(long long)normalSlotsGoodNw;
-(long long)immediateSlotsGoodNw;
-(long long)lowSlotsExcellentNw;
-(long long)normalSlotsExcellentNw;
-(long long)immediateSlotsExcellentNw;
-(BOOL)alwaysSendHighPriorityRequestsPoorNw;
-(BOOL)onlySendLowPriorityRequestsWhenIdlePoorNw;
-(BOOL)alwaysSendHighPriorityRequestsGoodNw;
-(BOOL)onlySendLowPriorityRequestsWhenIdleGoodNw;
-(BOOL)alwaysSendHighPriorityRequestsExcellentNw;
-(BOOL)onlySendLowPriorityRequestsWhenIdleExcellentNw;
-(long long)goodNetworkRtt;
-(long long)excellentNetworkRtt;
-(long long)policyCheckDelayMS;
-(int)maxNonTransientFailures;
-(int)maxTransientFailures;
-(int)numberVirtualLevels;
-(NSString *)requestCallPaths;
-(NSString *)priorityWeights;
-(BOOL)shouldMarkVideo;
-(void)setCallpathImmediatePriorityOverwrite:(NSString *)arg1 ;
-(void)setCallpathNormalPriorityOverwrite:(NSString *)arg1 ;
-(void)setCallpathLowPriorityOverwrite:(NSString *)arg1 ;
-(void)setCallpathNilScenePathBypass:(NSString *)arg1 ;
-(void)setCallpathScenePathBypass:(NSString *)arg1 ;
-(BOOL)feedFineGrainScenePath;
-(BOOL)feedFocusedRangeScenePath;
-(BOOL)useFeedScenePathContext;
-(unsigned char)ligerRestartTimeoutSeconds;
-(void)setNumberVirtualLevels:(int)arg1 ;
-(void)setRequestCallPaths:(NSString *)arg1 ;
-(void)setPriorityWeights:(NSString *)arg1 ;
@end

