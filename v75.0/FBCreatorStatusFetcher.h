/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBCreatorStatusFetcherDelegate;
@class FBUserSession;

@interface FBCreatorStatusFetcher : NSObject {

	FBUserSession* _session;
	id<FBServiceTransactionMutating> _fetchRequest;
	id<FBCreatorStatusFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBCreatorStatusFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_processFailure:(id)arg1 finalStatus:(id)arg2 ;
-(void)cancelFetch;
-(void)_processResponse:(id)arg1 finalStatus:(id)arg2 creatorIds:(id)arg3 ;
-(void)fetchWithCreatorIds:(id)arg1 ;
-(void)setDelegate:(id<FBCreatorStatusFetcherDelegate>)arg1 ;
-(id<FBCreatorStatusFetcherDelegate>)delegate;
-(BOOL)isFetching;
-(id)initWithSession:(id)arg1 ;
@end
