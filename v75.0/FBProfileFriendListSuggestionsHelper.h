/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileFriendListHelper.h>

@class NSString;

@interface FBProfileFriendListSuggestionsHelper : NSObject <FBProfileFriendListHelper> {

	BOOL shouldIncludeUnreadCount;

}

@property (nonatomic,copy,readonly) NSString * profileFriendListTitle; 
@property (nonatomic,copy,readonly) NSString * profileFriendListType; 
@property (nonatomic,copy,readonly) NSString * profileFriendListAnalyticsTabName; 
@property (nonatomic,copy,readonly) NSString * profileFriendListEmptyMessage; 
@property (nonatomic,readonly) unsigned long long profileFriendListPageSizeLimit; 
@property (nonatomic,readonly) unsigned long long profileFriendListBufferSize; 
@property (nonatomic,readonly) BOOL profileFriendListShouldBeInABCSections; 
@property (assign,nonatomic) BOOL shouldIncludeUnreadCount; 
@property (nonatomic,readonly) BOOL shouldShowProfileDiscoveryEntryPoint; 
-(NSString *)profileFriendListEmptyMessage;
-(id)profileFriendListLiteCompleteQueryTargetID:(id)arg1 ;
-(id)profileFriendListParsedArrayFromResponse:(id)arg1 ;
-(NSString *)profileFriendListAnalyticsTabName;
-(unsigned long long)profileFriendListBufferSize;
-(BOOL)profileFriendListShouldBeInABCSections;
-(BOOL)shouldIncludeUnreadCount;
-(void)setShouldIncludeUnreadCount:(BOOL)arg1 ;
-(BOOL)shouldShowProfileDiscoveryEntryPoint;
-(NSString *)profileFriendListTitle;
-(NSString *)profileFriendListType;
-(unsigned long long)profileFriendListPageSizeLimit;
@end

