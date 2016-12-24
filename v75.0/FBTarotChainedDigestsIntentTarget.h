/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBIntentTarget.h>

@class NSArray, FBTarotTransferableCardViewController;

@interface FBTarotChainedDigestsIntentTarget : FBIntentTarget {

	NSArray* _graphQLIDs;
	NSArray* _digests;
	FBTarotTransferableCardViewController* _digestCoverMediaViewController;

}

@property (nonatomic,copy,readonly) NSArray * graphQLIDs;                                                         //@synthesize graphQLIDs=_graphQLIDs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * digests;                                                            //@synthesize digests=_digests - In the implementation block
@property (nonatomic,retain) FBTarotTransferableCardViewController * digestCoverMediaViewController;              //@synthesize digestCoverMediaViewController=_digestCoverMediaViewController - In the implementation block
+(id)tarotTargetWithGraphQLIDs:(id)arg1 ;
+(id)tarotTargetWithDigests:(id)arg1 ;
-(id)fallbackURLs;
-(FBTarotTransferableCardViewController *)digestCoverMediaViewController;
-(void)setDigestCoverMediaViewController:(FBTarotTransferableCardViewController *)arg1 ;
-(NSArray *)digests;
-(NSArray *)graphQLIDs;
@end
