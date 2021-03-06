/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:31 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBSectionComponentController.h>
#import <Facebook/FBProfileCurationTagsUpdateListener.h>
#import <Facebook/FBProfileCurationTagsTapListener.h>

@class NSString;

@interface FBProfileCurationTaggingsSectionComponentController : FBSectionComponentController <FBProfileCurationTagsUpdateListener, FBProfileCurationTagsTapListener>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tagsDidUpdateWithTags:(id)arg1 rootID:(id)arg2 ;
-(void)refreshTags;
-(void)didTapSeeMoreButton;
-(void)logCurationTagTapWithAfterTapSelectedState:(BOOL)arg1 pageID:(id)arg2 ;
-(void)_queryDiscoveryTagsWithFirstCount:(id)arg1 afterCurosr:(id)arg2 numberOfMoreLinesToShow:(unsigned long long)arg3 numberOfMoreTagsQueried:(unsigned long long)arg4 shouldShowOldTags:(BOOL)arg5 ;
-(void)_updateModelWithBucketContent:(id)arg1 numberOfMoreLinesToShow:(unsigned long long)arg2 numberOfMoreTagsQueried:(unsigned long long)arg3 shouldShowOldTags:(BOOL)arg4 ;
-(void)didFinishDownladMoreTags;
-(void)didLoad;
@end

