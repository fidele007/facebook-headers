/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBLocalContactSearchFetchRunning, MNSecureThreadReading, OS_dispatch_queue, FBCancelable, FBSecureThreadSearchFetcherDelegate;
@class NSObject, FBContactSearchQuery;

@interface FBSecureThreadSearchFetcher : NSObject {

	id<FBLocalContactSearchFetchRunning> _localContactSearchRunner;
	id<MNSecureThreadReading> _secureThreadReader;
	NSObject*<OS_dispatch_queue> _queue;
	id<FBCancelable> _currentSearchCancelToken;
	FBContactSearchQuery* _currentQuery;
	id<FBSecureThreadSearchFetcherDelegate> _delegate;

}

@property (nonatomic,readonly) FBContactSearchQuery * currentQuery;                                //@synthesize currentQuery=_currentQuery - In the implementation block
@property (assign,nonatomic,__weak) id<FBSecureThreadSearchFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(BOOL)shouldHideResult:(id)arg1 ;
-(id)initWithLocalContactsFetchRunner:(id)arg1 secureThreadReader:(id)arg2 queue:(id)arg3 ;
-(void)performSearchWithQuery:(id)arg1 ;
-(BOOL)isPerformingSearch;
-(void)contactSearchFetchRequest:(id)arg1 didFinishSearchWithSortedUsers:(id)arg2 ;
-(void)contactSearchFetchRequestDidCancel:(id)arg1 ;
-(BOOL)shouldShowNicknameResults;
-(void)_secureThreadReaderFinishedWithResult:(id)arg1 forSearchWithSortedUsers:(id)arg2 ;
-(id)_orderThreadSummaries:(id)arg1 inSameOrderAsSortedUsers:(id)arg2 ;
-(void)_finishWithSecureResults:(id)arg1 ;
-(void)cancel;
-(void)setDelegate:(id<FBSecureThreadSearchFetcherDelegate>)arg1 ;
-(id<FBSecureThreadSearchFetcherDelegate>)delegate;
-(FBContactSearchQuery *)currentQuery;
@end

