/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:48 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBSearchSuggestionProtocol.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FBMemExternalUrl;

@interface FBSearchPulseLinkSuggestion : NSObject <FBSearchSuggestionProtocol, NSCopying> {

	BOOL _isNonCacheable;
	BOOL _isSelected;
	BOOL _showQueryFormationAffordance;
	float _bootstrapCost;
	unsigned long long _cacheType;
	NSString* _text;
	NSString* _semantic;
	unsigned long long _resultType;
	FBMemExternalUrl* _externalUrl;
	double _timestamp;
	NSString* _subtext;
	NSString* _boldSubtext;
	NSString* _tracking;
	unsigned long long _suggestionSource;

}

@property (nonatomic,copy,readonly) FBMemExternalUrl * externalUrl;              //@synthesize externalUrl=_externalUrl - In the implementation block
@property (assign,nonatomic) double timestamp;                                   //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,copy) NSString * subtext;                                   //@synthesize subtext=_subtext - In the implementation block
@property (nonatomic,copy,readonly) NSString * boldSubtext;                      //@synthesize boldSubtext=_boldSubtext - In the implementation block
@property (nonatomic,copy) NSString * tracking;                                  //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,readonly) unsigned long long suggestionSource;              //@synthesize suggestionSource=_suggestionSource - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long cacheType;                       //@synthesize cacheType=_cacheType - In the implementation block
@property (assign,nonatomic) BOOL isNonCacheable;                                //@synthesize isNonCacheable=_isNonCacheable - In the implementation block
@property (nonatomic,copy,readonly) NSString * text;                             //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSString * semantic;                         //@synthesize semantic=_semantic - In the implementation block
@property (nonatomic,readonly) unsigned long long resultType;                    //@synthesize resultType=_resultType - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                                    //@synthesize isSelected=_isSelected - In the implementation block
@property (assign,nonatomic) BOOL showQueryFormationAffordance;                  //@synthesize showQueryFormationAffordance=_showQueryFormationAffordance - In the implementation block
@property (assign,nonatomic) float bootstrapCost;                                //@synthesize bootstrapCost=_bootstrapCost - In the implementation block
@property (nonatomic,copy) NSString * suggestionServerSource; 
-(id)initWithExternalUrl:(id)arg1 semantic:(id)arg2 boldSubtext:(id)arg3 suggestionSource:(unsigned long long)arg4 ;
-(id)suggestionTypeForLogging;
-(BOOL)isNonCacheable;
-(void)setIsNonCacheable:(BOOL)arg1 ;
-(BOOL)showQueryFormationAffordance;
-(void)setShowQueryFormationAffordance:(BOOL)arg1 ;
-(float)bootstrapCost;
-(void)setBootstrapCost:(float)arg1 ;
-(void)setSubtext:(NSString *)arg1 ;
-(FBMemExternalUrl *)externalUrl;
-(unsigned long long)suggestionSource;
-(id)initWithGraphQLID:(id)arg1 title:(id)arg2 boldSubtext:(id)arg3 source:(id)arg4 externalURLString:(id)arg5 creationTime:(id)arg6 shareCount:(id)arg7 suggestionSource:(unsigned long long)arg8 ;
-(NSString *)boldSubtext;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)text;
-(BOOL)isSelected;
-(void)setTracking:(NSString *)arg1 ;
-(void)setIsSelected:(BOOL)arg1 ;
-(void)setCacheType:(unsigned long long)arg1 ;
-(unsigned long long)cacheType;
-(NSString *)tracking;
-(NSString *)subtext;
-(unsigned long long)resultType;
-(NSString *)semantic;
@end

