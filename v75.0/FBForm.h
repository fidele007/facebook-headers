/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:50 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSString;

@interface FBForm : NSObject {

	NSMutableArray* _sections;
	NSString* _title;

}

@property (nonatomic,copy) NSString * title;              //@synthesize title=_title - In the implementation block
-(id)elementForID:(long long)arg1 ;
-(long long)count;
-(id)init;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(id)sections;
-(id)result;
-(void)addSection:(id)arg1 ;
-(BOOL)hasChanges;
@end

