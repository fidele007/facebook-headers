/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileSectionsDownloaderDelegate.h>
#import <Facebook/FBStreamListener.h>
#import <Facebook/FBProfileSectionStreamsControllerDelegate.h>
#import <Facebook/FBTimelineDataControllerDelegate.h>
#import <Facebook/FBUnseenStoriesConnectionDownloaderDelegate.h>
#import <Facebook/FBMediaSetStoreManagerListener.h>
#import <Facebook/FBStreamListViewDelegate.h>
#import <Facebook/FBProfileDownloaderProtocol.h>

@protocol FBProfileDownloaderDelegate, FBProfileSectionsDownloader;
@class FBUserSession, FBMemPerson, FBScenePath, NSString, NSObject, FBTimelineDataController, FBContextualTimelineHeaderConfiguration, FBOptimisticPostingController, FBProfileWaitTimeTracker, FBProfileSectionStreamsController, FBMemTimelineSectionsConnection, FBProfileLoadingStateTracker, NSMutableSet, FBUnseenStoriesConnectionDownloader, FBProfileWaterMarkTracker, FBProfileSectionControllerManager, FBProfileAboveStorySectionControllerManager, FBProfileHeaderDownloadStatusListenerAnnouncer, FBTimelineFeedUnitsConnectionController, FBProfileViewerUpdateListenerAnnouncer, FBProfileSectionComponentTracker;

@interface FBProfileDownloader : NSObject <FBProfileSectionsDownloaderDelegate, FBStreamListener, FBProfileSectionStreamsControllerDelegate, FBTimelineDataControllerDelegate, FBUnseenStoriesConnectionDownloaderDelegate, FBMediaSetStoreManagerListener, FBStreamListViewDelegate, FBProfileDownloaderProtocol> {

	FBUserSession* _session;
	FBMemPerson* _person;
	FBScenePath* _scenePath;
	NSString* _analyticsUUID;
	NSObject*<FBProfileDownloaderDelegate> _delegate;
	FBTimelineDataController* _dataController;
	FBContextualTimelineHeaderConfiguration* _configuration;
	FBOptimisticPostingController* _optimisticPostingController;
	FBProfileWaitTimeTracker* _waitTimeTracker;
	id<FBProfileSectionsDownloader> _sectionsDownloader;
	FBProfileSectionStreamsController* _streamsController;
	FBMemTimelineSectionsConnection* _initialTimelineSections;
	FBProfileLoadingStateTracker* _stateTracker;
	NSMutableSet* _processedSectionIDs;
	NSString* _currentSectionID;
	BOOL _hasDisplayedInitialStories;
	BOOL _isViewingSelf;
	BOOL _shouldUseWatermarking;
	BOOL _shouldUseUnseenSection;
	FBMemTimelineSectionsConnection* _pendingDownloadedTimelineSections;
	unsigned long long _pendingNetworkRequestThreshold;
	FBUnseenStoriesConnectionDownloader* _unseenStoriesConnectionDownloader;
	BOOL _isOriginatedFromProfileSurfing;
	BOOL _shouldOmitUnseenStories;
	BOOL _shouldUseTimelineStoriesQuery;
	Class _timelineUnitDownloadRequestClass;
	BOOL _shouldUseSectionComponent;
	FBProfileWaterMarkTracker* _profileWaterMarkTracker;
	FBProfileSectionControllerManager* _sectionControllerManager;
	FBProfileAboveStorySectionControllerManager* _aboveStorySectionControllerManager;
	FBProfileHeaderDownloadStatusListenerAnnouncer* _headerDownloadStatusListenerAnnouncer;
	FBTimelineFeedUnitsConnectionController* _timelineFeedUnitsConnectionController;
	FBProfileViewerUpdateListenerAnnouncer* _viewerUpdateAnnouncer;
	FBProfileSectionComponentTracker* _profileSectionComponentTracker;

}

