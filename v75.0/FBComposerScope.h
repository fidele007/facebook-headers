/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerUpdateHandler;
#import <Facebook/Facebook-Structs.h>
@class FBComposerBootstrapContent, FBComposerConfiguration, FBComposerDataUpdateManager, FBComposerFlowDelegateContainer, FBExceptionHandler, FBPublisherManager, FBUserSession, FBComposerVideoCopyrightStatusUpdater, FBComposerPerfLogger, NSMutableDictionary;

@interface FBComposerScope : NSObject {

	FBComposerBootstrapContent* _bootstrapContent;
	FBComposerConfiguration* _configuration;
	FBComposerDataUpdateManager* _dataUpdateManager;
	FBComposerFlowDelegateContainer* _delegateContainer;
	FBExceptionHandler* _exceptionHandler;
	FBPublisherManager* _publisherManager;
	FBUserSession* _session;
	FBComposerVideoCopyrightStatusUpdater* _copyrightStatusUpdater;
	FBComposerPerfLogger* _perfLogger;
	unsigned long long _presentationMode;
	recursive_mutex _lock;
	NSMutableDictionary* _objects;
	BOOL _invalidated;
	lazy_provider<FBComposerScopeSingletonProvider, FBAutoTaggingController *> _autoTaggingControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, UIViewController<FBComposerViewController> *> _composerViewControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, id<FBComposerCompositionStateChangedListeningRegister>> _compositionStateChangedListeningRegisterLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerGroupCommerceCategoryPickerController *> _groupCommerceCategoryPickerControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerGroupCommercePostInterceptController *> _groupCommercePostInterceptControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerDatePickerController *> _lifeEventDatePickerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBCompositionLinkShareController *> _linkShareControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerLifecycleLoggingCoordinator *> _lifecycleLoggingCoordinatorLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerLogger *> _loggerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerMarketplacePostInterceptController *> _marketplacePostInterceptControllerLazyProvider;
	lazy_provider<FBComposerScopeObjectProvider, FBComposerMLEIconPickerController *> _majorLifeEventIconPickerControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBMemModelPhotoTaggingAssetObserver *> _photoTaggingAssetObserverLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerPostCompositionController *> _postCompositionControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerPostOptionsPickerController *> _postOptionsPickerControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBMediaPickerDataSourceManager *> _mediaDataSourceManagerProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBMediaPickerSession *> _mediaPickerSessionLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerMediaPickerTaggingSearchProvider *> _mediaPickerTaggingSearchProviderLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerMoviesEditorManager *> _moviesEditorManagerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBMediaTraitsObserver *> _mediaTraitsObserverProvider;
	lazy_provider<FBComposerScopeSingletonProvider, id<FBMediaUploadItemManagerProtocol>> _mediaUploadItemManagerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerMutableTaggableCollectionProvider *> _taggableCollectionProviderLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBAudienceEducationEligibilityController *> _audienceEducationEligibilityControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerSponsorPickerController *> _sponsorPickerControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerPromptMediaAttachmentPickerController *> _promptMediaAttachmentPickerControllerLazyProvider;
	lazy_provider<FBComposerScopeSingletonProvider, FBComposerVideoTaggingController *> _videoTaggingLazyProvider;
	id<FBComposerUpdateHandler> _updateHandler;

}

@property (nonatomic,readonly) FBPublisherManager * publisherManager;                         //@synthesize publisherManager=_publisherManager - In the implementation block
@property (nonatomic,readonly) FBComposerBootstrapContent * bootstrapContent;                 //@synthesize bootstrapContent=_bootstrapContent - In the implementation block
@property (nonatomic,__weak,readonly) id<FBComposerUpdateHandler> updateHandler;              //@synthesize updateHandler=_updateHandler - In the implementation block
-(FBPublisherManager *)publisherManager;
-(id)valueForKey:(id)arg1 withInitializer:(/*^block*/id)arg2 ;
-(id)compositionStateChangedListeningRegisterFactory;
-(id)mediaDataSourceManagerFactory;
-(id)mediaPickerSessionFactory;
-(id)photoTaggingAssetObserverFactory;
-(id)taggableCollectionProviderFactory;
-(id)lifecycleLoggingCoordinatorFactory;
-(id)autoTaggingControllerFactory;
-(id)mediaTraitsObserverFactory;
-(id)linkShareControllerFactory;
-(id)postCompositionControllerFactory;
-(id)sponsorPickerControllerFactory;
-(id)loggerFactory;
-(id)moviesEditorManagerFactory;
-(id)audienceEducationEligibilityControllerFactory;
-(id)taggingCollectionLoader;
-(id)mediaUploadItemManagerFactory;
-(FBComposerBootstrapContent *)bootstrapContent;
-(id)placePrefetchService;
-(id)activityPrefetchService;
-(id)mediaPickerTaggingSearchProviderFactory;
-(id)composerViewControllerFactory;
-(id)initWithBootstrapContent:(id)arg1 configuration:(id)arg2 userSession:(id)arg3 dataUpdateManager:(id)arg4 exceptionHandler:(id)arg5 delegateContainer:(id)arg6 publisherManager:(id)arg7 startingStyleContext:(id)arg8 presentationMode:(unsigned long long)arg9 ;
-(id)videoTaggingControllerFactory;
-(id)groupCommercePostInterceptControllerFactory;
-(id)marketplacePostInterceptControllerFactory;
-(id)groupCommerceCategoryPickerControllerFactory;
-(id)postOptionsPickerControllerFactory;
-(id)lifeEventDatePickerControllerFactory;
-(id)majorLifeEventIconPickerControllerFactory;
-(id)promptMediaAttachmentPickerControllerFactory;
-(id)_valueForKey:(id)arg1 withInitializer:(/*^block*/id)arg2 ;
-(void)setValue:(id)arg1 forKey:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(id)valueForUndefinedKey:(id)arg1 ;
-(id<FBComposerUpdateHandler>)updateHandler;
@end

