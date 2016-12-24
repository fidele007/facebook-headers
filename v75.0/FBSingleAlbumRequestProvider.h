/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBGraphQLConnectionSyncStoreRequestProvider.h>

@class NSString;

@interface FBSingleAlbumRequestProvider : NSObject <FBGraphQLConnectionSyncStoreRequestProvider> {

	NSString* _albumID;

}

@property (nonatomic,copy) NSString * albumID;                      //@synthesize albumID=_albumID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_downloadRequestForAlbumWithID:(id)arg1 ;
-(id)requestProviderID;
-(id)connectionSyncStore:(id)arg1 nextRequestAfter:(id)arg2 ;
-(id)connectionSyncStore:(id)arg1 previousRequestBefore:(id)arg2 ;
-(id)connectionSyncStore:(id)arg1 findRequest:(id)arg2 ;
-(id)connectionPageForResponse:(id)arg1 ;
-(const FBGraphQLFieldSetRef)edgeFieldSet;
-(id)initWithAlbumID:(id)arg1 ;
-(id)initWithAlbumID:(id)arg1 accessTokenOverride:(id)arg2 ;
-(void)setAlbumID:(NSString *)arg1 ;
-(NSString *)albumID;
@end

