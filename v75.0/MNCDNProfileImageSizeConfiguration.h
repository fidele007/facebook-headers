/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface MNCDNProfileImageSizeConfiguration : FBValueObject <NSCopying> {

	NSNumber* _sizeForSmallProfilePicture;
	NSNumber* _sizeForLargeProfilePicture;
	NSNumber* _sizeForHugeFullScreenProfilePicture;

}

@property (nonatomic,copy,readonly) NSNumber * sizeForSmallProfilePicture;                       //@synthesize sizeForSmallProfilePicture=_sizeForSmallProfilePicture - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sizeForLargeProfilePicture;                       //@synthesize sizeForLargeProfilePicture=_sizeForLargeProfilePicture - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sizeForHugeFullScreenProfilePicture;              //@synthesize sizeForHugeFullScreenProfilePicture=_sizeForHugeFullScreenProfilePicture - In the implementation block
-(NSNumber *)sizeForSmallProfilePicture;
-(NSNumber *)sizeForLargeProfilePicture;
-(NSNumber *)sizeForHugeFullScreenProfilePicture;
-(id)initWithSizeForSmallProfilePicture:(id)arg1 sizeForLargeProfilePicture:(id)arg2 sizeForHugeFullScreenProfilePicture:(id)arg3 ;
@end

