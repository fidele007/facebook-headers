/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:37 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, FBFeedToolbox;

@interface FBFNCircleProfilePictureData : FBValueObject <NSCopying> {

	NSURL* _profilePictureURL;
	long long _locationCategory;
	FBFeedToolbox* _toolbox;

}

@property (nonatomic,copy,readonly) NSURL * profilePictureURL;              //@synthesize profilePictureURL=_profilePictureURL - In the implementation block
@property (nonatomic,readonly) long long locationCategory;                  //@synthesize locationCategory=_locationCategory - In the implementation block
@property (nonatomic,copy,readonly) FBFeedToolbox * toolbox;                //@synthesize toolbox=_toolbox - In the implementation block
-(FBFeedToolbox *)toolbox;
-(NSURL *)profilePictureURL;
-(id)initWithProfilePictureURL:(id)arg1 locationCategory:(long long)arg2 toolbox:(id)arg3 ;
-(long long)locationCategory;
@end

