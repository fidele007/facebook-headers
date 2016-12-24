/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBCompositeSectionComponent.h>

@class FBGraphQLService, FBGraphQLConsistentLookasideCache, NSArray;

@interface FBGraphQLConnectionHScrollSectionComponent : FBCompositeSectionComponent {

	/*function pointer*/void* _queryFactory;
	FBGraphQLService* _gqlService;
	FBGraphQLConsistentLookasideCache* _clc;
	const FBGraphQLFieldSetRef _fieldSet;
	/*^block*/id _pageExtractionBlock;
	NSArray* _edges;
	FBGraphQLConnectionHScrollSectionComponentOptions* _options;

}

@property (nonatomic,readonly) /*function pointer*/void* queryFactory;                                  //@synthesize queryFactory=_queryFactory - In the implementation block
@property (nonatomic,readonly) FBGraphQLConnectionHScrollSectionComponentOptions* options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FBGraphQLService * gqlService;                                           //@synthesize gqlService=_gqlService - In the implementation block
@property (nonatomic,readonly) FBGraphQLConsistentLookasideCache * clc;                                 //@synthesize clc=_clc - In the implementation block
@property (nonatomic,readonly) const FBGraphQLFieldSetRef fieldSet;                                     //@synthesize fieldSet=_fieldSet - In the implementation block
@property (nonatomic,copy,readonly) id pageExtractionBlock;                                             //@synthesize pageExtractionBlock=_pageExtractionBlock - In the implementation block
@property (nonatomic,copy,readonly) NSArray * edges;                                                    //@synthesize edges=_edges - In the implementation block
+(id)newWithQueryFactory:(/*function pointer*/void*)arg1 fieldSet:(const FBGraphQLFieldSetRef)arg2 pageExtractionBlock:(/*^block*/id)arg3 options:(FBGraphQLConnectionHScrollSectionComponentOptions*)arg4 toolbox:(id)arg5 componentGenerator:(const FBSectionComponentGenerator*)arg6 ;
+(id)initialState;
-(const FBGraphQLFieldSetRef)fieldSet;
-(/*function pointer*/void*)queryFactory;
-(FBGraphQLService *)gqlService;
-(id)pageExtractionBlock;
-(FBGraphQLConsistentLookasideCache *)clc;
-(FBGraphQLConnectionHScrollSectionComponentOptions*)options;
-(NSArray *)edges;
@end
