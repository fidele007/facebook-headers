/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMediaCreativeToolsModelLoaderProtocol.h>

@protocol FBServiceTransactionMutating, FBMediaCreativeToolsModelLoaderDelegate;
@class FBUserSession, NSString, FBScenePath, NSMutableArray;

@interface FBMediaCreativeToolsModelLoader : NSObject <FBMediaCreativeToolsModelLoaderProtocol> {

	FBUserSession* _session;
	NSString* _videoID;
	FBScenePath* _scenePath;
	id<FBServiceTransactionMutating> _transaction;
	id<FBMediaCreativeToolsModelLoaderDelegate> _delegate;
	NSMutableArray* _filters;
	NSMutableArray* _drawColors;
	NSMutableArray* _masks;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithSession:(id)arg1 videoID:(id)arg2 scenePath:(id)arg3 delegate:(id)arg4 ;
-(void)_loadSucceededWithResponse:(id)arg1 finalStatus:(id)arg2 ;
-(void)_loadFailedWithError:(id)arg1 finalStatus:(id)arg2 ;
-(void)_configureLoad:(id)arg1 ;
-(void)load;
@end

