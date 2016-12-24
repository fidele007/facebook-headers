/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBGraphQLConnectionSectionComponentListener.h>
#import <Facebook/FBOptimisticPostingSectionComponentListener.h>
#import <Facebook/FBGraphQLConnectionSectionComponentUpdateListener.h>
#import <Facebook/FBOptimisticPostingSectionComponentUpdateListener.h>

@class FBGraphQLConnectionChangesetSequenceService, CKTransactionalComponentDataSourceChangeset, NSString;

@interface FBFeedGraphQLConnectionWithOptimisticPostingSectionComponentController : FBSectionComponentController <FBGraphQLConnectionSectionComponentListener, FBOptimisticPostingSectionComponentListener, FBGraphQLConnectionSectionComponentUpdateListener, FBOptimisticPostingSectionComponentUpdateListener> {

	FBGraphQLConnectionChangesetSequenceService* _connectionService;
	BOOL _waitingForOptimisticPostingRemoval;
	/*^block*/id _storedGraphQLConnectionSectionComponentUpdateBlock;
	CKTransactionalComponentDataSourceChangeset* _storedOptimisticPostingChangeset;

}

@property (nonatomic,copy) id storedGraphQLConnectionSectionComponentUpdateBlock;                                         //@synthesize storedGraphQLConnectionSectionComponentUpdateBlock=_storedGraphQLConnectionSectionComponentUpdateBlock - In the implementation block
@property (nonatomic,retain) CKTransactionalComponentDataSourceChangeset * storedOptimisticPostingChangeset;              //@synthesize storedOptimisticPostingChangeset=_storedOptimisticPostingChangeset - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)toolbox;
-(void)connectionServiceWasInitialized:(id)arg1 ;
-(void)didSuccessfullyPublishStory;
-(void)didSuccessfullyEditStory;
-(id)storedGraphQLConnectionSectionComponentUpdateBlock;
-(CKTransactionalComponentDataSourceChangeset *)storedOptimisticPostingChangeset;
-(void)graphQLConnectionSectionComponent:(id)arg1 shouldBeUpdatedWithBlock:(/*^block*/id)arg2 userInfo:(id)arg3 ;
-(void)optimisticPostingSectionComponent:(id)arg1 shouldUpdateChangeset:(id)arg2 ;
-(void)setStoredGraphQLConnectionSectionComponentUpdateBlock:(id)arg1 ;
-(void)setStoredOptimisticPostingChangeset:(CKTransactionalComponentDataSourceChangeset *)arg1 ;
-(void)didLoad;
@end

