/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBComposerTraits, FBComposerDestination, FBComposerPhotoAutoTaggingState, FBComposerConfiguration, FBComposerCompositionChangePermissions, FBComposerPostEditingSummary, FBComposerPostPromptPayload, FBComposerPlaceSuggestions;

@interface FBComposerAttachmentRenderingData : FBValueObject <NSCopying> {

	FBComposerTraits* _traits;
	FBComposerDestination* _destination;
	FBComposerPhotoAutoTaggingState* _photoAutoTaggingState;
	FBComposerConfiguration* _configuration;
	FBComposerCompositionChangePermissions* _changePermissions;
	FBComposerPostEditingSummary* _postEditingSummary;
	FBComposerPostPromptPayload* _postPromptPayload;
	unsigned long long _placeTaggingState;
	FBComposerPlaceSuggestions* _placeSuggestions;

}

@property (nonatomic,copy,readonly) FBComposerTraits * traits;                                               //@synthesize traits=_traits - In the implementation block
@property (nonatomic,copy,readonly) FBComposerDestination * destination;                                     //@synthesize destination=_destination - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPhotoAutoTaggingState * photoAutoTaggingState;                 //@synthesize photoAutoTaggingState=_photoAutoTaggingState - In the implementation block
@property (nonatomic,copy,readonly) FBComposerConfiguration * configuration;                                 //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,copy,readonly) FBComposerCompositionChangePermissions * changePermissions;              //@synthesize changePermissions=_changePermissions - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPostEditingSummary * postEditingSummary;                       //@synthesize postEditingSummary=_postEditingSummary - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPostPromptPayload * postPromptPayload;                         //@synthesize postPromptPayload=_postPromptPayload - In the implementation block
@property (nonatomic,readonly) unsigned long long placeTaggingState;                                         //@synthesize placeTaggingState=_placeTaggingState - In the implementation block
@property (nonatomic,copy,readonly) FBComposerPlaceSuggestions * placeSuggestions;                           //@synthesize placeSuggestions=_placeSuggestions - In the implementation block
-(FBComposerCompositionChangePermissions *)changePermissions;
-(FBComposerPostPromptPayload *)postPromptPayload;
-(id)initWithTraits:(id)arg1 destination:(id)arg2 photoAutoTaggingState:(id)arg3 configuration:(id)arg4 changePermissions:(id)arg5 postEditingSummary:(id)arg6 postPromptPayload:(id)arg7 placeTaggingState:(unsigned long long)arg8 placeSuggestions:(id)arg9 ;
-(unsigned long long)placeTaggingState;
-(FBComposerPlaceSuggestions *)placeSuggestions;
-(FBComposerPostEditingSummary *)postEditingSummary;
-(FBComposerPhotoAutoTaggingState *)photoAutoTaggingState;
-(FBComposerTraits *)traits;
-(FBComposerDestination *)destination;
-(FBComposerConfiguration *)configuration;
@end

