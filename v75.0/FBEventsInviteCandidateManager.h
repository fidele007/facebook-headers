/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBEventsInviteCandidateManagerDelegate;
@class NSMutableOrderedSet, NSMutableDictionary, NSArray;

@interface FBEventsInviteCandidateManager : NSObject {

	NSMutableOrderedSet* _orderedSelectedCandidates;
	NSMutableDictionary* _selectedCandidatesMap;
	id<FBEventsInviteCandidateManagerDelegate> _delegate;
	long long _maxSelectionCount;

}

@property (assign,nonatomic,__weak) id<FBEventsInviteCandidateManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long maxSelectionCount;                                             //@synthesize maxSelectionCount=_maxSelectionCount - In the implementation block
@property (nonatomic,copy) NSArray * selectedCandidates; 
@property (nonatomic,readonly) unsigned long long selectedCandidateCount; 
-(id)initWithMaximumSelectionCount:(unsigned long long)arg1 ;
-(void)addCandidateToSelectedList:(id)arg1 ;
-(void)removeCandidateFromInvitedList:(id)arg1 ;
-(NSArray *)selectedCandidates;
-(unsigned long long)selectedCandidateCount;
-(BOOL)isCandidateSelected:(id)arg1 ;
-(long long)maxSelectionCount;
-(void)setSelectedCandidates:(NSArray *)arg1 ;
-(void)addSelectedCandidates:(id)arg1 ;
-(void)setMaxSelectionCount:(long long)arg1 ;
-(void)setDelegate:(id<FBEventsInviteCandidateManagerDelegate>)arg1 ;
-(id<FBEventsInviteCandidateManagerDelegate>)delegate;
@end
