/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBGraphQLFragmentService;
@class BFTask, FBGraphQLConsistentLookasideCache;

@interface FBCurrentActorController : NSObject {

	BFTask* _task;
	id<FBGraphQLFragmentService> _graphQLFragmentService;
	FBGraphQLConsistentLookasideCache* _consistentLookasideCache;

}

@property (retain) BFTask * task;                                                                         //@synthesize task=_task - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLFragmentService> graphQLFragmentService;                       //@synthesize graphQLFragmentService=_graphQLFragmentService - In the implementation block
@property (nonatomic,readonly) FBGraphQLConsistentLookasideCache * consistentLookasideCache;              //@synthesize consistentLookasideCache=_consistentLookasideCache - In the implementation block
-(FBGraphQLConsistentLookasideCache *)consistentLookasideCache;
-(id<FBGraphQLFragmentService>)graphQLFragmentService;
-(void)_actorDidUpdate:(id)arg1 ;
-(id)initWithGraphQLFragmentService:(id)arg1 consistentLookasideCache:(id)arg2 ;
-(id)getCurrentActor;
-(BFTask *)task;
-(void)setTask:(BFTask *)arg1 ;
@end
