/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBPrivacyTokenableOption, NSOrderedSet, FBComposerAudienceTagExpansionTokenizationBundle;

@interface FBComposerAudienceTokenizationBundle : FBValueObject <NSCopying> {

	FBPrivacyTokenableOption* _tokenableOptionForSelectedPrivacySetting;
	NSOrderedSet* _optionsForPrivacySettings;
	NSOrderedSet* _optionsForTaggedUsers;
	FBComposerAudienceTagExpansionTokenizationBundle* _tagExpansionBundle;

}

@property (nonatomic,copy,readonly) FBPrivacyTokenableOption * tokenableOptionForSelectedPrivacySetting;                //@synthesize tokenableOptionForSelectedPrivacySetting=_tokenableOptionForSelectedPrivacySetting - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * optionsForPrivacySettings;                                           //@synthesize optionsForPrivacySettings=_optionsForPrivacySettings - In the implementation block
@property (nonatomic,copy,readonly) NSOrderedSet * optionsForTaggedUsers;                                               //@synthesize optionsForTaggedUsers=_optionsForTaggedUsers - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAudienceTagExpansionTokenizationBundle * tagExpansionBundle;              //@synthesize tagExpansionBundle=_tagExpansionBundle - In the implementation block
-(id)initWithTokenableOptionForSelectedPrivacySetting:(id)arg1 optionsForPrivacySettings:(id)arg2 optionsForTaggedUsers:(id)arg3 tagExpansionBundle:(id)arg4 ;
-(FBPrivacyTokenableOption *)tokenableOptionForSelectedPrivacySetting;
-(NSOrderedSet *)optionsForPrivacySettings;
-(NSOrderedSet *)optionsForTaggedUsers;
-(FBComposerAudienceTagExpansionTokenizationBundle *)tagExpansionBundle;
@end
