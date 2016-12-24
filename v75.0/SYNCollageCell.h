/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class SYNPhoto;

@interface SYNCollageCell : NSObject {

	CollageCellLayout _layout;
	int _type;
	SYNPhoto* _photo;

}

@property (nonatomic,readonly) CollageCellLayout layout; 
@property (nonatomic,readonly) int type;                              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) SYNPhoto * photo;                      //@synthesize photo=_photo - In the implementation block
+(id)defaultCellForPhoto:(id)arg1 ;
+(id)defaultCellsFromPhotos:(id)arg1 ;
+(vector<Sync::CollageCellLayout, std::__1::allocator<Sync::CollageCellLayout> >*)nativePhotoLayoutsFromCells:(id)arg1 ;
+(id)photosFromCells:(id)arg1 ;
-(id)initWithPhoto:(id)arg1 type:(int)arg2 layout:(CollageCellLayout)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(int)type;
-(CollageCellLayout)layout;
-(SYNPhoto *)photo;
@end

