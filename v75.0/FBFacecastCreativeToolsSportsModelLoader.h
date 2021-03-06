/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBMediaCreativeToolsModelLoaderProtocol.h>

@protocol FBServiceTransactionMutating, FBFacecastCreativeToolsSportsModelLoaderDelegate;
@class FBUserSession, FBScenePath, NSMutableArray, NSString;

@interface FBFacecastCreativeToolsSportsModelLoader : NSObject <FBMediaCreativeToolsModelLoaderProtocol> {

	FBUserSession* _session;
	FBScenePath* _scenePath;
	id<FBServiceTransactionMutating> _transaction;
	NSMutableArray* _sportsMatches;
	id<FBFacecastCreativeToolsSportsModelLoaderDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBFacecastCreativeToolsSportsModelLoaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_loadSucceededWithResponse:(id)arg1 finalStatus:(id)arg2 ;
-(void)_loadFailedWithError:(id)arg1 finalStatus:(id)arg2 ;
-(void)_configureLoad:(id)arg1 ;
-(id)initWithSession:(id)arg1 scenePath:(id)arg2 ;
-(void)setDelegate:(id<FBFacecastCreativeToolsSportsModelLoaderDelegate>)arg1 ;
-(id<FBFacecastCreativeToolsSportsModelLoaderDelegate>)delegate;
-(void)load;
@end

