/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBComposerGIFGraphQLServiceDelegate;
@class FBUserSession;

@interface FBComposerGIFGraphQLService : NSObject {

	id<FBServiceTransactionMutating> _graphQLServiceMutator;
	BOOL _cachedResponse;
	FBUserSession* _session;
	id<FBComposerGIFGraphQLServiceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBComposerGIFGraphQLServiceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_handleResult:(id)arg1 ;
-(void)_handleCachedResponse:(id)arg1 ;
-(void)_handleDownloadResponse:(id)arg1 ;
-(void)_handleFailureResponseWithError:(id)arg1 ;
-(void)loadGIFsWithSearchString:(id)arg1 resultNextCursor:(id)arg2 ;
-(void)cancel;
-(void)setDelegate:(id<FBComposerGIFGraphQLServiceDelegate>)arg1 ;
-(id<FBComposerGIFGraphQLServiceDelegate>)delegate;
-(id)initWithSession:(id)arg1 ;
@end

