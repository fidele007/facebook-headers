/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:54 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBWildeMemModelObject.h>
#import <Facebook/FBRichStoryEntityMediaProtocol.h>
#import <Facebook/FBDisplayableMedia.h>
#import <Facebook/FBFeedbackTargetProtocol.h>
#import <Facebook/FBSearchPivotsSource.h>
#import <Facebook/FBShareable.h>
#import <Facebook/FBQueriedEntityFieldsProtocol.h>
#import <Facebook/FBQueriedGoodwillThrowbackAccentImageFieldsProtocol.h>
#import <Facebook/FBQueriedMediaFieldsProtocol.h>
#import <Facebook/FBQueriedNodeFieldsProtocol.h>
#import <Facebook/FBQueriedProfileOverlayableMediaFieldsProtocol.h>
#import <Facebook/FBQueriedSearchCombinedResultFieldsProtocol.h>
#import <Facebook/FBQueriedSearchResultFieldsProtocol.h>

@class NSString;

@interface FBMemPhoto : FBWildeMemModelObject <FBRichStoryEntityMediaProtocol, FBDisplayableMedia, FBFeedbackTargetProtocol, FBSearchPivotsSource, FBShareable, FBQueriedEntityFieldsProtocol, FBQueriedGoodwillThrowbackAccentImageFieldsProtocol, FBQueriedMediaFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedProfileOverlayableMediaFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol, FBQueriedSearchResultFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)supportedImageFlags;
-(id)privacyScope;
-(id)bestEffortTimeTaken;
-(id)implicitPlace;
-(id)withTags;
-(id)message;
-(id)createdTime;
-(id)profilePictureOverlay;
-(char)canViewerMakeCoverPhotoValue;
-(id)canViewerMakeCoverPhoto;
-(char)canViewerMakeProfilePictureValue;
-(id)canViewerMakeProfilePicture;
-(char)canViewerExportValue;
-(id)canViewerExport;
-(id)explicitPlace;
-(char)canViewerAddTagsValue;
-(id)canViewerAddTags;
-(char)canViewerShareValue;
-(id)canViewerShare;
-(char)canViewerUntagValue;
-(id)canViewerUntag;
-(char)canViewerEditValue;
-(id)canViewerEdit;
-(char)canViewerReportValue;
-(id)canViewerReport;
-(char)canViewerDeleteValue;
-(id)canViewerDelete;
-(id)clientAssetURL;
-(id)openGraphAction;
-(id)owner;
-(id)feedback;
-(id)image;
-(id)isMultiCompanyGroupValue;
-(id)isMultiCompanyGroup;
-(id)isViewerCoworkerValue;
-(id)isViewerCoworker;
-(id)isWorkUserValue;
-(id)isWorkUser;
-(id)iOSURLStrings;
-(id)creationStory;
-(id)image2048;
-(char)shouldUpsellAsViewerProfilePictureValue;
-(id)shouldUpsellAsViewerProfilePicture;
-(id)tags;
-(id)pairedVideo;
-(id)playCount;
-(id)focus;
-(id)image960;
-(id)image720;
-(id)image600;
-(id)image480;
-(id)image320;
-(id)image180;
-(id)image130;
-(id)image75;
-(char)tagSuggestionsShownValue;
-(id)tagSuggestionsShown;
-(id)faceBoxes;
-(id)photoEncodings;
-(id)graphQLID;
-(id)album;
-(id)urlString;
-(id)imageClosestToFlag:(unsigned long long)arg1 ;
-(id)imageSourceForFlag:(unsigned long long)arg1 ;
-(id)entityURL;
-(unsigned long long)imageFlagClosestToSize:(double)arg1 ;
-(id)shareableID;
-(id)shareableType;
-(id)defaultAnnotationText;
-(void)taggableSourceAvatarWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)mediaID;
-(id)mediaID;
-(BOOL)hasCubestripEncodings;
-(id)shareableURL;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(CGSize)imageSizeForFlag:(unsigned long long)arg1 ;
-(unsigned long long)imageFlagClosestToFlag:(unsigned long long)arg1 ;
-(id)faceBoxesArray;
-(id)cubestripEncodingForSize:(unsigned long long)arg1 ;
-(id)imageForFlag:(unsigned long long)arg1 ;
-(BOOL)isFullInfoLoaded;
-(id)accessibilityLabelString;
-(id)supportedImageURLs;
-(id)defaultPhotoTitle;
-(id)default360PhotoTitle;
-(id)accessibilityLabelStringWithTitle:(id)arg1 includingCaption:(BOOL)arg2 ;
-(CGSize)size;
-(id)place;
-(BOOL)isDisplayable;
-(double)aspectRatio;
-(CGPoint)focusPoint;
@end

