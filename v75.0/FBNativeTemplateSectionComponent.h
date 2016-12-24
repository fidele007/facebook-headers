/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@class FBNativeTemplateListConfiguration, FBNativeTemplateContext, FBSectionComponentChangesetSequence;

@interface FBNativeTemplateSectionComponent : FBCompositeSectionComponent {

	FBNativeTemplateListConfiguration* _configuration;
	FBNativeTemplateContext* _ntContext;
	FBSectionComponentChangesetSequence* _sequence;

}

@property (nonatomic,readonly) FBNativeTemplateListConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FBNativeTemplateContext * ntContext;                            //@synthesize ntContext=_ntContext - In the implementation block
@property (nonatomic,readonly) FBSectionComponentChangesetSequence * sequence;                 //@synthesize sequence=_sequence - In the implementation block
+(id)newWithContext:(id)arg1 configuration:(id)arg2 identifier:(id)arg3 ;
+(id)initialState;
-(FBNativeTemplateContext *)ntContext;
-(FBSectionComponentChangesetSequence *)sequence;
-(FBNativeTemplateListConfiguration *)configuration;
@end

