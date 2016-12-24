/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBComposeAppSpecificConfigProtocol.h>

@class NSString;

@interface FBComposeAppSpecificConfig : NSObject <FBComposeAppSpecificConfigProtocol> {

	BOOL _shouldShowPhotoVideoUploadPromotionTooltip;
	BOOL _shouldShowMinutaeTooltip;
	BOOL _shouldShowTagExplanationTooltip;
	BOOL _shouldUseHeadPublisherComposerTrait;
	BOOL _shouldShowCreatePlaceInPlacePicker;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldShowPhotoVideoUploadPromotionTooltip;              //@synthesize shouldShowPhotoVideoUploadPromotionTooltip=_shouldShowPhotoVideoUploadPromotionTooltip - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowMinutaeTooltip;                                //@synthesize shouldShowMinutaeTooltip=_shouldShowMinutaeTooltip - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowTagExplanationTooltip;                         //@synthesize shouldShowTagExplanationTooltip=_shouldShowTagExplanationTooltip - In the implementation block
@property (nonatomic,readonly) BOOL shouldUseHeadPublisherComposerTrait;                     //@synthesize shouldUseHeadPublisherComposerTrait=_shouldUseHeadPublisherComposerTrait - In the implementation block
@property (nonatomic,readonly) BOOL shouldShowCreatePlaceInPlacePicker;                      //@synthesize shouldShowCreatePlaceInPlacePicker=_shouldShowCreatePlaceInPlacePicker - In the implementation block
+(id)composeAppSpecificConfig;
-(BOOL)shouldShowPhotoVideoUploadPromotionTooltip;
-(BOOL)shouldShowMinutaeTooltip;
-(BOOL)shouldShowTagExplanationTooltip;
-(BOOL)shouldUseHeadPublisherComposerTrait;
-(BOOL)shouldShowCreatePlaceInPlacePicker;
-(id)init;
@end

