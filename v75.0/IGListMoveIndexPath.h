/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:01:03 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSIndexPath;

@interface IGListMoveIndexPath : NSObject {

	NSIndexPath* _from;
	NSIndexPath* _to;

}

@property (nonatomic,readonly) NSIndexPath * from;              //@synthesize from=_from - In the implementation block
@property (nonatomic,readonly) NSIndexPath * to;                //@synthesize to=_to - In the implementation block
-(id)initWithFrom:(id)arg1 to:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(long long)compare:(id)arg1 ;
-(NSIndexPath *)to;
-(NSIndexPath *)from;
@end
