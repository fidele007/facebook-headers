/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface _FBGraphErrorParser : NSObject {

	long long _httpStatusCode;

}

@property (assign,nonatomic) long long httpStatusCode;              //@synthesize httpStatusCode=_httpStatusCode - In the implementation block
-(id)parseErrorFromJSONObject:(id)arg1 ;
-(BOOL)_isGraphAPIError:(id)arg1 errorDictionary:(inout id*)arg2 ;
-(BOOL)_isGraphQLError:(id)arg1 errorDictionary:(id*)arg2 ;
-(id)_parseGraphQLError:(id)arg1 ;
-(id)_parseGraphAPIError:(id)arg1 ;
-(BOOL)_isBadBatchError:(id)arg1 errorDictionary:(id*)arg2 ;
-(id)_parseBadBatchError:(id)arg1 ;
-(BOOL)_isRestAPIError:(id)arg1 errorDictionary:(id*)arg2 ;
-(id)_parseRestAPIError:(id)arg1 ;
-(void)setHttpStatusCode:(long long)arg1 ;
-(long long)httpStatusCode;
@end

