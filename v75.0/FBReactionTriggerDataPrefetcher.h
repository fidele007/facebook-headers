/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBReactionDataFetcherListener.h>

@protocol FBReactionTriggerDataPrefetcherDelegate, FBReactionDataFetcherProtocol;
@class FBReactionTriggerData, NSString;

@interface FBReactionTriggerDataPrefetcher : NSObject <FBReactionDataFetcherListener> {

	BOOL _hasFinishedFirstLoad;
	id<FBReactionTriggerDataPrefetcherDelegate> _delegate;
	id<FBReactionDataFetcherProtocol> _dataFetcher;
	unsigned long long _sequenceNumber;
	FBReactionTriggerData* _triggerData;
	/*^block*/id _completionBlock;

}

@property (nonatomic,copy) id completionBlock;                                                         //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionTriggerDataPrefetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) id<FBReactionDataFetcherProtocol> dataFetcher;                          //@synthesize dataFetcher=_dataFetcher - In the implementation block
@property (nonatomic,readonly) unsigned long long sequenceNumber;                                      //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (nonatomic,readonly) FBReactionTriggerData * triggerData;                                    //@synthesize triggerData=_triggerData - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FBReactionDataFetcherProtocol>)dataFetcher;
-(void)_dataFetcher:(id)arg1 didRemoveUnits:(id)arg2 fromLoadedUnits:(id)arg3 ;
-(void)_dataFetcher:(id)arg1 didLoadUnits:(id)arg2 sessionId:(id)arg3 networkTime:(unsigned long long)arg4 hasNextPage:(BOOL)arg5 ;
-(void)dataFetcherWillStartLoading:(id)arg1 userInfo:(id)arg2 ;
-(void)loadFailedForDataFetcher:(id)arg1 sessionId:(id)arg2 cancelled:(BOOL)arg3 error:(id)arg4 userInfo:(id)arg5 ;
-(void)dataFetcher:(id)arg1 didMoveUnit:(id)arg2 toPosition:(unsigned long long)arg3 ;
-(void)dataFetcher:(id)arg1 didAddUnit:(id)arg2 toPosition:(unsigned long long)arg3 ;
-(void)dataFetcher:(id)arg1 didReplaceUnit:(id)arg2 withUnit:(id)arg3 ;
-(void)dataFetcher:(id)arg1 didFailToReloadUnit:(id)arg2 withError:(id)arg3 ;
-(void)dataFetcher:(id)arg1 willAttemptToReloadUnit:(id)arg2 ;
-(void)dataFetcher:(id)arg1 didUpdateExpirationCondition:(id)arg2 ;
-(void)dataFetcher:(id)arg1 didReplaceUnits:(id)arg2 fromLoadedUnits:(id)arg3 withNewUnits:(id)arg4 loadedFromCache:(BOOL)arg5 sessionId:(id)arg6 networkTime:(unsigned long long)arg7 hasNextPage:(BOOL)arg8 userInfo:(id)arg9 ;
-(void)updateCompletionBlock:(/*^block*/id)arg1 ;
-(FBReactionTriggerData *)triggerData;
-(id)initWithDataFetcher:(id)arg1 sequenceNumber:(unsigned long long)arg2 completionBlock:(/*^block*/id)arg3 triggerData:(id)arg4 ;
-(void)setDelegate:(id<FBReactionTriggerDataPrefetcherDelegate>)arg1 ;
-(id<FBReactionTriggerDataPrefetcherDelegate>)delegate;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(unsigned long long)sequenceNumber;
@end

