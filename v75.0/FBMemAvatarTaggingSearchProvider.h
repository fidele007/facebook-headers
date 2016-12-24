/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBAvatarTaggingSearchProviderProtocol.h>

@protocol FBMemAvatarTaggingSearchProviderDelegate;
@class NSMutableDictionary, NSString, FBKVOController, NSArray, FBUserSession, NSSet;

@interface FBMemAvatarTaggingSearchProvider : NSObject <FBAvatarTaggingSearchProviderProtocol> {

	NSMutableDictionary* _foundAvatars;
	NSString* _query;
	unsigned long long _fetchLimit;
	FBKVOController* _KVOController;
	BOOL _canTagSelf;
	BOOL _fetchingResults;
	NSArray* _avatarCollections;
	FBUserSession* _session;
	NSSet* _excludedIDs;
	NSString* _loggingSessionID;
	id<FBMemAvatarTaggingSearchProviderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMemAvatarTaggingSearchProviderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL canTagSelf;                                                           //@synthesize canTagSelf=_canTagSelf - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSArray * avatarCollections;                                                 //@synthesize avatarCollections=_avatarCollections - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                 //@synthesize session=_session - In the implementation block
@property (nonatomic,copy) NSSet * excludedIDs;                                                         //@synthesize excludedIDs=_excludedIDs - In the implementation block
@property (getter=isFetchingResults,nonatomic,readonly) BOOL fetchingResults;                           //@synthesize fetchingResults=_fetchingResults - In the implementation block
@property (nonatomic,copy) NSString * loggingSessionID;                                                 //@synthesize loggingSessionID=_loggingSessionID - In the implementation block
-(id)initWithCollections:(id)arg1 session:(id)arg2 ;
-(void)setCanTagSelf:(BOOL)arg1 ;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)setExcludedIDs:(NSSet *)arg1 ;
-(void)setAvatarCollections:(NSArray *)arg1 ;
-(BOOL)isFetchingResults;
-(NSArray *)avatarCollections;
-(BOOL)canTagSelf;
-(void)setLoggingSessionID:(NSString *)arg1 ;
-(void)searchForAvatarsWithText:(id)arg1 fetchLimit:(unsigned long long)arg2 flags:(unsigned long long)arg3 ;
-(void)_logLatency:(double)arg1 resultsCount:(long long)arg2 latencyType:(id)arg3 ;
-(void)_foundAvatars:(id)arg1 forSection:(unsigned long long)arg2 ;
-(void)_callCompletion:(/*^block*/id)arg1 ;
-(void)_searchForAvatarsInCollection:(id)arg1 withText:(id)arg2 fetchLimit:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)_taggableCollection:(id)arg1 didAddAvatars:(id)arg2 ;
-(void)_taggableCollectionDidFinishFetching:(id)arg1 ;
-(void)_foundNewAvatars:(id)arg1 forSection:(unsigned long long)arg2 fetchLimit:(unsigned long long)arg3 ;
-(NSString *)loggingSessionID;
-(NSSet *)excludedIDs;
-(void)setDelegate:(id<FBMemAvatarTaggingSearchProviderDelegate>)arg1 ;
-(id)init;
-(id<FBMemAvatarTaggingSearchProviderDelegate>)delegate;
-(void)_reset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(FBUserSession *)session;
@end

