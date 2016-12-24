/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBNetworkerRequestDelegate.h>
#import <Facebook/FBAlbumDeletionProtocol.h>

@class FBUserSession, NSString;

@interface FBAlbumDeletionController : NSObject <FBNetworkerRequestDelegate, FBAlbumDeletionProtocol> {

	/*^block*/id _successBlock;
	/*^block*/id _failBlock;
	FBUserSession* _session;

}

@property (nonatomic,copy) id successBlock;                         //@synthesize successBlock=_successBlock - In the implementation block
@property (nonatomic,copy) id failBlock;                            //@synthesize failBlock=_failBlock - In the implementation block
@property (nonatomic,retain) FBUserSession * session;               //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSuccessBlock:(id)arg1 ;
-(void)networkerRequest:(id)arg1 didSucceed:(id)arg2 status:(id)arg3 ;
-(void)networkerRequest:(id)arg1 didFail:(id)arg2 status:(id)arg3 ;
-(void)deleteAlbum:(id)arg1 successBlock:(/*^block*/id)arg2 failBlock:(/*^block*/id)arg3 ;
-(void)setFailBlock:(id)arg1 ;
-(id)_deleteAlbumRequestForAlbumWithFBID:(id)arg1 ;
-(id)successBlock;
-(id)failBlock;
-(id)initWithSession:(id)arg1 ;
-(FBUserSession *)session;
-(void)setSession:(FBUserSession *)arg1 ;
@end
