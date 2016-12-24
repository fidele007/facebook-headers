/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBComposerMoviesLoggerAssetsInfo : FBValueObject <NSCopying> {

	unsigned long long _numberOfAssets;
	unsigned long long _numberOfPhotos;
	unsigned long long _numberOfVideos;
	NSArray* _orderOfAssets;

}

@property (nonatomic,readonly) unsigned long long numberOfAssets;              //@synthesize numberOfAssets=_numberOfAssets - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfPhotos;              //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfVideos;              //@synthesize numberOfVideos=_numberOfVideos - In the implementation block
@property (nonatomic,copy,readonly) NSArray * orderOfAssets;                   //@synthesize orderOfAssets=_orderOfAssets - In the implementation block
-(unsigned long long)numberOfVideos;
-(NSArray *)orderOfAssets;
-(id)initWithNumberOfAssets:(unsigned long long)arg1 numberOfPhotos:(unsigned long long)arg2 numberOfVideos:(unsigned long long)arg3 orderOfAssets:(id)arg4 ;
-(unsigned long long)numberOfAssets;
-(unsigned long long)numberOfPhotos;
@end

