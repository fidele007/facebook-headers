/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentController.h>

@class FBGraphQLQuery, NSString, FBRootGraphQLQuerySectionComponentListenerAnnouncer, FBConsistentLookasideCacheObservationHandle;

@interface FBRootGraphQLQuerySectionComponentController : FBSectionComponentController {

	FBGraphQLQuery* _query;
	NSString* _keyForModelInResponse;
	BOOL _hasDoneInitialFetch;
	FBRootGraphQLQuerySectionComponentListenerAnnouncer* _graphQLQuerySectionComponentAnnouncer;
	NSString* _asyncActionUUID;
	FBConsistentLookasideCacheObservationHandle* _handle;
	BOOL _isComponentReappear;
	BOOL _isCachedThresholdIgnored;
	id _lastRetrievedModel;

}
-(id)consistentLookasideCache;
-(id)announcer;
-(id)graphQLService;
-(id)viewStateManager;
-(void)componentWillAppear;
-(void)didRequestReload;
-(void)didPullToRefresh;
-(void)componentDidDisappear;
-(void)didRequestPrefetchingData;
-(id)_sendGQLServiceDownloadQuery;
-(void)_gQLServiceCacheRetrievalSucceededWithResponse:(id)arg1 ;
-(void)_markFinishLoadingWithSuccess;
-(void)_gQLServiceDownloadSucceededWithResponse:(id)arg1 ;
-(void)_markFinishLoadingWithError;
-(void)_gQLServiceSucceededWithData:(id)arg1 ;
-(void)_gQLServiceDownloadFailedWithError:(id)arg1 ;
-(void)_modelChanged:(id)arg1 ;
-(void)dealloc;
-(id)configuration;
-(id)logger;
-(void)didLoad;
@end
