/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewDataSource.h>
#import <Facebook/FBEventsInviteNetworkedDataSourceProtocol.h>

@protocol FBServiceTransactionMutating, FBEventsInviteDataSourceDelegateProtocolFBEventsPreviouslyInvitedDelegateProtocol;
@class FBMemEvent, FBUserSession, NSArray, FBMemPageInfo, NSString;

@interface FBEventsInviteContactsDataSource : NSObject <UITableViewDataSource, FBEventsInviteNetworkedDataSourceProtocol> {

	FBMemEvent* _event;
	FBUserSession* _session;
	BOOL _isLoading;
	id<FBServiceTransactionMutating> _transaction;
	id<FBEventsInviteDataSourceDelegateProtocol><FBEventsPreviouslyInvitedDelegateProtocol> _delegate;
	NSArray* _inviteCandidates;
	FBMemPageInfo* _connectionPageInfo;

}

@property (assign,nonatomic) BOOL isLoading;                                                                                                       //@synthesize isLoading=_isLoading - In the implementation block
@property (assign,nonatomic,__weak) id<FBEventsInviteDataSourceDelegateProtocol><FBEventsPreviouslyInvitedDelegateProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * inviteCandidates;                                                                                             //@synthesize inviteCandidates=_inviteCandidates - In the implementation block
@property (nonatomic,copy) FBMemPageInfo * connectionPageInfo;                                                                                     //@synthesize connectionPageInfo=_connectionPageInfo - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)loadWithCompletion:(/*^block*/id)arg1 ;
-(id)inviteCandidateAtIndexPath:(id)arg1 ;
-(void)_fetchNextPageWithCompletion:(/*^block*/id)arg1 ;
-(void)handleCachedGraphQLResponse:(id)arg1 willDownloadFreshResponse:(BOOL)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)handleGraphQLResponse:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)loadMoreData;
-(NSArray *)inviteCandidates;
-(id)initWithSession:(id)arg1 event:(id)arg2 ;
-(void)setInviteCandidates:(NSArray *)arg1 ;
-(FBMemPageInfo *)connectionPageInfo;
-(void)setConnectionPageInfo:(FBMemPageInfo *)arg1 ;
-(void)setDelegate:(id<FBEventsInviteDataSourceDelegateProtocol><FBEventsPreviouslyInvitedDelegateProtocol>)arg1 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(id<FBEventsInviteDataSourceDelegateProtocol><FBEventsPreviouslyInvitedDelegateProtocol>)delegate;
-(BOOL)isLoading;
-(void)setIsLoading:(BOOL)arg1 ;
-(BOOL)hasMoreData;
@end

