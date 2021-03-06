/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBSearchComponentModel, FBSearchResultsContext, NSString;

@interface FBPulseResultsPhraseAnalysisModuleChildComponent : CKCompositeComponent {

	FBSearchComponentModel* _itemEdgeModel;
	FBSearchResultsContext* _context;
	NSString* _graphQLID;

}

@property (nonatomic,retain) FBSearchComponentModel * itemEdgeModel;              //@synthesize itemEdgeModel=_itemEdgeModel - In the implementation block
@property (nonatomic,retain) FBSearchResultsContext * context;                    //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) NSString * graphQLID;                                  //@synthesize graphQLID=_graphQLID - In the implementation block
+(id)newWithPhraseAnalysisItemEdgeModel:(id)arg1 context:(id)arg2 style:(long long)arg3 ;
-(void)setGraphQLID:(NSString *)arg1 ;
-(NSString *)graphQLID;
-(void)didTapPhrase:(id)arg1 ;
-(FBSearchComponentModel *)itemEdgeModel;
-(void)setItemEdgeModel:(FBSearchComponentModel *)arg1 ;
-(FBSearchResultsContext *)context;
-(void)setContext:(FBSearchResultsContext *)arg1 ;
@end

