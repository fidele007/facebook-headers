/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <Facebook/CKComponentProvider.h>
#import <Facebook/CKComponentHostingViewDelegate.h>
#import <Facebook/FBEventsExploreCardComponentDelegate.h>
#import <Facebook/FBEventsDashboardGenericViewDataSource.h>
#import <Facebook/FBEventsExploreControllerProtocol.h>

@protocol FBIntentHandler, FBNavigationCoordinator, FBEventsCarouselDelegate;
@class NSString, NSArray, FBUserSession, FBScenePath, FBFeedToolbox, UIImage, FBEventsDashboardGenericViewDataSource, FBEventsDashboardCardView, FBEventsDiscoveryCarouselView, FBEventAnalyticTracker;

@interface FBEventsExploreCardController : NSObject <UICollectionViewDataSource, UICollectionViewDelegate, CKComponentProvider, CKComponentHostingViewDelegate, FBEventsExploreCardComponentDelegate, FBEventsDashboardGenericViewDataSource, FBEventsExploreControllerProtocol> {

	NSArray* _events;
	NSString* _cutType;
	FBUserSession* _session;
	NSString* _viewerId;
	FBScenePath* _hostingViewControllerScenePath;
	id<FBIntentHandler> _intentHandler;
	id<FBNavigationCoordinator> _navigationCoordinator;
	FBFeedToolbox* _toolbox;
	NSArray* _observationHandles;
	NSString* _analyticsModule;
	long long _exploreCardType;
	NSString* _headerTitleText;
	NSString* _emptyTitleText;
	UIImage* _emptyImage;
	CGSize _itemSize;
	NSString* analyticsFilterName;
	FBEventsDashboardGenericViewDataSource* genericDataSource;
	FBEventsDashboardCardView* _cardView;
	FBEventsDiscoveryCarouselView* _carousel;
	NSString* _analyticsRef;
	id<FBEventsCarouselDelegate> _delegate;
	FBEventAnalyticTracker* _tracker;

}

@property (nonatomic,retain) FBFeedToolbox * toolbox;                                                        //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBEventsDashboardCardView * cardView;                                         //@synthesize cardView=_cardView - In the implementation block
@property (nonatomic,readonly) FBEventsDiscoveryCarouselView * carousel;                                     //@synthesize carousel=_carousel - In the implementation block
@property (nonatomic,copy) NSString * analyticsRef;                                                          //@synthesize analyticsRef=_analyticsRef - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsCarouselDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * cutType;                                                      //@synthesize cutType=_cutType - In the implementation block
@property (nonatomic,copy,readonly) NSString * headerTitleText;                                              //@synthesize headerTitleText=_headerTitleText - In the implementation block
@property (nonatomic,retain) FBEventAnalyticTracker * tracker;                                               //@synthesize tracker=_tracker - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * analyticsFilterName; 
@property (assign,nonatomic,__weak) FBEventsDashboardGenericViewDataSource * genericDataSource; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(FBFeedToolbox *)toolbox;
-(void)componentHostingViewDidInvalidateSize:(id)arg1 ;
-(FBEventAnalyticTracker *)tracker;
-(void)_stopObservingEvents;
-(id)_getAttachmentStoryViewForEvent:(id)arg1 ;
-(void)_startObservingEvents;
-(void)_eventStatusChanged:(id)arg1 ;
-(void)setTracker:(FBEventAnalyticTracker *)arg1 ;
-(void)setToolbox:(FBFeedToolbox *)arg1 ;
-(void)_didTapViewAll:(id)arg1 ;
-(FBEventsDashboardGenericViewDataSource *)genericDataSource;
-(NSString *)analyticsFilterName;
-(id)genericDataSourceGetContentView:(id)arg1 ;
-(void)setAnalyticsFilterName:(NSString *)arg1 ;
-(void)setGenericDataSource:(FBEventsDashboardGenericViewDataSource *)arg1 ;
-(NSString *)cutType;
-(void)_setupCard;
-(void)_didTapFooter:(id)arg1 ;
-(id)_getComponentsToolbox;
-(void)_loadEvents;
-(void)_hideRecommendedEvent:(id)arg1 ;
-(void)configureCardForEvents:(id)arg1 headerTitleText:(id)arg2 emptyTitleText:(id)arg3 emptyImage:(id)arg4 cutType:(id)arg5 footer:(BOOL)arg6 ;
-(void)_prepareCell:(id)arg1 indexPath:(id)arg2 ;
-(void)_reportAndHideEventFromCarousel:(id)arg1 ;
-(void)eventsExploreCardComponent:(id)arg1 didTapNegativeActionForEvent:(id)arg2 ;
-(id)initWithSession:(id)arg1 viewerId:(id)arg2 navigationCoordinator:(id)arg3 intentHandler:(id)arg4 scenePath:(id)arg5 analyticsModule:(id)arg6 exploreCardType:(long long)arg7 tracker:(id)arg8 ;
-(NSString *)analyticsRef;
-(void)setAnalyticsRef:(NSString *)arg1 ;
-(NSString *)headerTitleText;
-(void)setDelegate:(id<FBEventsCarouselDelegate>)arg1 ;
-(void)dealloc;
-(id<FBEventsCarouselDelegate>)delegate;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(FBEventsDashboardCardView *)cardView;
-(FBEventsDiscoveryCarouselView *)carousel;
@end

