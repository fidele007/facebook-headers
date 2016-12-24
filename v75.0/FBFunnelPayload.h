/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, NSDictionary, NSArray;

@interface FBFunnelPayload : NSObject {

	NSMutableDictionary* _payload;
	NSMutableArray* _keysWithNilValue;

}

@property (nonatomic,copy,readonly) NSDictionary * payload; 
@property (nonatomic,copy,readonly) NSArray * keysWithNilValue;              //@synthesize keysWithNilValue=_keysWithNilValue - In the implementation block
-(void)addKey:(id)arg1 withStringValue:(id)arg2 ;
-(void)addKey:(id)arg1 withNumberValue:(id)arg2 ;
-(void)deserialization:(id)arg1 ;
-(void)addKey:(id)arg1 withBooleanValue:(BOOL)arg2 ;
-(void)addKey:(id)arg1 withArrayValue:(id)arg2 ;
-(NSArray *)keysWithNilValue;
-(id)init;
-(NSDictionary *)payload;
@end

