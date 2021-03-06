/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBComposerReactionAfterPublicationBehavior, FBComposerDefaultAlbumSelectionBehaviour, FBComposerPublishButtonTextBehaviour, FBComposerPlaceholderBehaviour, FBComposerTitleTextBehaviour, FBComposerPrivacySetting, FBComposerForSaleConfiguration, FBComposerCreativeToolsTraits, FBComposerSaveDraftBehavior;

@interface FBComposerTraitsBuilder : NSObject {

	unsigned long long _interfaceStyle;
	long long _checkinSearchType;
	NSString* _publisherIdentifier;
	unsigned long long _publishBehavior;
	NSString* _composerAnalyticsType;
	BOOL _allowDraftRecovery;
	BOOL _allowCachingOfResultantPublication;
	FBComposerReactionAfterPublicationBehavior* _reactionAfterPublicationBehavior;
	unsigned long long _mentioningPermission;
	unsigned long long _albumSelectionPermission;
	FBComposerDefaultAlbumSelectionBehaviour* _defaultAlbumSelectionBehaviour;
	BOOL _allowHashtags;
	unsigned long long _photoAttachmentPermission;
	unsigned long long _videoAttachmentPermission;
	unsigned long long _allowablePostOptionContentTypes;
	BOOL _allowLinkAttachments;
	BOOL _scrapeLinkAttachments;
	FBComposerPublishButtonTextBehaviour* _publishButtonTextBehaviour;
	unsigned long long _implicitPlaceTaggingPermission;
	BOOL _allowPlaceTagging;
	BOOL _allowPlaceAttachment;
	BOOL _allowBackDate;
	unsigned long long _userTaggingPermission;
	unsigned long long _activityTaggingPermission;
	unsigned long long _zeroRatingSentryType;
	FBComposerPlaceholderBehaviour* _placeholderBehaviour;
	FBComposerTitleTextBehaviour* _titleTextBehaviour;
	unsigned long long _dismissalPermission;
	unsigned long long _publishPermission;
	unsigned long long _targetLoadType;
	unsigned long long _privacySettingSavePermission;
	BOOL _allowQAndA;
	unsigned long long _privacyDisplayBehavior;
	BOOL _allowFaceDetection;
	unsigned long long _userTaggingInMediaPermission;
	unsigned long long _authorLoadType;
	unsigned long long _privacySettingLoadType;
	FBComposerPrivacySetting* _initialPrivacySetting;
	BOOL _startAttachmentUploadsImmediately;
	BOOL _allowPhotoRemoving;
	BOOL _isEditingReview;
	unsigned long long _tagAnyoneInMentionsPermission;
	NSString* _mentionTagSearchContext;
	BOOL _forceDirectedPost;
	unsigned long long _allowPostExpirationOption;
	unsigned long long _initialFocus;
	BOOL _allowShareDestinationUserEducation;
	BOOL _allowStreamlinedComposer;
	BOOL _forceSimpleSearchForMentions;
	unsigned long long _minimumLengthOfStatusTextForPostToBeConsideredPublishable;
	FBComposerForSaleConfiguration* _forSaleConfiguration;
	BOOL _allowPostingToNearbyMarketplace;
	BOOL _allowModifyingCaptionsOnPhotos;
	FBComposerCreativeToolsTraits* _creativeToolsTraits;
	unsigned long long _destinationChoosingType;
	BOOL _shouldAllowVideosInAlbums;
	BOOL _allowMajorLifeEventTitleEditing;
	BOOL _allowMagicStories;
	BOOL _allowStickersAsAttachments;
	unsigned long long _cameraType;
	BOOL _allowPrivacyEducation;
	unsigned long long _draftBehavior;
	unsigned long long _liveVideoBroadcastPermission;
	BOOL _allowVideoEditing;
	BOOL _allow360VideoEditing;
	BOOL _allowLivePhoto;
	BOOL _allowSponsorTagging;
	BOOL _allowPoll;
	BOOL _allowMultiMediaPost;
	BOOL _allow360Photo;
	BOOL _allowAnimatedGIFs;
	unsigned long long _cursorLaunchBehavior;
	BOOL _allowMovies;
	FBComposerSaveDraftBehavior* _saveDraftBehavior;
	NSString* _feedbackSource;
	NSString* _feedbackReferrer;
	unsigned long long _metadataTemplateOptions;
	BOOL _allowCommerceIPScanningTooltip;
	BOOL _allowExpandableTextSize;
	BOOL _allowFeedOnlyPosts;
	BOOL _allowFormatSelector;
	BOOL _allowProductTagging;
	BOOL _allowChangeVoice;
	long long _phAssetCollectionSubtypeIndexForMediaPicker;

}
+(id)composerTraitsFromExistingComposerTraits:(id)arg1 ;
+(id)composerTraits;
-(id)withDestinationChoosingType:(unsigned long long)arg1 ;
-(id)withTitleTextBehaviour:(id)arg1 ;
-(id)withComposerAnalyticsType:(id)arg1 ;
-(id)withInitialFocus:(unsigned long long)arg1 ;
-(id)withPlaceholderBehaviour:(id)arg1 ;
-(id)withForceDirectedPost:(BOOL)arg1 ;
-(id)withSaveDraftBehavior:(id)arg1 ;
-(id)withDraftBehavior:(unsigned long long)arg1 ;
-(id)withInterfaceStyle:(unsigned long long)arg1 ;
-(id)withCheckinSearchType:(long long)arg1 ;
-(id)withPublisherIdentifier:(id)arg1 ;
-(id)withPublishBehavior:(unsigned long long)arg1 ;
-(id)withAllowDraftRecovery:(BOOL)arg1 ;
-(id)withAllowCachingOfResultantPublication:(BOOL)arg1 ;
-(id)withReactionAfterPublicationBehavior:(id)arg1 ;
-(id)withMentioningPermission:(unsigned long long)arg1 ;
-(id)withAlbumSelectionPermission:(unsigned long long)arg1 ;
-(id)withDefaultAlbumSelectionBehaviour:(id)arg1 ;
-(id)withAllowHashtags:(BOOL)arg1 ;
-(id)withPhotoAttachmentPermission:(unsigned long long)arg1 ;
-(id)withVideoAttachmentPermission:(unsigned long long)arg1 ;
-(id)withAllowablePostOptionContentTypes:(unsigned long long)arg1 ;
-(id)withAllowLinkAttachments:(BOOL)arg1 ;
-(id)withScrapeLinkAttachments:(BOOL)arg1 ;
-(id)withPublishButtonTextBehaviour:(id)arg1 ;
-(id)withImplicitPlaceTaggingPermission:(unsigned long long)arg1 ;
-(id)withAllowPlaceTagging:(BOOL)arg1 ;
-(id)withAllowPlaceAttachment:(BOOL)arg1 ;
-(id)withAllowBackDate:(BOOL)arg1 ;
-(id)withUserTaggingPermission:(unsigned long long)arg1 ;
-(id)withActivityTaggingPermission:(unsigned long long)arg1 ;
-(id)withZeroRatingSentryType:(unsigned long long)arg1 ;
-(id)withDismissalPermission:(unsigned long long)arg1 ;
-(id)withPublishPermission:(unsigned long long)arg1 ;
-(id)withTargetLoadType:(unsigned long long)arg1 ;
-(id)withPrivacySettingSavePermission:(unsigned long long)arg1 ;
-(id)withAllowQAndA:(BOOL)arg1 ;
-(id)withPrivacyDisplayBehavior:(unsigned long long)arg1 ;
-(id)withAllowFaceDetection:(BOOL)arg1 ;
-(id)withUserTaggingInMediaPermission:(unsigned long long)arg1 ;
-(id)withAuthorLoadType:(unsigned long long)arg1 ;
-(id)withPrivacySettingLoadType:(unsigned long long)arg1 ;
-(id)withInitialPrivacySetting:(id)arg1 ;
-(id)withStartAttachmentUploadsImmediately:(BOOL)arg1 ;
-(id)withAllowPhotoRemoving:(BOOL)arg1 ;
-(id)withIsEditingReview:(BOOL)arg1 ;
-(id)withTagAnyoneInMentionsPermission:(unsigned long long)arg1 ;
-(id)withMentionTagSearchContext:(id)arg1 ;
-(id)withAllowPostExpirationOption:(unsigned long long)arg1 ;
-(id)withAllowShareDestinationUserEducation:(BOOL)arg1 ;
-(id)withAllowStreamlinedComposer:(BOOL)arg1 ;
-(id)withForceSimpleSearchForMentions:(BOOL)arg1 ;
-(id)withMinimumLengthOfStatusTextForPostToBeConsideredPublishable:(unsigned long long)arg1 ;
-(id)withForSaleConfiguration:(id)arg1 ;
-(id)withAllowPostingToNearbyMarketplace:(BOOL)arg1 ;
-(id)withAllowModifyingCaptionsOnPhotos:(BOOL)arg1 ;
-(id)withCreativeToolsTraits:(id)arg1 ;
-(id)withShouldAllowVideosInAlbums:(BOOL)arg1 ;
-(id)withAllowMajorLifeEventTitleEditing:(BOOL)arg1 ;
-(id)withAllowMagicStories:(BOOL)arg1 ;
-(id)withAllowStickersAsAttachments:(BOOL)arg1 ;
-(id)withCameraType:(unsigned long long)arg1 ;
-(id)withAllowPrivacyEducation:(BOOL)arg1 ;
-(id)withLiveVideoBroadcastPermission:(unsigned long long)arg1 ;
-(id)withAllowVideoEditing:(BOOL)arg1 ;
-(id)withAllow360VideoEditing:(BOOL)arg1 ;
-(id)withAllowLivePhoto:(BOOL)arg1 ;
-(id)withAllowSponsorTagging:(BOOL)arg1 ;
-(id)withAllowPoll:(BOOL)arg1 ;
-(id)withAllowMultiMediaPost:(BOOL)arg1 ;
-(id)withAllow360Photo:(BOOL)arg1 ;
-(id)withAllowAnimatedGIFs:(BOOL)arg1 ;
-(id)withCursorLaunchBehavior:(unsigned long long)arg1 ;
-(id)withAllowMovies:(BOOL)arg1 ;
-(id)withFeedbackSource:(id)arg1 ;
-(id)withFeedbackReferrer:(id)arg1 ;
-(id)withMetadataTemplateOptions:(unsigned long long)arg1 ;
-(id)withAllowCommerceIPScanningTooltip:(BOOL)arg1 ;
-(id)withAllowExpandableTextSize:(BOOL)arg1 ;
-(id)withAllowFeedOnlyPosts:(BOOL)arg1 ;
-(id)withAllowFormatSelector:(BOOL)arg1 ;
-(id)withAllowProductTagging:(BOOL)arg1 ;
-(id)withAllowChangeVoice:(BOOL)arg1 ;
-(id)withPhAssetCollectionSubtypeIndexForMediaPicker:(long long)arg1 ;
-(id)build;
@end

