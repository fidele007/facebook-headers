/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:45 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class FBConnectionPageLoadLimits, NSDictionary, FBGraphQLConnectionControllerConfiguration, FBGraphQLConnectionStoreConfiguration, FBGraphQLConnectionStorePersistenceCoordinator;


@protocol FBGraphQLConnectionChangesetSequenceServiceConfiguring <NSObject>
@property (assign,nonatomic) /*function pointer*/void* connectionEdgeToModelTransformer; 
@property (nonatomic,copy) FBConnectionPageLoadLimits * pageLoadLimits; 
@property (nonatomic,copy) NSDictionary * pageLoadUserInfo; 
@property (nonatomic,retain) FBGraphQLConnectionControllerConfiguration * connectionControllerConfiguration; 
@property (nonatomic,retain) FBGraphQLConnectionStoreConfiguration * connectionStoreConfiguration; 
@property (nonatomic,retain) id componentContext; 
@property (nonatomic,retain) FBGraphQLConnectionStorePersistenceCoordinator * persistenceCoordinator; 
@required
-(id)componentContext;
-(void)setConnectionEdgeToModelTransformer:(/*function pointer*/void*)arg1;
-(void)setPageLoadLimits:(id)arg1;
-(void)setPageLoadUserInfo:(id)arg1;
-(void)setConnectionControllerConfiguration:(id)arg1;
-(void)setConnectionStoreConfiguration:(id)arg1;
-(void)setComponentContext:(id)arg1;
-(FBGraphQLConnectionStorePersistenceCoordinator *)persistenceCoordinator;
-(/*function pointer*/void*)connectionEdgeToModelTransformer;
-(FBConnectionPageLoadLimits *)pageLoadLimits;
-(NSDictionary *)pageLoadUserInfo;
-(FBGraphQLConnectionControllerConfiguration *)connectionControllerConfiguration;
-(FBGraphQLConnectionStoreConfiguration *)connectionStoreConfiguration;
-(void)setPersistenceCoordinator:(id)arg1;

@end
