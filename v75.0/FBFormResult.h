/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSDictionary;

@interface FBFormResult : NSObject {

	NSMutableDictionary* _mutableData;

}

@property (nonatomic,copy) NSMutableDictionary * mutableData;              //@synthesize mutableData=_mutableData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * data; 
-(id)valueForElementID:(long long)arg1 ;
-(BOOL)containsElementID:(long long)arg1 ;
-(void)addFormElementData:(id)arg1 elementID:(long long)arg2 ;
-(void)setMutableData:(NSMutableDictionary *)arg1 ;
-(id)init;
-(NSDictionary *)data;
-(NSMutableDictionary *)mutableData;
@end

