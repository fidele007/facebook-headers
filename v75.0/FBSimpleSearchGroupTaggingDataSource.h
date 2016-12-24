/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSimpleSearchDataSource.h>

@protocol FBServiceTransactionMutating;
@class FBUserSession, NSAttributedString, NSMutableSet, NSMutableArray, NSMutableDictionary, FBKVOController, NSArray, NSSet, NSString;

@interface FBSimpleSearchGroupTaggingDataSource : FBSimpleSearchDataSource {

	FBUserSession* _session;
	NSAttributedString* _groupMembersSectionTitle;
	NSAttributedString* _othersSectionTitle;
	NSMutableSet* _groupMemberAvatars;
	NSMutableArray* _groupMemberQueryResults;
	NSMutableDictionary* _groupMemberQueryResultsCache;
	NSMutableArray* _queryResults;
	FBKVOController* _KVOController;
	id<FBServiceTransactionMutating> _token;
	BOOL _explicitMention;
	BOOL _canTagSelf;
	BOOL _isFetchingGroupMembers;
	unsigned long long _fetchLimit;
	NSArray* _avatarCollections;
	NSSet* _excludedIDs;
	NSString* _authorType;
	NSString* _groupID;

}

@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL explicitMention;                       //@synthesize explicitMention=_explicitMention - In the implementation block
@property (assign,nonatomic) BOOL canTagSelf;                            //@synthesize canTagSelf=_canTagSelf - In the implementation block
@property (nonatomic,readonly) BOOL isFetchingGroupMembers;              //@synthesize isFetchingGroupMembers=_isFetchingGroupMembers - In the implementation block
@property (nonatomic,copy) NSArray * avatarCollections;                  //@synthesize avatarCollections=_avatarCollections - In the implementation block
@property (nonatomic,copy) NSSet * excludedIDs;                          //@synthesize excludedIDs=_excludedIDs - In the implementation block
@property (nonatomic,copy) NSString * authorType;                        //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,copy) NSString * groupID;                           //@synthesize groupID=_groupID - In the implementation block
-(id)createTableViewData:(id)arg1 isIndexAvailable:(BOOL)arg2 ;
-(id)parseServerResponse:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(id)typeaheadRequestForQueryString:(id)arg1 callbackPerformer:(id)arg2 typeaheadSessionID:(id)arg3 ;
-(void)setCanTagSelf:(BOOL)arg1 ;
-(void)setExcludedIDs:(NSSet *)arg1 ;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 ;
-(void)setAvatarCollections:(NSArray *)arg1 ;
-(NSArray *)avatarCollections;
-(BOOL)canTagSelf;
-(id)bootstrapSuggestionsForQueryString:(id)arg1 indexReady:(BOOL*)arg2 ;
-(void)_downloadComposerGroupPublishTarget;
-(void)_updateSectionTitleWith:(id)arg1 ;
-(void)_resetTaggableCollectionAvatarState;
-(BOOL)isFetchingGroupMembers;
-(void)dedupeSuggestions:(id)arg1 ;
-(id)getNullState;
-(BOOL)explicitMention;
-(void)setExplicitMention:(BOOL)arg1 ;
-(NSSet *)excludedIDs;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setQueryString:(id)arg1 ;
-(NSString *)authorType;
-(void)setAuthorType:(NSString *)arg1 ;
-(unsigned long long)fetchLimit;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
@end
