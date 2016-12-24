/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:41 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBCompositeSerpInfo : FBValueObject <NSCopying> {

	BOOL _exactMatch;
	BOOL _renderDebugInfo;
	NSString* _title;
	NSString* _typeaheadSessionID;
	NSString* _candidateSessionID;
	NSString* _videoHomeSessionID;
	NSString* _queryString;
	unsigned long long _experienceType;
	unsigned long long _resultsStyle;
	id _scopedSearchScopeEntity;

}

@property (nonatomic,copy,readonly) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeaheadSessionID;              //@synthesize typeaheadSessionID=_typeaheadSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * candidateSessionID;              //@synthesize candidateSessionID=_candidateSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * videoHomeSessionID;              //@synthesize videoHomeSessionID=_videoHomeSessionID - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString;                     //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,readonly) unsigned long long experienceType;               //@synthesize experienceType=_experienceType - In the implementation block
@property (nonatomic,readonly) unsigned long long resultsStyle;                 //@synthesize resultsStyle=_resultsStyle - In the implementation block
@property (nonatomic,readonly) BOOL exactMatch;                                 //@synthesize exactMatch=_exactMatch - In the implementation block
@property (nonatomic,readonly) BOOL renderDebugInfo;                            //@synthesize renderDebugInfo=_renderDebugInfo - In the implementation block
@property (nonatomic,copy,readonly) id scopedSearchScopeEntity;                 //@synthesize scopedSearchScopeEntity=_scopedSearchScopeEntity - In the implementation block
-(id)scopedSearchScopeEntity;
-(NSString *)typeaheadSessionID;
-(NSString *)candidateSessionID;
-(unsigned long long)experienceType;
-(BOOL)exactMatch;
-(BOOL)renderDebugInfo;
-(NSString *)videoHomeSessionID;
-(unsigned long long)resultsStyle;
-(id)initWithTitle:(id)arg1 typeaheadSessionID:(id)arg2 candidateSessionID:(id)arg3 videoHomeSessionID:(id)arg4 queryString:(id)arg5 experienceType:(unsigned long long)arg6 resultsStyle:(unsigned long long)arg7 exactMatch:(BOOL)arg8 renderDebugInfo:(BOOL)arg9 scopedSearchScopeEntity:(id)arg10 ;
-(NSString *)title;
-(NSString *)queryString;
@end
