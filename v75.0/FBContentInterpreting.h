/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSDictionary;


@protocol FBContentInterpreting <NSObject>
@property (nonatomic,copy) NSDictionary * httpHeaders; 
@required
-(id)interpret:(id)arg1 responseProcessor:(id)arg2 error:(id*)arg3;
-(NSDictionary *)httpHeaders;
-(void)setHttpHeaders:(id)arg1;

@end

