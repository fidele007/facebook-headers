/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:53 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface FBRichStoryLayoutDescription : NSObject <NSCopying> {

	NSMutableDictionary* _elementsByID;

}

@property (nonatomic,retain) NSMutableDictionary * elementsByID;              //@synthesize elementsByID=_elementsByID - In the implementation block
-(id)elementForID:(id)arg1 ;
-(void)addElementDescriptor:(id)arg1 ;
-(void)setElementsByID:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)elementsByID;
-(void)_enumerateElementsWithBlock:(/*^block*/id)arg1 ;
-(id)unionWithLayoutDescription:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

