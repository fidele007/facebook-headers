/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, FBVideoPlaybackItem, FBMemFeedStory, NSNumber, NSString, FBMemSponsoredData, FBMemVideo;

@interface FBVideoChannelPlaylistItem : NSObject {

	NSArray* _sponsoredImpressionURLs;
	FBVideoPlaybackItem* _videoPlaybackItem;
	NSArray* _trackingCodes;
	BOOL _isMessageExpanded;
	FBMemFeedStory* _originalStory;
	FBMemFeedStory* _videoCreationStory;
	NSNumber* _positionInChannel;
	NSString* _contextTitle;
	NSString* _cursor;

}

@property (nonatomic,readonly) FBMemFeedStory * originalStory;                                                         //@synthesize originalStory=_originalStory - In the implementation block
@property (nonatomic,readonly) FBMemFeedStory * videoCreationStory;                                                    //@synthesize videoCreationStory=_videoCreationStory - In the implementation block
@property (nonatomic,copy,readonly) NSArray * trackingCodes;                                                           //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,readonly) BOOL shouldAutoplay; 
@property (nonatomic,readonly) BOOL isSponsored; 
@property (nonatomic,readonly) BOOL isHidden; 
@property (nonatomic,readonly) FBMemSponsoredData * sponsoredData; 
@property (nonatomic,readonly) FBMemVideo * video; 
@property (nonatomic,readonly) FBVideoPlaybackItem * videoPlaybackItem; 
@property (nonatomic,copy) NSNumber * positionInChannel;                                                               //@synthesize positionInChannel=_positionInChannel - In the implementation block
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedActorFieldsProtocol> videoOwner; 
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedStoryActionLinkFieldsProtocol> videoActionLink; 
@property (nonatomic,copy,readonly) NSString * contextTitle;                                                           //@synthesize contextTitle=_contextTitle - In the implementation block
@property (nonatomic,copy,readonly) NSString * cursor;                                                                 //@synthesize cursor=_cursor - In the implementation block
@property (assign,nonatomic) BOOL isMessageExpanded;                                                                   //@synthesize isMessageExpanded=_isMessageExpanded - In the implementation block
+(id)videoChannelPlaylistItemWithModel:(id)arg1 contextTitle:(id)arg2 cursor:(id)arg3 trackingCodes:(id)arg4 positionInChannel:(id)arg5 ;
-(void)updateFromCLC:(id)arg1 ;
-(FBMemSponsoredData *)sponsoredData;
-(NSArray *)trackingCodes;
-(FBMemFeedStory *)videoCreationStory;
-(id)_videoAttachment;
-(FBVideoPlaybackItem *)videoPlaybackItem;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)videoOwner;
-(FBMemModelObject*<FBQueriedStoryActionLinkFieldsProtocol>)videoActionLink;
-(void)setIsMessageExpanded:(BOOL)arg1 ;
-(NSNumber *)positionInChannel;
-(NSString *)contextTitle;
-(FBMemFeedStory *)originalStory;
-(BOOL)containsStoryWithGraphQLID:(id)arg1 ;
-(void)setPositionInChannel:(NSNumber *)arg1 ;
-(id)gravityWithMaxAspectRatio:(double)arg1 forceToShowAspectFill:(BOOL)arg2 ;
-(BOOL)isMessageExpanded;
-(id)initWithOriginalStory:(id)arg1 videoCreationStory:(id)arg2 contextTitle:(id)arg3 cursor:(id)arg4 trackingCodes:(id)arg5 positionInChannel:(id)arg6 ;
-(id)topFeedbackStory;
-(id)actorsForSocialContext;
-(BOOL)isHidden;
-(id)debugDescription;
-(NSString *)cursor;
-(id)debugInfo;
-(BOOL)shouldAutoplay;
-(BOOL)isSponsored;
-(FBMemVideo *)video;
@end
