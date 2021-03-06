/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBReactionSectionComponentConfiguring.h>

@protocol FBComposerFlowDelegate, FBMemPageCardControllerDelegate, FBReactionStyleMapper, FBReactionLoggingFBReactionExperienceLogging, FBReactionUnitReloaderProtocol;
@class NSString, FBReactionAdapterStateProvider, FBFeedToolbox, FBConnectionSectionComponentSpinnerConfiguration, NSDictionary, FBReactionVPVLoggingType, NSArray;

@interface FBReactionSectionComponentConfiguringObj : NSObject <FBReactionSectionComponentConfiguring> {

	BOOL _enableComponentsForReaction;
	NSString* _analyticsModule;
	NSString* _reactionSessionID;
	unsigned long long _renderIdiom;
	FBReactionAdapterStateProvider* _stateProvider;
	NSString* _referrer;
	id<FBComposerFlowDelegate> _composerFlowDelegate;
	id<FBMemPageCardControllerDelegate> _pageCardControllerDelegate;
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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * analyticsModule;                                                             //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (assign,nonatomic) CGSize cardConstrainedSize;                                                           //@synthesize cardConstrainedSize=_cardConstrainedSize - In the implementation block
@property (nonatomic,copy) NSString * reactionSessionID;                                                           //@synthesize reactionSessionID=_reactionSessionID - In the implementation block
@property (assign,nonatomic) unsigned long long renderIdiom;                                                       //@synthesize renderIdiom=_renderIdiom - In the implementation block
@property (nonatomic,retain) FBReactionAdapterStateProvider * stateProvider;                                       //@synthesize stateProvider=_stateProvider - In the implementation block
@property (nonatomic,copy) NSString * referrer;                                                                    //@synthesize referrer=_referrer - In the implementation block
@property (assign,nonatomic,__weak) id<FBComposerFlowDelegate> composerFlowDelegate;                               //@synthesize composerFlowDelegate=_composerFlowDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<FBMemPageCardControllerDelegate> pageCardControllerDelegate;                //@synthesize pageCardControllerDelegate=_pageCardControllerDelegate - In the implementation block
@property (assign,nonatomic) BOOL enableComponentsForReaction;                                                     //@synthesize enableComponentsForReaction=_enableComponentsForReaction - In the implementation block
@property (assign,nonatomic) long long streamIndicatorType;                                                        //@synthesize streamIndicatorType=_streamIndicatorType - In the implementation block
@property (nonatomic,retain) FBFeedToolbox * feedComponentToolbox;                                                 //@synthesize feedComponentToolbox=_feedComponentToolbox - In the implementation block
@property (nonatomic,retain) FBConnectionSectionComponentSpinnerConfiguration * spinnerConfiguration;              //@synthesize spinnerConfiguration=_spinnerConfiguration - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfo;                                                                //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,retain) id<FBReactionStyleMapper> styleMapper;                                                //@synthesize styleMapper=_styleMapper - In the implementation block
@property (assign,nonatomic) unsigned long long maxNumOfConsecutiveInitialNetworkRequests;                         //@synthesize maxNumOfConsecutiveInitialNetworkRequests=_maxNumOfConsecutiveInitialNetworkRequests - In the implementation block
@property (nonatomic,retain) FBReactionVPVLoggingType * impressionLoggingType;                                     //@synthesize impressionLoggingType=_impressionLoggingType - In the implementation block
@property (nonatomic,retain) id<FBReactionLogging><FBReactionExperienceLogging> logger;                            //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) id firstAppearanceBlock;                                                                //@synthesize firstAppearanceBlock=_firstAppearanceBlock - In the implementation block
@property (nonatomic,retain) id<FBReactionUnitReloaderProtocol> reactionUnitReloader;                              //@synthesize reactionUnitReloader=_reactionUnitReloader - In the implementation block
@property (nonatomic,copy) NSString * loggableName;                                                                //@synthesize loggableName=_loggableName - In the implementation block
@property (nonatomic,copy) NSArray * fetchStatusListeners;                                                         //@synthesize fetchStatusListeners=_fetchStatusListeners - In the implementation block
-(NSString *)analyticsModule;
-(id<FBReactionUnitReloaderProtocol>)reactionUnitReloader;
-(id<FBReactionStyleMapper>)styleMapper;
-(FBFeedToolbox *)feedComponentToolbox;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(NSString *)reactionSessionID;
-(id<FBMemPageCardControllerDelegate>)pageCardControllerDelegate;
-(void)setComposerFlowDelegate:(id<FBComposerFlowDelegate>)arg1 ;
-(void)setPageCardControllerDelegate:(id<FBMemPageCardControllerDelegate>)arg1 ;
-(void)setEnableComponentsForReaction:(BOOL)arg1 ;
-(void)setRenderIdiom:(unsigned long long)arg1 ;
-(void)setCardConstrainedSize:(CGSize)arg1 ;
-(void)setMaxNumOfConsecutiveInitialNetworkRequests:(unsigned long long)arg1 ;
-(void)setImpressionLoggingType:(FBReactionVPVLoggingType *)arg1 ;
-(void)setFeedComponentToolbox:(FBFeedToolbox *)arg1 ;
-(void)setReactionUnitReloader:(id<FBReactionUnitReloaderProtocol>)arg1 ;
-(void)setFetchStatusListeners:(NSArray *)arg1 ;
-(void)setSpinnerConfiguration:(FBConnectionSectionComponentSpinnerConfiguration *)arg1 ;
-(void)setStreamIndicatorType:(long long)arg1 ;
-(void)setReferrer:(NSString *)arg1 ;
-(void)setLoggableName:(NSString *)arg1 ;
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
-(void)setReactionSessionID:(NSString *)arg1 ;
-(FBReactionAdapterStateProvider *)stateProvider;
-(void)setStateProvider:(FBReactionAdapterStateProvider *)arg1 ;
-(long long)streamIndicatorType;
-(void)setStyleMapper:(id<FBReactionStyleMapper>)arg1 ;
-(void)setFirstAppearanceBlock:(id)arg1 ;
-(NSString *)referrer;
-(id)init;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)userInfo;
-(id<FBReactionLogging><FBReactionExperienceLogging>)logger;
-(void)setLogger:(id<FBReactionLogging><FBReactionExperienceLogging>)arg1 ;
@end

