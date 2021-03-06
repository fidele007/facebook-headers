/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray, NSMutableSet, NSMutableDictionary;

@interface FBMStickerManagerState : NSObject {

	NSString* _storageFilePath;
	NSMutableArray* _stickerPacksOnDevice;
	NSMutableSet* _userRemovedStickerPackFbIds;
	NSMutableDictionary* _stickerMap;
	NSMutableDictionary* _stickerPackMap;
	NSMutableDictionary* _stickersInPackMap;
	NSMutableDictionary* _stickerPackIdsByStickerId;
	NSMutableDictionary* _stickerUsageCounter;

}

@property (nonatomic,copy) NSString * storageFilePath;                                     //@synthesize storageFilePath=_storageFilePath - In the implementation block
@property (nonatomic,retain) NSMutableArray * stickerPacksOnDevice;                        //@synthesize stickerPacksOnDevice=_stickerPacksOnDevice - In the implementation block
@property (nonatomic,retain) NSMutableSet * userRemovedStickerPackFbIds;                   //@synthesize userRemovedStickerPackFbIds=_userRemovedStickerPackFbIds - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerMap;                             //@synthesize stickerMap=_stickerMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerPackMap;                         //@synthesize stickerPackMap=_stickerPackMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickersInPackMap;                      //@synthesize stickersInPackMap=_stickersInPackMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerPackIdsByStickerId;              //@synthesize stickerPackIdsByStickerId=_stickerPackIdsByStickerId - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * stickerUsageCounter;                    //@synthesize stickerUsageCounter=_stickerUsageCounter - In the implementation block
-(NSMutableArray *)stickerPacksOnDevice;
-(NSString *)storageFilePath;
-(void)setStorageFilePath:(NSString *)arg1 ;
-(void)setStickerPacksOnDevice:(NSMutableArray *)arg1 ;
-(NSMutableSet *)userRemovedStickerPackFbIds;
-(void)setUserRemovedStickerPackFbIds:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)stickerMap;
-(void)setStickerMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stickerPackMap;
-(void)setStickerPackMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stickersInPackMap;
-(void)setStickersInPackMap:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stickerPackIdsByStickerId;
-(void)setStickerPackIdsByStickerId:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)stickerUsageCounter;
-(void)setStickerUsageCounter:(NSMutableDictionary *)arg1 ;
-(id)init;
@end