@property (nonatomic,retain) FBProfileSectionControllerManager * sectionControllerManager;                                        //@synthesize sectionControllerManager=_sectionControllerManager - In the implementation block
@property (nonatomic,retain) FBProfileAboveStorySectionControllerManager * aboveStorySectionControllerManager;                    //@synthesize aboveStorySectionControllerManager=_aboveStorySectionControllerManager - In the implementation block
@property (nonatomic,retain) FBProfileHeaderDownloadStatusListenerAnnouncer * headerDownloadStatusListenerAnnouncer;              //@synthesize headerDownloadStatusListenerAnnouncer=_headerDownloadStatusListenerAnnouncer - In the implementation block
@property (nonatomic,retain) FBTimelineFeedUnitsConnectionController * timelineFeedUnitsConnectionController;                     //@synthesize timelineFeedUnitsConnectionController=_timelineFeedUnitsConnectionController - In the implementation block
@property (nonatomic,retain) FBProfileViewerUpdateListenerAnnouncer * viewerUpdateAnnouncer;                                      //@synthesize viewerUpdateAnnouncer=_viewerUpdateAnnouncer - In the implementation block
@property (nonatomic,retain) FBProfileSectionComponentTracker * profileSectionComponentTracker;                                   //@synthesize profileSectionComponentTracker=_profileSectionComponentTracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stream:(id)arg1 didFinishLoading:(unsigned long long)arg2 withResults:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)stream:(id)arg1 willStartLoading:(unsigned long long)arg2 refreshMode:(id)arg3 requestAnalyticsUUID:(id)arg4 userInfo:(id)arg5 ;
-(void)stream:(id)arg1 didCancelLoading:(unsigned long long)arg2 requestAnalyticsUUID:(id)arg3 ;
-(void)streamListViewDidScrollToBottom:(id)arg1 ;
-(void)streamListViewDidScrollToTop:(id)arg1 ;
-(void)streamListViewDidTriggerPullToRefresh:(id)arg1 ;
-(void)timelineDataController:(id)arg1 targetDidChange:(id)arg2 ;
-(void)timelineDataControllerDidFailSyncing:(id)arg1 ;
-(id)timelineHeaderGraphQLQueriesForTargetID:(id)arg1 ;
-(void)timelineDataController:(id)arg1 didDownloadTimelineSections:(id)arg2 ;
-(void)reloadFirstStory;
-(unsigned long long)timelineHeaderIndexOfGraphQLQueryForConsistentValuesUpdate;
-(void)streamsController:(id)arg1 didCreateStreamForSectionID:(id)arg2 ;
-(void)streamsController:(id)arg1 didRemoveStreamForSectionID:(id)arg2 ;
-(void)_profileVideoDeleted:(id)arg1 ;
-(void)_syncTimelineDataIfNecessaryWithSyncReason:(long long)arg1 downloaderReason:(unsigned long long)arg2 ;
-(id)streamForFirstSection;
-(void)_infiniteScrollAfterStreamExhausted:(id)arg1 ;
-(BOOL)_processedAllSections;
-(void)_checkForLoadingInconsistencyWithLastStream:(id)arg1 ;
-(BOOL)_streamContainsStories:(id)arg1 ;
-(void)_loadMoreSections;
-(void)_processSections:(id)arg1 ;
-(void)_loadStreamHead:(id)arg1 sectionID:(id)arg2 ;
-(void)_displaySection:(id)arg1 ;
-(void)_loadStreamForSectionID:(id)arg1 ;
-(void)_clearCachesForReload;
-(void)_downloadUnseenSection;
-(void)syncDataForReason:(long long)arg1 ;
-(void)_loadStoriesForSectionID:(id)arg1 ;
-(id)_streamForCurrentSection;
-(void)_addStoryControllerStreamListenerForSectionID:(id)arg1 ;
-(void)_loadSectionsBelowHeader;
-(BOOL)_isHeaderFullySynced;
-(void)_downloadTimelineSections:(id)arg1 withNetworkRequestThreshold:(unsigned long long)arg2 ;
-(void)_resumePendingTimelineSectionsDownloading;
-(BOOL)_isSyncingTimelineData;
-(void)updateViewer;
-(void)sectionsDownloader:(id)arg1 sectionDidUpdate:(id)arg2 ;
-(void)sectionsDownloaderDidLoadMoreSections:(id)arg1 ;
-(void)sectionsDownloaderDidLoadYoloTimelineSection:(id)arg1 forSectionID:(id)arg2 ;
-(void)sectionsDownloaderFailedToLoadMoreSections:(id)arg1 error:(id)arg2 ;
-(void)sectionsDownloaderLoadedNoSections:(id)arg1 ;
-(void)timelineDataControllerDidFinishSyncing:(id)arg1 ;
-(void)timelineDataController:(id)arg1 targetDidUpdate:(id)arg2 ;
-(void)unseenStoriesConnectionDownloaderDidFinishDownloading:(id)arg1 ;
-(void)unseenStoriesConnectionDownloader:(id)arg1 didDownloadUseenStoriesEdges:(id)arg2 ;
-(void)mediaSetStoreManager:(id)arg1 didDeleteMediaWithGraphQLIDs:(id)arg2 ;
-(id)initWithSession:(id)arg1 person:(id)arg2 scenePath:(id)arg3 analyticsUUID:(id)arg4 delegate:(id)arg5 optimisticPostingController:(id)arg6 stateTracker:(id)arg7 dataController:(id)arg8 waitTimeTracker:(id)arg9 configuration:(id)arg10 isViewingSelf:(BOOL)arg11 shouldUseWatermarking:(BOOL)arg12 shouldUseUnseenSection:(BOOL)arg13 isOriginatedFromProfileSurfing:(BOOL)arg14 shouldOmitUnseenStories:(BOOL)arg15 shouldUseTimelineStoriesQuery:(BOOL)arg16 shouldUseSectionComponent:(BOOL)arg17 timelineUnitDownloadRequestClass:(Class)arg18 ;
-(id)processedSectionIDs;
-(void)profileWillAppear;
-(void)profileWillDisappear;
-(void)setSectionControllerManager:(FBProfileSectionControllerManager *)arg1 ;
-(FBProfileSectionControllerManager *)sectionControllerManager;
-(FBProfileAboveStorySectionControllerManager *)aboveStorySectionControllerManager;
-(void)setAboveStorySectionControllerManager:(FBProfileAboveStorySectionControllerManager *)arg1 ;
-(FBProfileHeaderDownloadStatusListenerAnnouncer *)headerDownloadStatusListenerAnnouncer;
-(void)setHeaderDownloadStatusListenerAnnouncer:(FBProfileHeaderDownloadStatusListenerAnnouncer *)arg1 ;
-(FBTimelineFeedUnitsConnectionController *)timelineFeedUnitsConnectionController;
-(void)setTimelineFeedUnitsConnectionController:(FBTimelineFeedUnitsConnectionController *)arg1 ;
-(FBProfileViewerUpdateListenerAnnouncer *)viewerUpdateAnnouncer;
-(void)setViewerUpdateAnnouncer:(FBProfileViewerUpdateListenerAnnouncer *)arg1 ;
-(FBProfileSectionComponentTracker *)profileSectionComponentTracker;
-(void)setProfileSectionComponentTracker:(FBProfileSectionComponentTracker *)arg1 ;
-(void)dealloc;
-(id)logName;
-(void)_handleResponse:(id)arg1 ;
@end

