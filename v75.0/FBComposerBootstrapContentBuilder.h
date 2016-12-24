/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBComposerTraits, FBComposerDestination, FBComposerEntryPointAnalyticsContext, NSAttributedString, NSArray, FBNearbyPlace, CLLocation, NSDictionary, FBComposerAppAttribution, FBTaggableActivityComposition, FBComposerAlbumAttachment, FBComposerProductItemAttachment, FBComposerPostEditingSummary, FBComposerGoodwillCampaignAttachment, FBComposerSelectableDate, FBComposerLifeEventAttachments, FBComposerPostPayload, FBMusicSong, NSDate, FBComposerGroupCommerceLocalMarketInfo, FBComposerSponsor, FBComposerCameraFramesInfo, FBComposerPoll, FBComposerOriginalBootstrapContentBundle, FBComposerInspirationBootstrapContent;

@interface FBComposerBootstrapContentBuilder : NSObject {

	NSString* _compositionID;
	FBComposerTraits* _traits;
	FBComposerDestination* _destination;
	NSString* _contentOrigin;
	NSString* _sourceType;
	FBComposerEntryPointAnalyticsContext* _entryPointAnalyticsContext;
	unsigned long long _postContentType;
	NSString* _parentComposerSessionID;
	NSAttributedString* _statusText;
	NSArray* _attachments;
	FBNearbyPlace* _taggedPlace;
	BOOL _isPlaceUserSelected;
	CLLocation* _location;
	NSDictionary* _extraAnalyticsDataForInitEvent;
	NSDictionary* _extraAnalyticsDataForPostEvent;
	NSString* _reviewPublishMechanism;
	NSString* _reviewPublishSurface;
	unsigned long long _starRating;
	FBComposerAppAttribution* _appAttribution;
	FBTaggableActivityComposition* _taggedActivity;
	NSString* _placeholderText;
	NSArray* _mentions;
	NSArray* _hashtags;
	NSString* _appProvidedHashtag;
	NSArray* _deniedLinks;
	BOOL _userRemovedAllExistingLinks;
	FBComposerAlbumAttachment* _albumAttachment;
	NSArray* _taggedUsersFromWithWho;
	FBComposerProductItemAttachment* _productItemAttachment;
	FBComposerPostEditingSummary* _postEditingSummary;
	FBComposerGoodwillCampaignAttachment* _goodwillCampaignAttachment;
	FBComposerSelectableDate* _lifeEventDate;
	FBComposerLifeEventAttachments* _lifeEventAttachments;
	FBComposerPostPayload* _postPayload;
	FBMusicSong* _song;
	NSDate* _scheduledDate;
	BOOL _publishAsQuestionAndAnswerSession;
	BOOL _isDraftRecovered;
	FBComposerGroupCommerceLocalMarketInfo* _groupCommerceLocalMarketInfo;
	FBComposerSponsor* _taggedSponsor;
	FBComposerCameraFramesInfo* _framesInfo;
	FBComposerPoll* _poll;
	BOOL _postToFeedOnly;
	NSArray* _promptSongAttachmentInfo;
	FBComposerOriginalBootstrapContentBundle* _originalBootstrapContentBundle;
	FBComposerInspirationBootstrapContent* _inspirationBootstrapContent;

}
+(id)composerBootstrapContentFromExistingComposerBootstrapContent:(id)arg1 ;
+(id)composerBootstrapContent;
-(id)withDestination:(id)arg1 ;
-(id)withPlaceholderText:(id)arg1 ;
-(id)withAttachments:(id)arg1 ;
-(id)withTaggedUsersFromWithWho:(id)arg1 ;
-(id)withSourceType:(id)arg1 ;
-(id)withContentOrigin:(id)arg1 ;
-(id)withProductItemAttachment:(id)arg1 ;
-(id)withTaggedPlace:(id)arg1 ;
-(id)withIsPlaceUserSelected:(BOOL)arg1 ;
-(id)withStatusText:(id)arg1 ;
-(id)withTaggedActivity:(id)arg1 ;
-(id)withMentions:(id)arg1 ;
-(id)withHashtags:(id)arg1 ;
-(id)withCompositionID:(id)arg1 ;
-(id)withTaggedSponsor:(id)arg1 ;
-(id)withPostToFeedOnly:(BOOL)arg1 ;
-(id)withTraits:(id)arg1 ;
-(id)withIsDraftRecovered:(BOOL)arg1 ;
-(id)withEntryPointAnalyticsContext:(id)arg1 ;
-(id)withParentComposerSessionID:(id)arg1 ;
-(id)withExtraAnalyticsDataForInitEvent:(id)arg1 ;
-(id)withExtraAnalyticsDataForPostEvent:(id)arg1 ;
-(id)withReviewPublishMechanism:(id)arg1 ;
-(id)withReviewPublishSurface:(id)arg1 ;
-(id)withPostPayload:(id)arg1 ;
-(id)withSong:(id)arg1 ;
-(id)withPromptSongAttachmentInfo:(id)arg1 ;
-(id)withOriginalBootstrapContentBundle:(id)arg1 ;
-(id)withInspirationBootstrapContent:(id)arg1 ;
-(id)withAppProvidedHashtag:(id)arg1 ;
-(id)withAlbumAttachment:(id)arg1 ;
-(id)withDeniedLinks:(id)arg1 ;
-(id)withUserRemovedAllExistingLinks:(BOOL)arg1 ;
-(id)withPostContentType:(unsigned long long)arg1 ;
-(id)withScheduledDate:(id)arg1 ;
-(id)withPublishAsQuestionAndAnswerSession:(BOOL)arg1 ;
-(id)withStarRating:(unsigned long long)arg1 ;
-(id)withPostEditingSummary:(id)arg1 ;
-(id)withAppAttribution:(id)arg1 ;
-(id)withGoodwillCampaignAttachment:(id)arg1 ;
-(id)withLifeEventDate:(id)arg1 ;
-(id)withLifeEventAttachments:(id)arg1 ;
-(id)withGroupCommerceLocalMarketInfo:(id)arg1 ;
-(id)withFramesInfo:(id)arg1 ;
-(id)withPoll:(id)arg1 ;
-(id)withLocation:(id)arg1 ;
-(id)build;
@end

