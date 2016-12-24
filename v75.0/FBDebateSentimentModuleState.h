/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, FBMemTrendingTopicData;

@interface FBDebateSentimentModuleState : NSObject {

	NSString* _selectedReactionID;
	FBMemTrendingTopicData* _updatedTrendingTopicData;
	unsigned long long _sentimentHeaderState;

}

@property (nonatomic,copy) NSString * selectedReactionID;                                  //@synthesize selectedReactionID=_selectedReactionID - In the implementation block
@property (nonatomic,copy) FBMemTrendingTopicData * updatedTrendingTopicData;              //@synthesize updatedTrendingTopicData=_updatedTrendingTopicData - In the implementation block
@property (assign,nonatomic) unsigned long long sentimentHeaderState;                      //@synthesize sentimentHeaderState=_sentimentHeaderState - In the implementation block
+(id)newWithSelectedReaction:(id)arg1 headerState:(unsigned long long)arg2 ;
-(NSString *)selectedReactionID;
-(unsigned long long)sentimentHeaderState;
-(FBMemTrendingTopicData *)updatedTrendingTopicData;
-(void)setUpdatedTrendingTopicData:(FBMemTrendingTopicData *)arg1 ;
-(void)setSelectedReactionID:(NSString *)arg1 ;
-(void)setSentimentHeaderState:(unsigned long long)arg1 ;
@end

