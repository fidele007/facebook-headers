/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLPaginatedConnectionController.h>

@protocol FBGraphQLObjectFactory, FBQueriedNodeFields;
@class NSString, NSArray, FBMemPageInfo, FBUserSession;

@interface FBEventsMemPaginatedCachedConnectionController : NSObject <FBGraphQLPaginatedConnectionController> {

	id<FBGraphQLObjectFactory> _objectFactory;
	NSString* _connectionModelKey;
	NSArray* _currentConnectionContents;
	FBMemPageInfo* _tailPageInfo;
	id<FBQueriedNodeFields> _lastQueriedNode;
	id _lookupHandle;
	BOOL _isInitialLoad;
	BOOL _containsNetworkResponse;
	FBUserSession* _session;
	unsigned long long _networkRequestThresholdInSeconds;

}

@property (nonatomic,retain,readonly) FBUserSession * session;                                   //@synthesize session=_session - In the implementation block
@property (nonatomic,retain,readonly) id<FBQueriedNodeFields> lastQueriedNode; 
@property (nonatomic,readonly) unsigned long long networkRequestThresholdInSeconds;              //@synthesize networkRequestThresholdInSeconds=_networkRequestThresholdInSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)tailPageInfo;
-(id)initWithObjectFactory:(id)arg1 connectionModelKey:(id)arg2 initialObject:(id)arg3 networkRequestThresholdInSeconds:(unsigned long long)arg4 session:(id)arg5 ;
-(id)currentConnectionContents;
-(void)includeDataFromResponseForDownloadRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id<FBQueriedNodeFields>)lastQueriedNode;
-(id)initWithObjectFactory:(id)arg1 connectionModelKey:(id)arg2 networkRequestThresholdInSeconds:(unsigned long long)arg3 session:(id)arg4 ;
-(void)cancelCurrentLookup;
-(void)_clearLookupHandle;
-(void)_includeObjectContainingConnection:(id)arg1 ;
-(void)_setCurrentConnectionContents:(id)arg1 ;
-(void)includeDataFromResponseForQuery:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(unsigned long long)networkRequestThresholdInSeconds;
-(FBUserSession *)session;
@end

