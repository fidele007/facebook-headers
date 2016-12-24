/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerBootstrapContent, FBComposerConfiguration, NSDate, FBComposerAnalyticsPayload, FBComposerActivityAttachment, FBNearbyPlace, NSDictionary, NSArray, CLLocation, FBTaggableActivityComposition, NSString, FBComposerInspirationAudienceData, FBComposerPrivacySetting, FBTypedNSArrayOfFBComposerPrivacySetting, FBComposerAuthor, FBComposerPublishTarget, FBComposerInspirationPublishingBundle, FBComposerEventDate, FBComposerLifeEventAttachments, FBCompositionLinkShare, FBComposerAttachment, FBComposerStorylineAttachment, FBComposerPhotoAutoTaggingState, NSSet, FBComposerPlaceSuggestions, NSMutableDictionary, FBComposerAppAttribution, FBComposerHighlightedText, FBMultiPickerVideoAttachment, FBComposerPostPromptPayload, FBComposerPostInspirationPromptPayload, FBComposerSponsor, FBMSticker, NSAttributedString, FBComposerAwesomeTextStyle, FBComposerPoll, FBComposerVideoAttachment, FBComposerVideoTaggingAnalyticsPayload, FBBoostedComponentCreateData, FBComposerAlbumTracker;

@interface FBComposerCompositionStateMutation : NSObject <NSCopying> {

