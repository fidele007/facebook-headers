/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:36 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FBPageHPPHScrollComponentState : NSObject {

	NSArray* _edges;
	NSArray* _blacklistedPageIDs;

}

@property (nonatomic,copy) NSArray * edges;                           //@synthesize edges=_edges - In the implementation block
@property (nonatomic,copy) NSArray * blacklistedPageIDs;              //@synthesize blacklistedPageIDs=_blacklistedPageIDs - In the implementation block
-(NSArray *)blacklistedPageIDs;
-(id)updatedStateWithEdges:(id)arg1 blacklistedPageIDs:(id)arg2 ;
-(void)setBlacklistedPageIDs:(NSArray *)arg1 ;
-(void)setEdges:(NSArray *)arg1 ;
-(NSArray *)edges;
@end

