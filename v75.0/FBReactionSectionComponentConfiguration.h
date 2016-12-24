/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBComposerFlowDelegate, FBMemPageCardControllerDelegate, FBReactionDataFetcherProtocol, FBReactionStyleMapper, FBReactionLoggingFBReactionExperienceLogging, FBReactionUnitReloaderProtocol;
#import <Facebook/Facebook-Structs.h>
@class NSString, FBReactionAdapterStateProvider, FBFeedToolbox, FBConnectionSectionComponentSpinnerConfiguration, NSDictionary, FBReactionVPVLoggingType, NSArray;

@interface FBReactionSectionComponentConfiguration : NSObject {

	BOOL _enableComponentsForReaction;
	NSString* _surface;
	NSString* _analyticsModule;
	NSString* _reactionSessionID;
	unsigned long long _renderIdiom;
	FBReactionAdapterStateProvider* _stateProvider;
	NSString* _referrer;
	id<FBComposerFlowDelegate> _composerFlowDelegate;
	id<FBMemPageCardControllerDelegate> _pageCardControllerDelegate;
	id<FBReactionDataFetcherProtocol> _reactionDataFetcher;
	long long _streamIndicatorType;
	FBFeedToolbox* _feedComponentToolbox;
	FBConnectionSectionComponentSpinnerConfiguration* _spinnerConfiguration;
	NSDictionary* _userInfo;
	id<FBReactionStyleMapper> _styleMapper;
	unsigned long long _maxNumOfConsecutiveInitialNetworkRequests;
	FBReactionVPVLoggingType* _impressionLoggingType;
	id<FBReactionLogging><FBReactionExperienceLogging> _logger;
	/*^block*/id _firstAppearanceBlock;
	id<FBReactionUnitReloaderProtocol> _reactionUnitReloader;
	NSString* _loggableName;
	NSArray* _fetchStatusListeners;
	CGSize _cardConstrainedSize;

}

@property (nonatomic,copy,readonly) NSString * surface;                                                              //@synthesize surface=_surface - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                                      //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) CGSize cardConstrainedSize;                                                           //@synthesize cardConstrainedSize=_cardConstrainedSize - In the implementation block
@property (nonatomic,copy,readonly) NSString * reactionSessionID;                                                    //@synthesize reactionSessionID=_reactionSessionID - In the implementation block
@property (nonatomic,readonly) unsigned long long renderIdiom;                                                       //@synthesize renderIdiom=_renderIdiom - In the implementation block
@property (nonatomic,readonly) FBReactionAdapterStateProvider * stateProvider;                                       //@synthesize stateProvider=_stateProvider - In the implementation block
@property (nonatomic,copy,readonly) NSString * referrer;                                                             //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,__weak,readonly) id<FBComposerFlowDelegate> composerFlowDelegate;                               //@synthesize composerFlowDelegate=_composerFlowDelegate - In the implementation block
@property (nonatomic,__weak,readonly) id<FBMemPageCardControllerDelegate> pageCardControllerDelegate;                //@synthesize pageCardControllerDelegate=_pageCardControllerDelegate - In the implementation block
@property (nonatomic,readonly) BOOL enableComponentsForReaction;                                                     //@synthesize enableComponentsForReaction=_enableComponentsForReaction - In the implementation block
@property (nonatomic,retain) id<FBReactionDataFetcherProtocol> reactionDataFetcher;                                  //@synthesize reactionDataFetcher=_reactionDataFetcher - In the implementation block
@property (nonatomic,readonly) long long streamIndicatorType;                                                        //@synthesize streamIndicatorType=_streamIndicatorType - In the implementation block
@property (nonatomic,retain) FBFeedToolbox * feedComponentToolbox;                                                   //@synthesize feedComponentToolbox=_feedComponentToolbox - In the implementation block
@property (nonatomic,readonly) FBConnectionSectionComponentSpinnerConfiguration * spinnerConfiguration;              //@synthesize spinnerConfiguration=_spinnerConfiguration - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                                                  //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) id<FBReactionStyleMapper> styleMapper;                                                //@synthesize styleMapper=_styleMapper - In the implementation block
@property (nonatomic,readonly) unsigned long long maxNumOfConsecutiveInitialNetworkRequests;                         //@synthesize maxNumOfConsecutiveInitialNetworkRequests=_maxNumOfConsecutiveInitialNetworkRequests - In the implementation block
@property (nonatomic,readonly) FBReactionVPVLoggingType * impressionLoggingType;                                     //@synthesize impressionLoggingType=_impressionLoggingType - In the implementation block
@property (nonatomic,readonly) id<FBReactionLogging><FBReactionExperienceLogging> logger;                            //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy,readonly) id firstAppearanceBlock;                                                         //@synthesize firstAppearanceBlock=_firstAppearanceBlock - In the implementation block
@property (nonatomic,readonly) id<FBReactionUnitReloaderProtocol> reactionUnitReloader;                              //@synthesize reactionUnitReloader=_reactionUnitReloader - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggableName;                                                         //@synthesize loggableName=_loggableName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * fetchStatusListeners;                                                  //@synthesize fetchStatusListeners=_fetchStatusListeners - In the implementation block
+(id)configurationForSurface:(id)arg1 reactionDataFetcher:(id)arg2 reactionSessionID:(id)arg3 ;
+(id)configurationForSurface:(id)arg1 reactionDataFetcher:(id)arg2 reactionSessionID:(id)arg3 configurationBlock:(/*^block*/id)arg4 ;
-(NSString *)analyticsModule;
-(id<FBReactionUnitReloaderProtocol>)reactionUnitReloader;
-(id<FBReactionStyleMapper>)styleMapper;
-(FBFeedToolbox *)feedComponentToolbox;
-(void)setReactionDataFetcher:(id<FBReactionDataFetcherProtocol>)arg1 ;
-(NSString *)reactionSessionID;
-(id<FBMemPageCardControllerDelegate>)pageCardControllerDelegate;
-(id<FBReactionDataFetcherProtocol>)reactionDataFetcher;
-(void)setFeedComponentToolbox:(FBFeedToolbox *)arg1 ;
-(CGSize)cardConstrainedSize;
-(BOOL)enableComponentsForReaction;
-(unsigned long long)maxNumOfConsecutiveInitialNetworkRequests;
-(FBReactionVPVLoggingType *)impressionLoggingType;
-(unsigned long long)renderIdiom;
-(id<FBComposerFlowDelegate>)composerFlowDelegate;
-(FBConnectionSectionComponentSpinnerConfiguration *)spinnerConfiguration;
-(NSString *)loggableName;
-(NSArray *)fetchStatusListeners;
-(id)firstAppearanceBlock;
-(FBReactionAdapterStateProvider *)stateProvider;
-(long long)streamIndicatorType;
-(NSString *)referrer;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(id<FBReactionLogging><FBReactionExperienceLogging>)logger;
-(NSString *)surface;
@end

