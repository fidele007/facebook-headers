/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBCompositeSectionComponent.h>

@class FBGraphQLConnectionSectionComponentListenerAnnouncer, FBFeedGraphQLConnectionSectionComponentConfiguration, FBSectionComponentToolbox, FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer;

@interface FBFeedGraphQLConnectionSectionComponent : FBCompositeSectionComponent {

	FBGraphQLConnectionSectionComponentListenerAnnouncer* _graphQLConnectionAnnouncer;
	FBFeedGraphQLConnectionSectionComponentConfiguration* _configuration;
	FBSectionComponentToolbox* _toolbox;
	FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer* _updateAnnouncer;

}

@property (nonatomic,readonly) FBFeedGraphQLConnectionSectionComponentConfiguration * configuration;                           //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FBSectionComponentToolbox * toolbox;                                                            //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer * updateAnnouncer;                   //@synthesize updateAnnouncer=_updateAnnouncer - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentListenerAnnouncer * graphQLConnectionAnnouncer;              //@synthesize graphQLConnectionAnnouncer=_graphQLConnectionAnnouncer - In the implementation block
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 ;
+(id)newWithConfiguration:(id)arg1 shouldDeferUpdatesToParent:(BOOL)arg2 toolbox:(id)arg3 ;
-(FBSectionComponentToolbox *)toolbox;
-(FBGraphQLConnectionSectionComponentListenerAnnouncer *)graphQLConnectionAnnouncer;
-(FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer *)updateAnnouncer;
-(FBFeedGraphQLConnectionSectionComponentConfiguration *)configuration;
@end
