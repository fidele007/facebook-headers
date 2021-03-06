/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSectionComponentChangesetSequence, FBOptimisticPostingSectionComponentUpdateListenerAnnouncer, FBOptimisticPostingSectionComponentListenerAnnouncer, FBOptimisticPostingContainerStateListenerAnnouncer, FBOptimisticPostingFeedListenerAnnouncer, FBOptimisticPostingStreamListenerAnnouncer;

@interface FBOptimisticPostingSectionComponentState : NSObject {

	FBSectionComponentChangesetSequence* _sequence;
	FBOptimisticPostingSectionComponentUpdateListenerAnnouncer* _updateAnnouncer;
	FBOptimisticPostingSectionComponentListenerAnnouncer* _optimisticPostingAnnouncer;
	FBOptimisticPostingContainerStateListenerAnnouncer* _containerStateAnnouncer;
	FBOptimisticPostingFeedListenerAnnouncer* _feedAnnouncer;
	FBOptimisticPostingStreamListenerAnnouncer* _streamAnnouncer;

}

@property (nonatomic,readonly) FBOptimisticPostingSectionComponentUpdateListenerAnnouncer * updateAnnouncer;                   //@synthesize updateAnnouncer=_updateAnnouncer - In the implementation block
@property (nonatomic,readonly) FBOptimisticPostingSectionComponentListenerAnnouncer * optimisticPostingAnnouncer;              //@synthesize optimisticPostingAnnouncer=_optimisticPostingAnnouncer - In the implementation block
@property (nonatomic,readonly) FBOptimisticPostingContainerStateListenerAnnouncer * containerStateAnnouncer;                   //@synthesize containerStateAnnouncer=_containerStateAnnouncer - In the implementation block
@property (nonatomic,readonly) FBOptimisticPostingFeedListenerAnnouncer * feedAnnouncer;                                       //@synthesize feedAnnouncer=_feedAnnouncer - In the implementation block
@property (nonatomic,readonly) FBOptimisticPostingStreamListenerAnnouncer * streamAnnouncer;                                   //@synthesize streamAnnouncer=_streamAnnouncer - In the implementation block
@property (nonatomic,readonly) FBSectionComponentChangesetSequence * sequence;                                                 //@synthesize sequence=_sequence - In the implementation block
-(FBOptimisticPostingSectionComponentListenerAnnouncer *)optimisticPostingAnnouncer;
-(FBOptimisticPostingSectionComponentUpdateListenerAnnouncer *)updateAnnouncer;
-(id)initWithUpdateAnnouncer:(id)arg1 optimisticPostingAnnouncer:(id)arg2 containerStateAnnouncer:(id)arg3 feedAnnouncer:(id)arg4 streamAnnouncer:(id)arg5 sequence:(id)arg6 ;
-(FBOptimisticPostingContainerStateListenerAnnouncer *)containerStateAnnouncer;
-(FBOptimisticPostingFeedListenerAnnouncer *)feedAnnouncer;
-(FBOptimisticPostingStreamListenerAnnouncer *)streamAnnouncer;
-(FBSectionComponentChangesetSequence *)sequence;
@end

