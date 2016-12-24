/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAdPreviewFetcherDelegate;
@class FBUserSession, NSString;

@interface FBAdPreviewFetcher : NSObject {

	FBUserSession* _session;
	NSString* _adPreviewID;
	id<FBAdPreviewFetcherDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBAdPreviewFetcherDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)downloadStory;
-(id)initWithAdPreviewID:(id)arg1 session:(id)arg2 ;
-(void)setDelegate:(id<FBAdPreviewFetcherDelegate>)arg1 ;
-(id<FBAdPreviewFetcherDelegate>)delegate;
@end
