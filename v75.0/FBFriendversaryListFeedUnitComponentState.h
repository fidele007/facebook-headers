/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBFriendversaryListFeedUnitComponentState : FBValueObject <NSCopying> {

	BOOL _loading;
	NSArray* _extraRows;

}

@property (nonatomic,readonly) BOOL loading;                          //@synthesize loading=_loading - In the implementation block
@property (nonatomic,copy,readonly) NSArray * extraRows;              //@synthesize extraRows=_extraRows - In the implementation block
-(id)initWithLoading:(BOOL)arg1 extraRows:(id)arg2 ;
-(NSArray *)extraRows;
-(BOOL)loading;
@end

