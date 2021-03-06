/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKNetworkImageDownloading, FBComponentControllerWorkingRangeListening;
@class FBScenePath, FBFeedToolbox, FBUserSession, FBLocalFeedbackActionHandler, NSString, UIColor;

@interface FBLocalReviewDetailsStoryComponentContext : NSObject {

	id<CKNetworkImageDownloading> _imageDownloader;
	FBScenePath* _scenePath;
	FBFeedToolbox* _toolbox;
	FBUserSession* _session;
	FBLocalFeedbackActionHandler* _actionHandler;
	NSString* _pageId;
	UIColor* _backgroundColor;
	id<FBComponentControllerWorkingRangeListening> _workingRangeListener;

}

@property (nonatomic,readonly) id<CKNetworkImageDownloading> imageDownloader;                                    //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                                          //@synthesize scenePath=_scenePath - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                                          //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBUserSession * session;                                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,readonly) FBLocalFeedbackActionHandler * actionHandler;                                     //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageId;                                                           //@synthesize pageId=_pageId - In the implementation block
@property (nonatomic,copy,readonly) UIColor * backgroundColor;                                                   //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) id<FBComponentControllerWorkingRangeListening> workingRangeListener;              //@synthesize workingRangeListener=_workingRangeListener - In the implementation block
-(id<CKNetworkImageDownloading>)imageDownloader;
-(FBScenePath *)scenePath;
-(FBFeedToolbox *)toolbox;
-(NSString *)pageId;
-(id)initWithImageDownloader:(id)arg1 scenePath:(id)arg2 toolbox:(id)arg3 session:(id)arg4 actionHandler:(id)arg5 pageId:(id)arg6 backgroundColor:(id)arg7 workingRangeListener:(id)arg8 ;
-(id<FBComponentControllerWorkingRangeListening>)workingRangeListener;
-(UIColor *)backgroundColor;
-(FBLocalFeedbackActionHandler *)actionHandler;
-(FBUserSession *)session;
@end

