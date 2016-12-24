/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:35 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSAttributedString;

@interface FBLocalStarRatingViewConfig : FBValueObject <NSCopying> {

	double _rating;
	NSAttributedString* _ratingContext;
	unsigned long long _contextPosition;

}

@property (nonatomic,readonly) double rating;                                        //@synthesize rating=_rating - In the implementation block
@property (nonatomic,copy,readonly) NSAttributedString * ratingContext;              //@synthesize ratingContext=_ratingContext - In the implementation block
@property (nonatomic,readonly) unsigned long long contextPosition;                   //@synthesize contextPosition=_contextPosition - In the implementation block
-(id)initWithRating:(double)arg1 ratingContext:(id)arg2 contextPosition:(unsigned long long)arg3 ;
-(NSAttributedString *)ratingContext;
-(unsigned long long)contextPosition;
-(double)rating;
@end

