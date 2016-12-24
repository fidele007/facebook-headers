/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPhotoCollectionDataSource.h>
@class FBMemPhoto, FBPhotoUpdater;


@protocol FBPhotoCollectionDataSource
@property (nonatomic,readonly) BOOL hasMoreToSync; 
@property (nonatomic,readonly) FBMemPhoto * photo; 
@property (assign,nonatomic) BOOL selectedPhotoIsInvalid; 
@property (assign,nonatomic) unsigned long long photoIndex; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) FBPhotoUpdater * photoUpdater; 
@required
-(unsigned long long)photoIndex;
-(BOOL)hasMoreToSync;
-(BOOL)selectedPhotoIsInvalid;
-(void)setSelectedPhotoIsInvalid:(BOOL)arg1;
-(void)setPhotoIndex:(unsigned long long)arg1;
-(FBPhotoUpdater *)photoUpdater;
-(unsigned long long)photosCount;
-(FBMemPhoto *)photo;

@end


@class FBMemPhoto, FBPhotoUpdater, NSHashTable, NSString;

@interface FBPhotoCollectionDataSource : NSObject <FBPhotoCollectionDataSource> {

	BOOL _supportsMultimedia;
	NSHashTable* _listeners;
	NSString* _photosSource;

}

@property (nonatomic,readonly) NSHashTable * listeners;                     //@synthesize listeners=_listeners - In the implementation block
@property (nonatomic,copy) NSString * photosSource;                         //@synthesize photosSource=_photosSource - In the implementation block
@property (assign,nonatomic) BOOL supportsMultimedia;                       //@synthesize supportsMultimedia=_supportsMultimedia - In the implementation block
@property (nonatomic,readonly) BOOL hasMoreToSync; 
@property (nonatomic,readonly) FBMemPhoto * photo; 
@property (assign,nonatomic) BOOL selectedPhotoIsInvalid; 
@property (assign,nonatomic) unsigned long long photoIndex; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) FBPhotoUpdater * photoUpdater; 
-(unsigned long long)photoIndex;
-(void)setPhotosSource:(NSString *)arg1 ;
-(BOOL)hasMoreToSync;
-(void)syncMore:(/*^block*/id)arg1 ;
-(BOOL)selectedPhotoIsInvalid;
-(void)setSelectedPhotoIsInvalid:(BOOL)arg1 ;
-(void)setPhotoIndex:(unsigned long long)arg1 ;
-(void)syncMoreNow:(/*^block*/id)arg1 ;
-(id)initWithMediaStore:(id)arg1 session:(id)arg2 selectedPhotoIndex:(unsigned long long)arg3 ;
-(id)fullySyncIndexes:(id)arg1 completion:(/*^block*/id)arg2 ;
-(NSString *)photosSource;
-(void)setSupportsMultimedia:(BOOL)arg1 ;
-(BOOL)supportsMultimedia;
-(FBPhotoUpdater *)photoUpdater;
-(id)init;
-(id)photoAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)photosCount;
-(FBMemPhoto *)photo;
-(void)removeListener:(id)arg1 ;
-(void)addListener:(id)arg1 ;
-(NSHashTable *)listeners;
@end
