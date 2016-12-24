/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBNavigationCoordinator;
@class FBImageDownloadContext, FBInfoReviewRepository;

@interface FBInfoReviewContext : NSObject {

	FBImageDownloadContext* _imageDownloadContext;
	FBInfoReviewRepository* _repository;
	id<FBNavigationCoordinator> _navigationCoordinator;

}

@property (nonatomic,readonly) FBImageDownloadContext * imageDownloadContext;                  //@synthesize imageDownloadContext=_imageDownloadContext - In the implementation block
@property (nonatomic,readonly) FBInfoReviewRepository * repository;                            //@synthesize repository=_repository - In the implementation block
@property (nonatomic,readonly) id<FBNavigationCoordinator> navigationCoordinator;              //@synthesize navigationCoordinator=_navigationCoordinator - In the implementation block
-(id<FBNavigationCoordinator>)navigationCoordinator;
-(id)initWithImageDownloadContext:(id)arg1 repository:(id)arg2 navigationCoordinator:(id)arg3 ;
-(FBImageDownloadContext *)imageDownloadContext;
-(FBInfoReviewRepository *)repository;
@end

