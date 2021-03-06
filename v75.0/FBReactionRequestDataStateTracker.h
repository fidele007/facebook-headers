/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionRequestDataStateTrackerProtocol;
@class FBReactionTriggerData;

@interface FBReactionRequestDataStateTracker : NSObject {

	id<FBReactionRequestDataStateTrackerProtocol> _delegate;
	FBReactionTriggerData* _lastUpdatedTriggerData;

}

@property (assign,nonatomic,__weak) id<FBReactionRequestDataStateTrackerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBReactionTriggerData * lastUpdatedTriggerData;                               //@synthesize lastUpdatedTriggerData=_lastUpdatedTriggerData - In the implementation block
-(void)updateStateForRequestData:(id)arg1 ;
-(BOOL)_triggerDataHasChanged:(id)arg1 ;
-(FBReactionTriggerData *)lastUpdatedTriggerData;
-(void)setLastUpdatedTriggerData:(FBReactionTriggerData *)arg1 ;
-(void)setDelegate:(id<FBReactionRequestDataStateTrackerProtocol>)arg1 ;
-(id<FBReactionRequestDataStateTrackerProtocol>)delegate;
-(id)initWithDelegate:(id)arg1 ;
@end

