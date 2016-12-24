/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBOutgoingFriendRequestDataSourceDelegate;
@class FBUserSession, FBMemPageInfo, NSMutableArray, NSMutableDictionary;

@interface FBOutgoingFriendRequestDataSource : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _token;
	FBMemPageInfo* _pageInfo;
	NSMutableArray* _loadedRequests;
	NSMutableDictionary* _consistencyHandler;
	id<FBOutgoingFriendRequestDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBOutgoingFriendRequestDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreOutgoingRequests; 
-(id)pageInfo;
-(void)loadTail;
-(void)_loadFinishedWithResponse:(id)arg1 andError:(id)arg2 ;
-(void)loadMoreWithPageInfo:(id)arg1 ;
-(BOOL)hasMoreOutgoingRequests;
-(void)_removeAllOutgoingRequests;
-(void)_addNewOutgoingRequest:(id)arg1 ;
-(void)_addConsistencyObserverForNewPerson:(id)arg1 ;
-(void)_removeConsistencyObserverForNewPerson:(id)arg1 ;
-(void)_personChanged:(id)arg1 ;
-(id)loadedRequests;
-(void)setDelegate:(id<FBOutgoingFriendRequestDataSourceDelegate>)arg1 ;
-(void)reload;
-(id<FBOutgoingFriendRequestDataSourceDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end
