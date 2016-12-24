/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPermalinkStoryDownloaderDelegate.h>

@protocol FBPermalinkStoryRequestManagerDelegate;
@class NSString, FBUserSession, FBViewerContext, FBPermalinkLogger, FBPermalinkStoryDownloader;

@interface FBPermalinkStoryRequestManager : NSObject <FBPermalinkStoryDownloaderDelegate> {

	NSString* _storyGraphQLID;
	NSString* _storyLegacyAPIPostID;
	unsigned long long _layoutIdiom;
	FBUserSession* _session;
	FBViewerContext* _viewer;
	FBPermalinkLogger* _logger;
	FBPermalinkStoryDownloader* _storyDownloader;
	id<FBPermalinkStoryRequestManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBPermalinkStoryRequestManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)permalinkStoryDownloader:(id)arg1 didFailDownloadWithError:(id)arg2 isCanceled:(BOOL)arg3 ;
-(void)downloadStory;
-(void)permalinkStoryDownloaderWillProcessDownload:(id)arg1 ;
-(void)permalinkStoryDownloader:(id)arg1 didCompleteDownloadForStory:(id)arg2 ;
-(void)permalinkStoryDownloaderCouldNotFindStory:(id)arg1 ;
-(id)initWithStoryGraphQLID:(id)arg1 storyLegacyAPIPostID:(id)arg2 layoutIdiom:(unsigned long long)arg3 session:(id)arg4 viewer:(id)arg5 logger:(id)arg6 ;
-(void)setDelegate:(id<FBPermalinkStoryRequestManagerDelegate>)arg1 ;
-(id<FBPermalinkStoryRequestManagerDelegate>)delegate;
-(void)cancelRequest;
@end

