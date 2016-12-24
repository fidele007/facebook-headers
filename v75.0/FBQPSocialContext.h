/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:49 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBQPEntity.h>

@class NSArray, NSString;

@interface FBQPSocialContext : FBQPEntity {

	NSArray* _friendIDs;
	NSString* _text;

}

@property (nonatomic,copy) NSArray * friendIDs;              //@synthesize friendIDs=_friendIDs - In the implementation block
@property (nonatomic,copy) NSString * text;                  //@synthesize text=_text - In the implementation block
-(void)parseParameters:(id)arg1 ;
-(NSArray *)friendIDs;
-(id)_parseFriendIDs:(id)arg1 ;
-(void)setFriendIDs:(NSArray *)arg1 ;
-(BOOL)isValid;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
@end

