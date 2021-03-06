/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSURL, FBComposerAuthorProfileBadge, FBComposerAuthorFetchStatus;

@interface FBComposerAuthor : FBValueObject <NSCopying, NSCoding> {

	BOOL _isMinorValue;
	BOOL _pageCanPostOGActions;
	BOOL _isViewerAllowedToPostAsAuthorEntity;
	BOOL _isWorkUser;
	BOOL _canTargetPostsToFollowers;
	NSString* _graphQLID;
	unsigned long long _authorType;
	NSString* _name;
	NSString* _shortName;
	NSString* _accessTokenOverride;
	NSURL* _profilePictureURL;
	NSURL* _largeProfilePictureURL;
	NSString* _urlString;
	NSString* _defaultAlbumType;
	FBComposerAuthorProfileBadge* _profileBadge;
	FBComposerAuthorFetchStatus* _fetchStatus;

}

@property (nonatomic,copy,readonly) NSString * graphQLID;                                     //@synthesize graphQLID=_graphQLID - In the implementation block
@property (nonatomic,readonly) unsigned long long authorType;                                 //@synthesize authorType=_authorType - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                                          //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortName;                                     //@synthesize shortName=_shortName - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessTokenOverride;                           //@synthesize accessTokenOverride=_accessTokenOverride - In the implementation block
@property (nonatomic,readonly) BOOL isMinorValue;                                             //@synthesize isMinorValue=_isMinorValue - In the implementation block
@property (nonatomic,copy,readonly) NSURL * profilePictureURL;                                //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,copy,readonly) NSURL * largeProfilePictureURL;                           //@synthesize largeProfilePictureURL=_largeProfilePictureURL - In the implementation block
@property (nonatomic,readonly) BOOL pageCanPostOGActions;                                     //@synthesize pageCanPostOGActions=_pageCanPostOGActions - In the implementation block
@property (nonatomic,readonly) BOOL isViewerAllowedToPostAsAuthorEntity;                      //@synthesize isViewerAllowedToPostAsAuthorEntity=_isViewerAllowedToPostAsAuthorEntity - In the implementation block
@property (nonatomic,readonly) BOOL isWorkUser;                                               //@synthesize isWorkUser=_isWorkUser - In the implementation block
@property (nonatomic,copy,readonly) NSString * urlString;                                     //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultAlbumType;                              //@synthesize defaultAlbumType=_defaultAlbumType - In the implementation block
@property (nonatomic,readonly) BOOL canTargetPostsToFollowers;                                //@synthesize canTargetPostsToFollowers=_canTargetPostsToFollowers - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAuthorProfileBadge * profileBadge;              //@synthesize profileBadge=_profileBadge - In the implementation block
@property (nonatomic,copy,readonly) FBComposerAuthorFetchStatus * fetchStatus;                //@synthesize fetchStatus=_fetchStatus - In the implementation block
-(NSString *)graphQLID;
-(BOOL)isWorkUser;
-(NSURL *)profilePictureURL;
-(FBComposerAuthorProfileBadge *)profileBadge;
-(BOOL)isMinorValue;
-(FBComposerAuthorFetchStatus *)fetchStatus;
-(id)initWithGraphQLID:(id)arg1 authorType:(unsigned long long)arg2 name:(id)arg3 shortName:(id)arg4 accessTokenOverride:(id)arg5 isMinorValue:(BOOL)arg6 profilePictureURL:(id)arg7 largeProfilePictureURL:(id)arg8 pageCanPostOGActions:(BOOL)arg9 isViewerAllowedToPostAsAuthorEntity:(BOOL)arg10 isWorkUser:(BOOL)arg11 urlString:(id)arg12 defaultAlbumType:(id)arg13 canTargetPostsToFollowers:(BOOL)arg14 profileBadge:(id)arg15 fetchStatus:(id)arg16 ;
-(BOOL)pageCanPostOGActions;
-(NSString *)defaultAlbumType;
-(BOOL)canTargetPostsToFollowers;
-(NSString *)accessTokenOverride;
-(NSURL *)largeProfilePictureURL;
-(BOOL)isViewerAllowedToPostAsAuthorEntity;
-(NSString *)name;
-(NSString *)urlString;
-(unsigned long long)authorType;
-(NSString *)shortName;
@end

