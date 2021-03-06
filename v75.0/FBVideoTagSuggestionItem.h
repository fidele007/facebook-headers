/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class FBMemPerson, FBMemFaceBox, NSString;

@interface FBVideoTagSuggestionItem : FBValueObject <NSCopying> {

	float _blurMeasure;
	FBMemPerson* _person;
	FBMemFaceBox* _faceBox;
	NSString* _videoAssetID;
	SCD_Struct_FB100 _time;

}

@property (nonatomic,copy,readonly) FBMemPerson * person;                 //@synthesize person=_person - In the implementation block
@property (nonatomic,copy,readonly) FBMemFaceBox * faceBox;               //@synthesize faceBox=_faceBox - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoAssetID;              //@synthesize videoAssetID=_videoAssetID - In the implementation block
@property (nonatomic,readonly) SCD_Struct_FB100 time;                     //@synthesize time=_time - In the implementation block
@property (nonatomic,readonly) float blurMeasure;                         //@synthesize blurMeasure=_blurMeasure - In the implementation block
-(id)initWithPerson:(id)arg1 faceBox:(id)arg2 videoAssetID:(id)arg3 time:(SCD_Struct_FB100)arg4 blurMeasure:(float)arg5 ;
-(NSString *)videoAssetID;
-(FBMemFaceBox *)faceBox;
-(float)blurMeasure;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(SCD_Struct_FB100)time;
-(FBMemPerson *)person;
@end

