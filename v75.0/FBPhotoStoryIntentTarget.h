/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:44 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBIntentTarget.h>

@protocol FBPhotoStoryContainer, FBGraphQLConnectionSyncStoreProtocol;
@class FBMemPhoto, FBPhotosConsumptionReferrer, FBScenePath;

@interface FBPhotoStoryIntentTarget : FBIntentTarget {

	id<FBPhotoStoryContainer> _photoStoryContainer;
	FBMemPhoto* _openingPhoto;
	id<FBGraphQLConnectionSyncStoreProtocol> _mediaStore;
	id<FBGraphQLConnectionSyncStoreProtocol> _photoStore;
	FBPhotosConsumptionReferrer* _referrer;
	FBScenePath* _scenePath;
	FBPhotoStoryOptions _options;

}

@property (nonatomic,readonly) id<FBPhotoStoryContainer> photoStoryContainer;                    //@synthesize photoStoryContainer=_photoStoryContainer - In the implementation block
@property (nonatomic,readonly) FBMemPhoto * openingPhoto;                                        //@synthesize openingPhoto=_openingPhoto - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionSyncStoreProtocol> mediaStore;              //@synthesize mediaStore=_mediaStore - In the implementation block
@property (nonatomic,readonly) id<FBGraphQLConnectionSyncStoreProtocol> photoStore;              //@synthesize photoStore=_photoStore - In the implementation block
@property (nonatomic,readonly) FBPhotosConsumptionReferrer * referrer;                           //@synthesize referrer=_referrer - In the implementation block
@property (nonatomic,readonly) FBPhotoStoryOptions options;                                      //@synthesize options=_options - In the implementation block
@property (nonatomic,readonly) FBScenePath * scenePath;                                          //@synthesize scenePath=_scenePath - In the implementation block
+(id)photoStoryTargetWithContainer:(id)arg1 openingPhoto:(id)arg2 mediaStore:(id)arg3 photoStore:(id)arg4 referrer:(id)arg5 photoStoryOptions:(FBPhotoStoryOptions)arg6 scenePath:(id)arg7 ;
-(FBScenePath *)scenePath;
-(id)fallbackURLs;
-(id<FBGraphQLConnectionSyncStoreProtocol>)photoStore;
-(id<FBPhotoStoryContainer>)photoStoryContainer;
-(id<FBGraphQLConnectionSyncStoreProtocol>)mediaStore;
-(FBMemPhoto *)openingPhoto;
-(FBPhotosConsumptionReferrer *)referrer;
-(FBPhotoStoryOptions)options;
@end
