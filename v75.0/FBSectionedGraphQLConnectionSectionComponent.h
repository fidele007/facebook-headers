/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCompositeSectionComponent.h>

@class FBSectionedGraphQLConnectionChangesetMapper;

@interface FBSectionedGraphQLConnectionSectionComponent : FBCompositeSectionComponent {

	FBSectionedGraphQLConnectionChangesetMapper* _changesetMapper;

}

@property (nonatomic,readonly) FBSectionedGraphQLConnectionChangesetMapper * changesetMapper;              //@synthesize changesetMapper=_changesetMapper - In the implementation block
+(id)newWithConfiguration:(id)arg1 toolbox:(id)arg2 componentGenerator:(const FBSectionComponentGenerator*)arg3 sectionHeaderBetweenModelsChecker:(/*function pointer*/void*)arg4 sectionHeaderComponentGenerator:(const FBSectionComponentGenerator*)arg5 ;
-(FBSectionedGraphQLConnectionChangesetMapper *)changesetMapper;
@end
