/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:34 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentFeedToolbox.h>
#import <Facebook/FBVideoCreatorChannelNavigationListener.h>

@protocol FBVideoPlaybackLoggingDataProviderInitializer;
@class FBVideoCreatorChannelAutoScrollController, NSString, FBVideoCreatorChannelNavigationListenerAnnouncer;

@interface FBVideoCreatorChannelToolbox : FBSectionComponentFeedToolbox <FBVideoCreatorChannelNavigationListener> {

	FBVideoCreatorChannelAutoScrollController* _autoScrollController;
	NSString* _playerOrigin;
	NSString* _playerSubOrigin;
	NSString* _channelSessionID;
	NSString* _activeVideoCreatorChannelID;
	id<FBVideoPlaybackLoggingDataProviderInitializer> _loggingProviderInitializer;
	FBVideoCreatorChannelNavigationListenerAnnouncer* _creatorSelectionAnnouncer;

}

@property (nonatomic,readonly) FBVideoCreatorChannelAutoScrollController * autoScrollController;                          //@synthesize autoScrollController=_autoScrollController - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerOrigin;                                                              //@synthesize playerOrigin=_playerOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * playerSubOrigin;                                                           //@synthesize playerSubOrigin=_playerSubOrigin - In the implementation block
@property (nonatomic,copy,readonly) NSString * channelSessionID;                                                          //@synthesize channelSessionID=_channelSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * activeVideoCreatorChannelID;                                               //@synthesize activeVideoCreatorChannelID=_activeVideoCreatorChannelID - In the implementation block
@property (nonatomic,readonly) id<FBVideoPlaybackLoggingDataProviderInitializer> loggingProviderInitializer;              //@synthesize loggingProviderInitializer=_loggingProviderInitializer - In the implementation block
@property (nonatomic,readonly) FBVideoCreatorChannelNavigationListenerAnnouncer * creatorSelectionAnnouncer;              //@synthesize creatorSelectionAnnouncer=_creatorSelectionAnnouncer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(FBVideoCreatorChannelNavigationListenerAnnouncer *)creatorSelectionAnnouncer;
-(void)didSelectVideoCreatorChannel:(id)arg1 ;
-(NSString *)playerOrigin;
-(NSString *)playerSubOrigin;
-(id<FBVideoPlaybackLoggingDataProviderInitializer>)loggingProviderInitializer;
-(NSString *)activeVideoCreatorChannelID;
-(FBVideoCreatorChannelAutoScrollController *)autoScrollController;
-(NSString *)channelSessionID;
-(id)initWithContext:(id)arg1 autoScrollController:(id)arg2 creatorSelectionAnnouncer:(id)arg3 playerOrigin:(id)arg4 playerSubOrigin:(id)arg5 loggingProviderInitializer:(id)arg6 channelSessionID:(id)arg7 feedToolbox:(id)arg8 ;
-(void)dealloc;
@end

