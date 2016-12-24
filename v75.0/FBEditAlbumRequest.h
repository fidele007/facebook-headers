/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequest.h>

@class NSString, NSNumber, NSArray;

@interface FBEditAlbumRequest : FBNetworkerRequest {

	NSString* _name;
	NSString* _description;
	NSString* _placeTargetID;
	NSString* _privacyJSON;
	NSString* _targetFBID;
	BOOL _createSharedAlbum;
	NSString* _existingAlbumID;
	NSNumber* _allowContributors;
	NSArray* _contributorsToAdd;
	NSArray* _contributorsToRemove;

}

@property (nonatomic,copy,readonly) NSString * existingAlbumID;              //@synthesize existingAlbumID=_existingAlbumID - In the implementation block
@property (assign,nonatomic) BOOL createSharedAlbum;                         //@synthesize createSharedAlbum=_createSharedAlbum - In the implementation block
@property (nonatomic,copy) NSNumber * allowContributors;                     //@synthesize allowContributors=_allowContributors - In the implementation block
@property (nonatomic,copy) NSArray * contributorsToAdd;                      //@synthesize contributorsToAdd=_contributorsToAdd - In the implementation block
@property (nonatomic,copy) NSArray * contributorsToRemove;                   //@synthesize contributorsToRemove=_contributorsToRemove - In the implementation block
-(void)setTargetFBID:(id)arg1 ;
-(id)networkRequest;
-(id)initWithName:(id)arg1 description:(id)arg2 placeID:(id)arg3 privacy:(id)arg4 existingAlbumID:(id)arg5 callbackPerformer:(id)arg6 ;
-(void)setAllowContributors:(NSNumber *)arg1 ;
-(NSNumber *)allowContributors;
-(void)setCreateSharedAlbum:(BOOL)arg1 ;
-(void)setContributorsToAdd:(NSArray *)arg1 ;
-(void)setContributorsToRemove:(NSArray *)arg1 ;
-(BOOL)createSharedAlbum;
-(id)_contributorRequestForContributors:(id)arg1 isAdd:(BOOL)arg2 parentRequest:(id)arg3 useParentID:(BOOL)arg4 ;
-(NSString *)existingAlbumID;
-(NSArray *)contributorsToAdd;
-(NSArray *)contributorsToRemove;
-(id)analyticsName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

