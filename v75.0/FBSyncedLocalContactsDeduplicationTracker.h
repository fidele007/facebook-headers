/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSMutableArray;

@interface FBSyncedLocalContactsDeduplicationTracker : NSObject {

	NSMutableSet* _cumulativeSeenContactIDs;
	NSMutableArray* _matchedContactIDs;

}

@property (nonatomic,copy,readonly) NSMutableSet * cumulativeSeenContactIDs;              //@synthesize cumulativeSeenContactIDs=_cumulativeSeenContactIDs - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * matchedContactIDs;                   //@synthesize matchedContactIDs=_matchedContactIDs - In the implementation block
-(id)initWithMatchedContactIDs:(id)arg1 cumulativeSeenContactIDs:(id)arg2 ;
-(NSMutableSet *)cumulativeSeenContactIDs;
-(NSMutableArray *)matchedContactIDs;
@end

