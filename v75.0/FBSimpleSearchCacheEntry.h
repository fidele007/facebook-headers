/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBSimpleSearchCacheEntry : NSObject {

	BOOL _allResultsLoaded;
	BOOL _isIndexAvailable;
	NSString* _queryString;
	NSArray* _suggestions;
	unsigned long long _state;

}

@property (nonatomic,copy,readonly) NSString * queryString;              //@synthesize queryString=_queryString - In the implementation block
@property (assign,nonatomic) BOOL allResultsLoaded;                      //@synthesize allResultsLoaded=_allResultsLoaded - In the implementation block
@property (copy) NSArray * suggestions;                                  //@synthesize suggestions=_suggestions - In the implementation block
@property (assign) unsigned long long state;                             //@synthesize state=_state - In the implementation block
@property (assign) BOOL isIndexAvailable;                                //@synthesize isIndexAvailable=_isIndexAvailable - In the implementation block
-(BOOL)allResultsLoaded;
-(void)setAllResultsLoaded:(BOOL)arg1 ;
-(BOOL)isIndexAvailable;
-(void)setIsIndexAvailable:(BOOL)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)queryString;
-(void)setSuggestions:(NSArray *)arg1 ;
-(NSArray *)suggestions;
-(id)initWithQueryString:(id)arg1 ;
@end

