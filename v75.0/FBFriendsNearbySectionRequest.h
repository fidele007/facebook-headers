/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBGraphQLDownloadRequest.h>

@class NSString, CLLocation, NSArray;

@interface FBFriendsNearbySectionRequest : FBGraphQLDownloadRequest {

	NSString* _sectionCursor;
	NSString* _contactNodeId;
	unsigned long long _nearbyFriendsCount;
	CLLocation* _queryLocation;
	NSArray* _highlightFBIDs;

}

@property (nonatomic,copy) NSString * sectionCursor;                             //@synthesize sectionCursor=_sectionCursor - In the implementation block
@property (nonatomic,copy) NSString * contactNodeId;                             //@synthesize contactNodeId=_contactNodeId - In the implementation block
@property (assign,nonatomic) unsigned long long nearbyFriendsCount;              //@synthesize nearbyFriendsCount=_nearbyFriendsCount - In the implementation block
@property (nonatomic,copy) CLLocation * queryLocation;                           //@synthesize queryLocation=_queryLocation - In the implementation block
@property (nonatomic,copy) NSArray * highlightFBIDs;                             //@synthesize highlightFBIDs=_highlightFBIDs - In the implementation block
-(id)newQuery;
-(void)setContactNodeId:(NSString *)arg1 ;
-(void)setSectionCursor:(NSString *)arg1 ;
-(NSArray *)highlightFBIDs;
-(void)setHighlightFBIDs:(NSArray *)arg1 ;
-(CLLocation *)queryLocation;
-(void)setQueryLocation:(CLLocation *)arg1 ;
-(unsigned long long)nearbyFriendsCount;
-(void)setNearbyFriendsCount:(unsigned long long)arg1 ;
-(NSString *)sectionCursor;
-(NSString *)contactNodeId;
@end
