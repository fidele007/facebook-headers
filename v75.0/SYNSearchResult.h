/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:00 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Facebook/Facebook-Structs.h>
@class SYNPhotoConceptGroupIdentifier, SYNPhoto, NSArray, NSDate;

@interface SYNSearchResult : NSObject {

	long long _numberOfPhotos;
	SYNPhotoConceptGroupIdentifier* _identifier;
	SYNPhoto* _coverPhoto;
	NSArray* _matchedNames;
	NSDate* _minPhotosDate;
	NSDate* _maxPhotosDate;

}

@property (nonatomic,readonly) long long numberOfPhotos;                                 //@synthesize numberOfPhotos=_numberOfPhotos - In the implementation block
@property (nonatomic,readonly) SYNPhotoConceptGroupIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SYNPhoto * coverPhoto;                                    //@synthesize coverPhoto=_coverPhoto - In the implementation block
@property (nonatomic,copy,readonly) NSArray * matchedNames;                              //@synthesize matchedNames=_matchedNames - In the implementation block
@property (nonatomic,readonly) NSDate * minPhotosDate;                                   //@synthesize minPhotosDate=_minPhotosDate - In the implementation block
@property (nonatomic,readonly) NSDate * maxPhotosDate;                                   //@synthesize maxPhotosDate=_maxPhotosDate - In the implementation block
-(SYNPhoto *)coverPhoto;
-(id)initWithNativeSearchResult:(SearchResult*)arg1 sessionUser:(id)arg2 ;
-(NSArray *)matchedNames;
-(NSDate *)minPhotosDate;
-(NSDate *)maxPhotosDate;
-(SYNPhotoConceptGroupIdentifier *)identifier;
-(long long)numberOfPhotos;
@end
