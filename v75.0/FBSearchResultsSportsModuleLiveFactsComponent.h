/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBSearchResultsContext, FBMemSportsDataMatchData, NSString;

@interface FBSearchResultsSportsModuleLiveFactsComponent : CKCompositeComponent {

	FBSearchResultsContext* _context;
	FBMemSportsDataMatchData* _sportsData;
	NSString* _targetID;

}

@property (nonatomic,readonly) FBSearchResultsContext * context;                   //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) FBMemSportsDataMatchData * sportsData;              //@synthesize sportsData=_sportsData - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetID;                           //@synthesize targetID=_targetID - In the implementation block
+(id)newWithSportsData:(id)arg1 targetID:(id)arg2 context:(id)arg3 seeMoreFacts:(BOOL)arg4 ;
-(FBMemSportsDataMatchData *)sportsData;
-(FBSearchResultsContext *)context;
-(NSString *)targetID;
@end

