/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBKeyValueObjectStore;
@class NSArray, FBComposerDraftRecoveryExperimentContext, FBComposerSavedDraftStoreUpdateListenerAnnouncer;

@interface FBComposerSavedDraftStore : NSObject {

	id<FBKeyValueObjectStore> _diskStore;
	NSArray* _drafts;
	FBComposerDraftRecoveryExperimentContext* _experiment;
	FBComposerSavedDraftStoreUpdateListenerAnnouncer* _updateAnnouncer;

}
-(void)clearDraftWithIdentifier:(id)arg1 ;
-(void)readSavedDraftsWithIdentifier:(id)arg1 removeReturnedDraftAfterRead:(BOOL)arg2 completionCallback:(/*^block*/id)arg3 failureCallback:(/*^block*/id)arg4 ;
-(void)_performDraftUpdateOperation:(/*^block*/id)arg1 failureCallback:(/*^block*/id)arg2 ;
-(void)_updateDraftInMemoryAndWriteToStoreWithOperation:(/*^block*/id)arg1 ;
-(void)saveBootstrapContentAsDraft:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
@end

