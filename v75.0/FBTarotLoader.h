/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBIntentHandler, FBModalPresentationSource;
@class BFTask, NSArray, FBUserSession, FBTarotTransferableCardViewController, FBAnalyticsInfo;

@interface FBTarotLoader : NSObject {

	BFTask* _memModelsAsyncTask;
	BFTask* _entitiesAsyncTask;
	BFTask* _viewControllerAsyncTask;
	NSArray* _digestGraphQLIDs;
	FBUserSession* _session;
	id<FBIntentHandler> _intentHandler;
	id<FBModalPresentationSource> _modalPresentationSource;
	FBTarotTransferableCardViewController* _digestCoverMediaViewController;
	FBAnalyticsInfo* _analyticsInfo;
	/*^block*/id _dismissBlock;

}

@property (nonatomic,copy,readonly) NSArray * digestGraphQLIDs;                                                     //@synthesize digestGraphQLIDs=_digestGraphQLIDs - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                             //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) id<FBIntentHandler> intentHandler;                                                   //@synthesize intentHandler=_intentHandler - In the implementation block
@property (nonatomic,readonly) id<FBModalPresentationSource> modalPresentationSource;                               //@synthesize modalPresentationSource=_modalPresentationSource - In the implementation block
@property (nonatomic,readonly) FBTarotTransferableCardViewController * digestCoverMediaViewController;              //@synthesize digestCoverMediaViewController=_digestCoverMediaViewController - In the implementation block
@property (nonatomic,readonly) FBAnalyticsInfo * analyticsInfo;                                                     //@synthesize analyticsInfo=_analyticsInfo - In the implementation block
@property (nonatomic,copy,readonly) id dismissBlock;                                                                //@synthesize dismissBlock=_dismissBlock - In the implementation block
@property (nonatomic,copy,readonly) BFTask * memModelsAsyncTask;                                                    //@synthesize memModelsAsyncTask=_memModelsAsyncTask - In the implementation block
@property (nonatomic,copy,readonly) BFTask * entitiesAsyncTask;                                                     //@synthesize entitiesAsyncTask=_entitiesAsyncTask - In the implementation block
@property (nonatomic,readonly) BFTask * viewControllerAsyncTask;                                                    //@synthesize viewControllerAsyncTask=_viewControllerAsyncTask - In the implementation block
-(id<FBIntentHandler>)intentHandler;
-(FBAnalyticsInfo *)analyticsInfo;
-(FBTarotTransferableCardViewController *)digestCoverMediaViewController;
-(id<FBModalPresentationSource>)modalPresentationSource;
-(id)dismissBlock;
-(id)initWithDigests:(id)arg1 session:(id)arg2 intentHandler:(id)arg3 modalPresentationSource:(id)arg4 digestCoverMediaViewController:(id)arg5 analyticsInfo:(id)arg6 ;
-(id)initWithDigestGraphQLIDs:(id)arg1 session:(id)arg2 intentHandler:(id)arg3 modalPresentationSource:(id)arg4 digestCoverMediaViewController:(id)arg5 analyticsInfo:(id)arg6 ;
-(id)getViewControllerAsync;
-(BFTask *)entitiesAsyncTask;
-(BFTask *)viewControllerAsyncTask;
-(NSArray *)digestGraphQLIDs;
-(BFTask *)memModelsAsyncTask;
-(void)initiatePrecachingAsync;
-(FBUserSession *)session;
@end
