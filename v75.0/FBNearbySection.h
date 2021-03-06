/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, NSString, NSArray, NSSet;

@interface FBNearbySection : NSObject {

	NSMutableSet* _peopleIdsSet;
	NSString* _endCursor;
	NSString* _categoryIdentifier;
	NSString* _title;
	NSArray* _nearbyFriends;

}

@property (nonatomic,copy) NSString * categoryIdentifier;                    //@synthesize categoryIdentifier=_categoryIdentifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                 //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSArray * nearbyFriends;                          //@synthesize nearbyFriends=_nearbyFriends - In the implementation block
@property (nonatomic,copy) NSString * endCursor;                             //@synthesize endCursor=_endCursor - In the implementation block
@property (nonatomic,copy,readonly) NSSet * nearbyFriendsFBIDs; 
@property (nonatomic,readonly) unsigned long long count; 
-(void)setEndCursor:(NSString *)arg1 ;
-(NSString *)endCursor;
-(id)initWithTitle:(id)arg1 categoryIdentifier:(id)arg2 nearbyFriends:(id)arg3 endCursor:(id)arg4 ;
-(NSArray *)nearbyFriends;
-(NSSet *)nearbyFriendsFBIDs;
-(BOOL)containsPersonWithFBID:(id)arg1 ;
-(void)removePersonWithFBID:(id)arg1 ;
-(void)setNearbyFriends:(NSArray *)arg1 ;
-(unsigned long long)count;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)categoryIdentifier;
-(void)setCategoryIdentifier:(NSString *)arg1 ;
@end

