/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:33 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBServiceTransactionMutating, FBNearbyPlacesTypeaheadSuggestionsDownloaderDelegate;
@class FBUserSession;

@interface FBNearbyPlacesTypeaheadSuggestionsDownloader : NSObject {

	id<FBServiceTransactionMutating> _requestToken;
	FBUserSession* _session;
	id<FBNearbyPlacesTypeaheadSuggestionsDownloaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBNearbyPlacesTypeaheadSuggestionsDownloaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_logDebugInfoWithEvent:(id)arg1 searchQuery:(id)arg2 searchLocation:(id)arg3 ;
-(void)fetchRequestWithSearchQuery:(id)arg1 searchLocation:(id)arg2 userLocation:(id)arg3 isPrefetch:(BOOL)arg4 ;
-(void)setDelegate:(id<FBNearbyPlacesTypeaheadSuggestionsDownloaderDelegate>)arg1 ;
-(id<FBNearbyPlacesTypeaheadSuggestionsDownloaderDelegate>)delegate;
-(void)cancelRequest;
-(id)initWithSession:(id)arg1 ;
@end

