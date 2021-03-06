/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:55 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBImageProcessingSubPipeDelegate.h>

@class NSString;

@interface FBImageProcessingRequestUniversalContextHandle : NSObject <FBImageProcessingSubPipeDelegate> {

	BOOL _pruneOldestFirst;
	BOOL _prioritizeNewRequestsWhenSorting;

}

@property (assign,nonatomic) BOOL pruneOldestFirst;                              //@synthesize pruneOldestFirst=_pruneOldestFirst - In the implementation block
@property (assign,nonatomic) BOOL prioritizeNewRequestsWhenSorting;              //@synthesize prioritizeNewRequestsWhenSorting=_prioritizeNewRequestsWhenSorting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setPrioritizeNewRequestsWhenSorting:(BOOL)arg1 ;
-(void)imageProcessingSubPipe:(id)arg1 willProcessRequests:(id)arg2 needSort:(BOOL)arg3 ;
-(void)imageProcessingSubPipe:(id)arg1 willPruneOrderedProcessRequests:(id)arg2 ;
-(BOOL)pruneOldestFirst;
-(void)setPruneOldestFirst:(BOOL)arg1 ;
-(BOOL)prioritizeNewRequestsWhenSorting;
@end

