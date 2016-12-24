/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:51 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class MNPlainPhotoSource, MNPhotoMetadata;

@interface MNPlainPhotoViewModel : FBValueObject <NSCopying, NSCoding> {

	MNPlainPhotoSource* _source;
	MNPhotoMetadata* _metadata;

}

@property (nonatomic,copy,readonly) MNPlainPhotoSource * source;              //@synthesize source=_source - In the implementation block
@property (nonatomic,copy,readonly) MNPhotoMetadata * metadata;               //@synthesize metadata=_metadata - In the implementation block
-(id)initWithSource:(id)arg1 metadata:(id)arg2 ;
-(MNPlainPhotoSource *)source;
-(MNPhotoMetadata *)metadata;
@end

