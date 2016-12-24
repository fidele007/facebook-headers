/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCompositeSectionComponent.h>

@protocol FBGraphQLConnectionChangesetMapper;
@class FBGraphQLConnectionSectionComponentListenerAnnouncer, FBGraphQLConnectionSectionComponentConfiguration, FBSectionComponentToolbox, FBGraphQLConnectionController, FBGraphQLConnectionSectionComponentState, FBGraphQLConnectionChangesetSequenceService, FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer;

@interface FBGraphQLConnectionSectionComponent : FBCompositeSectionComponent {

	BOOL _shouldDeferUpdatesToParent;
	FBGraphQLConnectionSectionComponentListenerAnnouncer* _graphQLConnectionAnnouncer;
	FBGraphQLConnectionSectionComponentConfiguration* _configuration;
	FBSectionComponentToolbox* _toolbox;
	/*^block*/id _componentProvider;
	FBGraphQLConnectionController* _connectionController;
	FBGraphQLConnectionSectionComponentState* _state;
	id<FBGraphQLConnectionChangesetMapper> _changesetMapper;
	FBGraphQLConnectionChangesetSequenceService* _connectionService;
	FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer* _updateAnnouncer;

}

@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentConfiguration * configuration;                               //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) FBSectionComponentToolbox * toolbox;                                                            //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,copy,readonly) id componentProvider;                                                                      //@synthesize componentProvider=_componentProvider - In the implementation block
@property (nonatomic,retain) FBGraphQLConnectionController * connectionController;                                             //@synthesize connectionController=_connectionController - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentState * state;                                               //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionChangesetMapper> changesetMapper;                                         //@synthesize changesetMapper=_changesetMapper - In the implementation block
@property (nonatomic,readonly) BOOL shouldDeferUpdatesToParent;                                                                //@synthesize shouldDeferUpdatesToParent=_shouldDeferUpdatesToParent - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionChangesetSequenceService * connectionService;                                //@synthesize connectionService=_connectionService - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer * updateAnnouncer;                   //@synthesize updateAnnouncer=_updateAnnouncer - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionSectionComponentListenerAnnouncer * graphQLConnectionAnnouncer;              //@synthesize graphQLConnectionAnnouncer=_graphQLConnectionAnnouncer - In the implementation block
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentGenerator:(const FBSectionComponentGenerator*)arg3 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentProviderBlock:(/*^block*/id)arg3 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentGenerator:(const FBSectionComponentGenerator*)arg3 shouldDeferUpdatesToParent:(BOOL)arg4 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentProviderBlock:(/*^block*/id)arg3 changesetMapper:(id)arg4 shouldDeferUpdatesToParent:(BOOL)arg5 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentProviderBlock:(/*^block*/id)arg3 changesetMapper:(id)arg4 ;
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 changesetMapper:(id)arg3 ;
+(id)initialState;
-(FBSectionComponentToolbox *)toolbox;
-(FBGraphQLConnectionSectionComponentListenerAnnouncer *)graphQLConnectionAnnouncer;
-(FBGraphQLConnectionController *)connectionController;
-(void)setConnectionController:(FBGraphQLConnectionController *)arg1 ;
-(id)componentProvider;
-(FBGraphQLConnectionSectionComponentUpdateListenerAnnouncer *)updateAnnouncer;
-(id<FBGraphQLConnectionChangesetMapper>)changesetMapper;
-(BOOL)shouldDeferUpdatesToParent;
-(FBGraphQLConnectionChangesetSequenceService *)connectionService;
-(FBGraphQLConnectionSectionComponentState *)state;
-(FBGraphQLConnectionSectionComponentConfiguration *)configuration;
@end