	unsigned long long _subtype;
	FBComposerBootstrapContent* _bootstrap_bootstrapContent;
	FBComposerConfiguration* _bootstrap_configuration;
	NSDate* _bootstrap_loadedTime;
	FBComposerAnalyticsPayload* _bootstrap_analyticsPayload;
	FBComposerActivityAttachment* _activityAttachmentUpdatedMutation_activityAttachment;
	BOOL _activityAttachmentUpdatedMutation_activityAttachmentRemovedByUser;
	FBNearbyPlace* _activitySharing_taggedPlace;
	FBNearbyPlace* _activitySharing_implicitPlace;
	NSDictionary* _activitySharing_photoTags;
	NSArray* _activitySharing_taggedPeople;
	CLLocation* _activitySharing_location;
	FBTaggableActivityComposition* _activitySharing_taggedActivity;
	NSString* _albumDescription;
	NSString* _albumTitle;
	NSString* _appProvidedHashtag;
	FBComposerInspirationAudienceData* _inspirationAudienceData;
	FBComposerPrivacySetting* _audienceMutation_selectedAudience;
	FBTypedNSArrayOfFBComposerPrivacySetting* _audienceMutation_availablePrivacySettings;
	FBComposerAuthor* _author;
	FBComposerPublishTarget* _containerPublishTargetForMediaCollection;
	BOOL _composerCancelAnalytics_cancelledFromCancellationDialog;
	FBComposerPrivacySetting* _defaultAudienceMutation_defaultAudience;
	NSArray* _defaultAudienceMutation_availablePrivacySettings;
	FBComposerAuthor* _destinationMutation_author;
	FBComposerPublishTarget* _destinationMutation_publishTarget;
	FBComposerPublishTarget* _destinationMutation_containerPublishTargetForMediaCollection;
	BOOL _feedOnlyToggleState;
	FBComposerInspirationPublishingBundle* _inspirationMutation_inspirationPublishingBundle;
	FBComposerPrivacySetting* _inspirationMutation_selectedAudience;
	FBTypedNSArrayOfFBComposerPrivacySetting* _inspirationMutation_availablePrivacySettings;
	BOOL _isImplicitLocationExplicitlyBlockedByUser;
	FBComposerEventDate* _lifeEventDateMutation_eventStartDate;
	FBComposerEventDate* _lifeEventDateMutation_eventEndDate;
	BOOL _lifeEventDateMutation_isCurrentWork;
	BOOL _lifeEventDateMutation_isGraduated;
	FBComposerLifeEventAttachments* _lifeEventTitleOrIconUpdated;
	FBCompositionLinkShare* _linkShareMutation_linkShare;
	NSArray* _linkShareMutation_deniedLinks;
	BOOL _linkShareMutation_userRemovedSharedLink;
	NSString* _linkShareMutation_linkPickerSessionID;
	BOOL _shareOriginalPostMutation_reshareOriginalPost;
	NSString* _removeMediaAttachmentWithAssetID;
	NSArray* _replaceAllExistingMediaAttachments_mediaAttachments;
	NSString* _replaceAllExistingMediaAttachments_magicStoryCollectionIDOrNil;
	FBComposerAttachment* _addSingleMediaAttachment_mediaAttachment;
	NSString* _replaceSingleExistingMediaAttachmentIfExisting_assetID;
	FBComposerAttachment* _replaceSingleExistingMediaAttachmentIfExisting_newMediaAttachment;
	NSDictionary* _replaceMediaAttachmentsWithAssetIDsAndMediaAttachments_assetIDsAndNewAttachments;
	NSString* _mediaAttachmentCaptionMutation_assetID;
	NSString* _mediaAttachmentCaptionMutation_caption;
	NSArray* _mediaAttachmentCaptionMutation_mentions;
	unsigned long long _mediaReorderingMutation_fromIndex;
	unsigned long long _mediaReorderingMutation_toIndex;
	NSArray* _mentions;
	FBComposerStorylineAttachment* _moviesComposition;
	NSArray* _moviesLoadedTaggedUsers;
	FBComposerPhotoAutoTaggingState* _photoAutoTaggingState;
	NSString* _photoTaggingAssetMutation_assetID;
	NSSet* _photoTaggingAssetMutation_tagsEdges;
	FBNearbyPlace* _placeMutation_place;
	CLLocation* _placeMutation_location;
	BOOL _placeMutation_placeIsUserSelected;
	BOOL _placeMutation_suggestedPhoto;
	unsigned long long _placeMutation_placeTaggingState;
	FBComposerPlaceSuggestions* _placeMutation_placeSuggestions;
	FBComposerPlaceSuggestions* _placeSuggestions;
	unsigned long long _placeTaggingState_updatedState;
	NSString* _platformLoadedActionMutation_actionType;
	NSMutableDictionary* _platformLoadedActionMutation_actionParameters;
	NSDictionary* _platformLoadedActionMutation_actionPropertyToCreatedObjectType;
	FBComposerAppAttribution* _platformLoadedAppAttribution;
	NSArray* _platformLoadedImageAttachments;
	NSArray* _platformLoadedOGMediaAttachmentsMutation_ogMediaAttachmentsForUpload;
	NSArray* _platformLoadedOGMediaAttachmentsMutation_ogMediaAttachmentsForDisplay;
	FBNearbyPlace* _platformLoadedPlaceMutation_place;
	BOOL _platformLoadedPlaceMutation_placeIsUserSelected;
	NSString* _platformLoadedRef;
	FBComposerHighlightedText* _platformLoadedRobotext;
	NSArray* _platformLoadedTaggedUsers;
	FBMultiPickerVideoAttachment* _platformLoadedVideoAttachment;
	unsigned long long _postContentTypeMutation_postContentType;
	NSDate* _postContentTypeMutation_date;
	FBComposerPostPromptPayload* _postPromptPayload;
	FBComposerPostInspirationPromptPayload* _postInspirationPayload;
	BOOL _publishAsQuestionAndAnswerSession;
	NSString* _preferredMarketplaceMutation_marketplaceGraphQLID;
	BOOL _preferredMarketplaceMutation_shouldOptInByDefault;
	NSString* _productItemCategoryGraphQLID;
	NSString* _productItemPickupDeliveryInfo;
	NSString* _productItemPriceMutation_productItemPrice;
	NSString* _productItemPriceMutation_productItemCurrency;
	BOOL _productItemShouldPostToMarketplace;
	FBNearbyPlace* _productItemSuggestedPlace;
	NSString* _productItemSuggestedZipCode;
	NSString* _productItemTitle;
	FBComposerPublishTarget* _publishTarget;
	NSArray* _remoteImageAttachments;
	FBComposerSponsor* _removeSponsor;
	FBComposerStorylineAttachment* _removeStorylineAttachment;
	FBMSticker* _removeStickerAttachment;
	FBComposerStorylineAttachment* _replaceStorylineAttachmentWithMediaAttachments_storylineAttachment;
	NSArray* _replaceStorylineAttachmentWithMediaAttachments_mediaAttachments;
	unsigned long long _selectedStarRating;
	BOOL _shouldCreateProfileBadge;
	NSAttributedString* _statusTextMutation_statusText;
	unsigned long long _statusTextMutation_changeSource;
	NSArray* _statusTextMutation_mentions;
	NSArray* _statusTextMutation_hashtags;
	NSAttributedString* _statusTextMutation_inComposerSearchQueryText;
	FBComposerAwesomeTextStyle* _statusTextMutation_style;
	NSArray* _stickers;
	FBTaggableActivityComposition* _taggableActivityComposition;
	BOOL _targeting;
	NSArray* _withTagsMutation_withTags;
	NSDictionary* _withTagsMutation_photoTags;
	BOOL _withTagsMutation_tagsAreUserSelected;
	FBComposerPoll* _poll;
	FBComposerSponsor* _sponsor;
	FBComposerVideoAttachment* _videoAttachmentMutation;
	NSString* _videoTaggingAssetMutation_assetID;
	NSSet* _videoTaggingAssetMutation_tagItems;
	FBComposerVideoTaggingAnalyticsPayload* _videoTaggingAnalytics_analyticsPayload;
	FBBoostedComponentCreateData* _boostedComponentData;
	FBComposerAlbumTracker* _albumTracker;

}
+(id)audienceTouchedByUser;
+(id)removeMediaAttachmentWithAssetID:(id)arg1 ;
+(id)replaceSingleExistingMediaAttachmentIfExistingWithAssetID:(id)arg1 newMediaAttachment:(id)arg2 ;
+(id)replaceStorylineAttachmentWithMediaAttachmentsWithStorylineAttachment:(id)arg1 mediaAttachments:(id)arg2 ;
+(id)placeMutationWithPlace:(id)arg1 location:(id)arg2 placeIsUserSelected:(BOOL)arg3 suggestedPhoto:(BOOL)arg4 placeTaggingState:(unsigned long long)arg5 placeSuggestions:(id)arg6 ;
+(id)shareOriginalPostMutationWithReshareOriginalPost:(BOOL)arg1 ;
+(id)removeStickerAttachment:(id)arg1 ;
+(id)removeStorylineAttachment:(id)arg1 ;
+(id)albumTitle:(id)arg1 ;
+(id)albumDescription:(id)arg1 ;
+(id)shouldCreateProfileBadge:(BOOL)arg1 ;
+(id)productItemPriceMutationWithProductItemPrice:(id)arg1 productItemCurrency:(id)arg2 ;
+(id)productItemShouldPostToMarketplace:(BOOL)arg1 ;
+(id)productItemTitle:(id)arg1 ;
+(id)productItemPickupDeliveryInfo:(id)arg1 ;
+(id)isImplicitLocationExplicitlyBlockedByUser:(BOOL)arg1 ;
+(id)audienceMutationWithSelectedAudience:(id)arg1 availablePrivacySettings:(id)arg2 ;
+(id)lifeEventTitleOrIconUpdated:(id)arg1 ;
+(id)poll:(id)arg1 ;
+(id)publishAsQuestionAndAnswerSession:(BOOL)arg1 ;
+(id)selectedStarRating:(unsigned long long)arg1 ;
+(id)mentions:(id)arg1 ;
+(id)appProvidedHashtag:(id)arg1 ;
+(id)feedOnlyToggleState:(BOOL)arg1 ;
+(id)statusTextMutationWithStatusText:(id)arg1 changeSource:(unsigned long long)arg2 mentions:(id)arg3 hashtags:(id)arg4 inComposerSearchQueryText:(id)arg5 style:(id)arg6 ;
+(id)linkShareMutationWithLinkShare:(id)arg1 deniedLinks:(id)arg2 userRemovedSharedLink:(BOOL)arg3 linkPickerSessionID:(id)arg4 ;
+(id)activityAttachmentUpdatedMutationWithActivityAttachment:(id)arg1 activityAttachmentRemovedByUser:(BOOL)arg2 ;
+(id)mediaAttachmentCaptionMutationWithAssetID:(id)arg1 caption:(id)arg2 mentions:(id)arg3 ;
+(id)togglePublishAsQuestionAndAnswerSession;
+(id)productItemSuggestedPlace:(id)arg1 ;
+(id)productItemSuggestedZipCode:(id)arg1 ;
+(id)preferredMarketplaceMutationWithMarketplaceGraphQLID:(id)arg1 shouldOptInByDefault:(BOOL)arg2 ;
+(id)addSingleMediaAttachmentWithMediaAttachment:(id)arg1 ;
+(id)replaceAllExistingMediaAttachmentsWithMediaAttachments:(id)arg1 magicStoryCollectionIDOrNil:(id)arg2 ;
+(id)videoTaggingAssetMutationWithAssetID:(id)arg1 tagItems:(id)arg2 ;
+(id)lifeEventRelationshipUpdated;
+(id)inspirationAudienceData:(id)arg1 ;
+(id)postPromptPayload:(id)arg1 ;
+(id)postInspirationPayload:(id)arg1 ;
+(id)inspirationMutationWithInspirationPublishingBundle:(id)arg1 selectedAudience:(id)arg2 availablePrivacySettings:(id)arg3 ;
+(id)destinationMutationWithAuthor:(id)arg1 publishTarget:(id)arg2 containerPublishTargetForMediaCollection:(id)arg3 ;
+(id)publishTarget:(id)arg1 ;
+(id)albumTracker:(id)arg1 ;
+(id)activitySharingWithTaggedPlace:(id)arg1 implicitPlace:(id)arg2 photoTags:(id)arg3 taggedPeople:(id)arg4 location:(id)arg5 taggedActivity:(id)arg6 ;
+(id)placeTaggingStateWithUpdatedState:(unsigned long long)arg1 ;
+(id)stickers:(id)arg1 ;
+(id)taggableActivityComposition:(id)arg1 ;
+(id)withTagsMutationWithWithTags:(id)arg1 photoTags:(id)arg2 tagsAreUserSelected:(BOOL)arg3 ;
+(id)placeSuggestions:(id)arg1 ;
+(id)moviesComposition:(id)arg1 ;
+(id)moviesLoadedTaggedUsers:(id)arg1 ;
+(id)replaceMediaAttachmentsWithAssetIDsAndMediaAttachmentsWithAssetIDsAndNewAttachments:(id)arg1 ;
+(id)targeting:(BOOL)arg1 ;
+(id)defaultAudienceMutationWithDefaultAudience:(id)arg1 availablePrivacySettings:(id)arg2 ;
+(id)videoTaggingAnalyticsWithAnalyticsPayload:(id)arg1 ;
+(id)lifeEventDateMutationWithEventStartDate:(id)arg1 eventEndDate:(id)arg2 isCurrentWork:(BOOL)arg3 isGraduated:(BOOL)arg4 ;
+(id)productItemCategoryGraphQLID:(id)arg1 ;
+(id)postContentTypeMutationWithPostContentType:(unsigned long long)arg1 date:(id)arg2 ;
+(id)removeSponsor:(id)arg1 ;
+(id)sponsor:(id)arg1 ;
+(id)videoAttachmentMutation:(id)arg1 ;
+(id)composerCancelAnalyticsWithCancelledFromCancellationDialog:(BOOL)arg1 ;
+(id)remoteImageAttachments:(id)arg1 ;
+(id)bootstrapWithBootstrapContent:(id)arg1 configuration:(id)arg2 loadedTime:(id)arg3 analyticsPayload:(id)arg4 ;
+(id)platformLoadedActionMutationWithActionType:(id)arg1 actionParameters:(id)arg2 actionPropertyToCreatedObjectType:(id)arg3 ;
+(id)platformLoadedAppAttribution:(id)arg1 ;
+(id)platformLoadedOGMediaAttachmentsMutationWithOgMediaAttachmentsForUpload:(id)arg1 ogMediaAttachmentsForDisplay:(id)arg2 ;
+(id)platformLoadedImageAttachments:(id)arg1 ;
+(id)platformLoadedPlaceMutationWithPlace:(id)arg1 placeIsUserSelected:(BOOL)arg2 ;
+(id)platformLoadedRef:(id)arg1 ;
+(id)platformLoadedRobotext:(id)arg1 ;
+(id)platformLoadedTaggedUsers:(id)arg1 ;
+(id)platformLoadedVideoAttachment:(id)arg1 ;
+(id)author:(id)arg1 ;
+(id)photoAutoTaggingState:(id)arg1 ;
+(id)photoTaggingAssetMutationWithAssetID:(id)arg1 tagsEdges:(id)arg2 ;
+(id)boostedComponentData:(id)arg1 ;
+(id)containerPublishTargetForMediaCollection:(id)arg1 ;
+(id)mediaReorderingMutationWithFromIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
+(id)clearContent;
-(void)matchBootstrap:(/*^block*/id)arg1 activityAttachmentUpdatedMutation:(/*^block*/id)arg2 activitySharing:(/*^block*/id)arg3 albumDescription:(/*^block*/id)arg4 albumTitle:(/*^block*/id)arg5 appProvidedHashtag:(/*^block*/id)arg6 inspirationAudienceData:(/*^block*/id)arg7 audienceMutation:(/*^block*/id)arg8 audienceTouchedByUser:(/*^block*/id)arg9 author:(/*^block*/id)arg10 clearContent:(/*^block*/id)arg11 containerPublishTargetForMediaCollection:(/*^block*/id)arg12 composerCancelAnalytics:(/*^block*/id)arg13 defaultAudienceMutation:(/*^block*/id)arg14 destinationMutation:(/*^block*/id)arg15 feedOnlyToggleState:(/*^block*/id)arg16 inspirationMutation:(/*^block*/id)arg17 isImplicitLocationExplicitlyBlockedByUser:(/*^block*/id)arg18 lifeEventDateMutation:(/*^block*/id)arg19 lifeEventRelationshipUpdated:(/*^block*/id)arg20 lifeEventTitleOrIconUpdated:(/*^block*/id)arg21 linkShareMutation:(/*^block*/id)arg22 shareOriginalPostMutation:(/*^block*/id)arg23 removeMediaAttachmentWithAssetID:(/*^block*/id)arg24 replaceAllExistingMediaAttachments:(/*^block*/id)arg25 addSingleMediaAttachment:(/*^block*/id)arg26 replaceSingleExistingMediaAttachmentIfExisting:(/*^block*/id)arg27 replaceMediaAttachmentsWithAssetIDsAndMediaAttachments:(/*^block*/id)arg28 mediaAttachmentCaptionMutation:(/*^block*/id)arg29 mediaReorderingMutation:(/*^block*/id)arg30 mentions:(/*^block*/id)arg31 moviesComposition:(/*^block*/id)arg32 moviesLoadedTaggedUsers:(/*^block*/id)arg33 photoAutoTaggingState:(/*^block*/id)arg34 photoTaggingAssetMutation:(/*^block*/id)arg35 placeMutation:(/*^block*/id)arg36 placeSuggestions:(/*^block*/id)arg37 placeTaggingState:(/*^block*/id)arg38 platformLoadedActionMutation:(/*^block*/id)arg39 platformLoadedAppAttribution:(/*^block*/id)arg40 platformLoadedImageAttachments:(/*^block*/id)arg41 platformLoadedOGMediaAttachmentsMutation:(/*^block*/id)arg42 platformLoadedPlaceMutation:(/*^block*/id)arg43 platformLoadedRef:(/*^block*/id)arg44 platformLoadedRobotext:(/*^block*/id)arg45 platformLoadedTaggedUsers:(/*^block*/id)arg46 platformLoadedVideoAttachment:(/*^block*/id)arg47 postContentTypeMutation:(/*^block*/id)arg48 postPromptPayload:(/*^block*/id)arg49 postInspirationPayload:(/*^block*/id)arg50 publishAsQuestionAndAnswerSession:(/*^block*/id)arg51 togglePublishAsQuestionAndAnswerSession:(/*^block*/id)arg52 preferredMarketplaceMutation:(/*^block*/id)arg53 productItemCategoryGraphQLID:(/*^block*/id)arg54 productItemPickupDeliveryInfo:(/*^block*/id)arg55 productItemPriceMutation:(/*^block*/id)arg56 productItemShouldPostToMarketplace:(/*^block*/id)arg57 productItemSuggestedPlace:(/*^block*/id)arg58 productItemSuggestedZipCode:(/*^block*/id)arg59 productItemTitle:(/*^block*/id)arg60 publishTarget:(/*^block*/id)arg61 remoteImageAttachments:(/*^block*/id)arg62 removeSponsor:(/*^block*/id)arg63 removeStorylineAttachment:(/*^block*/id)arg64 removeStickerAttachment:(/*^block*/id)arg65 replaceStorylineAttachmentWithMediaAttachments:(/*^block*/id)arg66 selectedStarRating:(/*^block*/id)arg67 shouldCreateProfileBadge:(/*^block*/id)arg68 statusTextMutation:(/*^block*/id)arg69 stickers:(/*^block*/id)arg70 taggableActivityComposition:(/*^block*/id)arg71 targeting:(/*^block*/id)arg72 withTagsMutation:(/*^block*/id)arg73 poll:(/*^block*/id)arg74 sponsor:(/*^block*/id)arg75 videoAttachmentMutation:(/*^block*/id)arg76 videoTaggingAssetMutation:(/*^block*/id)arg77 videoTaggingAnalytics:(/*^block*/id)arg78 boostedComponentData:(/*^block*/id)arg79 albumTracker:(/*^block*/id)arg80 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

