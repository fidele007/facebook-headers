/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPlatformActionOperation.h>

@class FBSimpleNetworkerRequest;

@interface FBPlatformActionFetchPermissionsOperation : FBPlatformActionOperation {

	BOOL _hasPublishPermissions;
	BOOL _TOSed;
	FBSimpleNetworkerRequest* _permissionsRequest;

}

@property (nonatomic,retain) FBSimpleNetworkerRequest * permissionsRequest;              //@synthesize permissionsRequest=_permissionsRequest - In the implementation block
@property (nonatomic,readonly) BOOL hasPublishPermissions;                               //@synthesize hasPublishPermissions=_hasPublishPermissions - In the implementation block
@property (getter=isTOSed,nonatomic,readonly) BOOL TOSed;                                //@synthesize TOSed=_TOSed - In the implementation block
-(BOOL)hasPublishPermissions;
-(BOOL)isTOSed;
-(id)defaultErrorMessage;
-(void)_cancelPermissionsRequest;
-(FBSimpleNetworkerRequest *)permissionsRequest;
-(void)setPermissionsRequest:(FBSimpleNetworkerRequest *)arg1 ;
-(void)cancel;
-(void)cleanup;
-(void)process;
@end

