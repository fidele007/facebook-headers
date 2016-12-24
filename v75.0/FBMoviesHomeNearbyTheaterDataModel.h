/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemExternalMovieTheater;

@interface FBMoviesHomeNearbyTheaterDataModel : FBValueObject <NSCopying> {

	FBMemExternalMovieTheater* _theater;
	long long _index;

}

@property (nonatomic,copy,readonly) FBMemExternalMovieTheater * theater;              //@synthesize theater=_theater - In the implementation block
@property (nonatomic,readonly) long long index;                                       //@synthesize index=_index - In the implementation block
-(id)initWithTheater:(id)arg1 index:(long long)arg2 ;
-(long long)index;
-(FBMemExternalMovieTheater *)theater;
@end

