/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface FBTagSuggestionLoggingData : FBValueObject <NSCopying> {

	NSDictionary* _faceboxesTagSuggestions;
	NSDictionary* _faceboxesTagSuggestionsWithHighConfidence;

}

@property (nonatomic,copy,readonly) NSDictionary * faceboxesTagSuggestions;                                //@synthesize faceboxesTagSuggestions=_faceboxesTagSuggestions - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * faceboxesTagSuggestionsWithHighConfidence;              //@synthesize faceboxesTagSuggestionsWithHighConfidence=_faceboxesTagSuggestionsWithHighConfidence - In the implementation block
-(id)initWithFaceboxesTagSuggestions:(id)arg1 faceboxesTagSuggestionsWithHighConfidence:(id)arg2 ;
-(NSDictionary *)faceboxesTagSuggestions;
-(NSDictionary *)faceboxesTagSuggestionsWithHighConfidence;
@end

