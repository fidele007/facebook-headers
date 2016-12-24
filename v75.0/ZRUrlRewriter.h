/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBUserSessionClassProvidable.h>

@protocol ZRProjectGatingDelegate;
@class ZRApplicationState, ZRTariffedUxSessionManager, FBReachability, LastReachabilityStatus, NSRecursiveLock, NSString;

@interface ZRUrlRewriter : NSObject <FBUserSessionClassProvidable> {

	ZRApplicationState* _zeroRatingState;
	ZRTariffedUxSessionManager* _nonZeroRatedUxSessionManager;
	id<ZRProjectGatingDelegate> _projectGater;
	FBReachability* _reachability;
	LastReachabilityStatus* _lastReachabilityStatus;
	NSRecursiveLock* _sharedZeroTokenDataLock;

}

@property (nonatomic,retain) ZRApplicationState * zeroRatingState;                                   //@synthesize zeroRatingState=_zeroRatingState - In the implementation block
@property (nonatomic,retain) ZRTariffedUxSessionManager * nonZeroRatedUxSessionManager;              //@synthesize nonZeroRatedUxSessionManager=_nonZeroRatedUxSessionManager - In the implementation block
@property (nonatomic,retain) id<ZRProjectGatingDelegate> projectGater;                               //@synthesize projectGater=_projectGater - In the implementation block
@property (nonatomic,retain) FBReachability * reachability;                                          //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) LastReachabilityStatus * lastReachabilityStatus;                        //@synthesize lastReachabilityStatus=_lastReachabilityStatus - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * sharedZeroTokenDataLock;                              //@synthesize sharedZeroTokenDataLock=_sharedZeroTokenDataLock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)whitelistAnyUrl;
+(id)whitelistUrlsWithBlock:(/*^block*/id)arg1 ;
+(BOOL)URLMatchesBootstrapHost:(id)arg1 ;
+(id)rewriteUrl:(id)arg1 withZeroRatingStatus:(int)arg2 andRules:(id)arg3 uxInfo:(id)arg4 lastReachabilityStatus:(id)arg5 activeRegexFound:(BOOL*)arg6 ;
+(BOOL)_url:(id)arg1 isWhitelistedBySessions:(id)arg2 ;
+(void)_reportBadUrl:(id)arg1 lastDeactivatedSession:(id)arg2 lastReachabilityStatus:(id)arg3 ;
+(id)rewriteUrl:(id)arg1 thatMatches:(id)arg2 with:(id)arg3 matchCount:(unsigned long long*)arg4 ;
+(id)whitelistUrlsMatchingRegex:(id)arg1 ;
+(id)instance;
-(id)initWithProviderMapData:(id)arg1 ;
-(ZRApplicationState *)zeroRatingState;
-(void)setZeroRatingState:(ZRApplicationState *)arg1 ;
-(id)initWithZeroRatingState:(id)arg1 nonZeroRatedUxSessionManager:(id)arg2 projectGater:(id)arg3 ;
-(BOOL)urlIsRewritable:(id)arg1 ;
-(BOOL)shouldRewriteUrl:(id)arg1 ;
-(id)rewriteUrl:(id)arg1 ;
-(NSRecursiveLock *)sharedZeroTokenDataLock;
-(void)setSharedZeroTokenDataLock:(NSRecursiveLock *)arg1 ;
-(void)setNonZeroRatedUxSessionManager:(ZRTariffedUxSessionManager *)arg1 ;
-(void)setProjectGater:(id<ZRProjectGatingDelegate>)arg1 ;
-(id)initWithZeroRatingState:(id)arg1 nonZeroRatedUxSessionManager:(id)arg2 projectGater:(id)arg3 reachability:(id)arg4 sharedZeroTokenDataLock:(id)arg5 ;
-(BOOL)_urlShouldSkipRewrite:(id)arg1 withRewriteInfo:(id)arg2 ;
-(id)_rewriteUrl:(id)arg1 withZeroRatingStatus:(int)arg2 andRules:(id)arg3 uxInfo:(id)arg4 lastReachabilityStatus:(id)arg5 error:(id*)arg6 sessions:(id)arg7 ;
-(void)setLastReachabilityStatus:(LastReachabilityStatus *)arg1 ;
-(id)rewriteUrl:(id)arg1 withZeroRatingStatus:(int)arg2 error:(id*)arg3 ;
-(ZRTariffedUxSessionManager *)nonZeroRatedUxSessionManager;
-(id<ZRProjectGatingDelegate>)projectGater;
-(LastReachabilityStatus *)lastReachabilityStatus;
-(void)dealloc;
-(void)reachabilityChanged:(id)arg1 ;
-(FBReachability *)reachability;
-(void)setReachability:(FBReachability *)arg1 ;
@end

