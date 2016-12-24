/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:47 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKStatefulViewComponentController.h>

@class NSDictionary, FBListViewFlowLayoutDelegate, FBComponentCollectionViewDataSource, FBSectionComponentTracker, FBSectionComponentChangesetAdapter;

@interface FBBaseCollectionComponentController : CKStatefulViewComponentController {

	/*function pointer*/void* _previousSectionComponentProviderFunction;
	NSDictionary* _previousSectionComponentProviderFunctionData;
	FBListViewFlowLayoutDelegate* _flowLayoutDelegate;
	FBComponentCollectionViewDataSource* _dataSource;
	FBSectionComponentTracker* _sectionComponentTracker;
	FBSectionComponentChangesetAdapter* _changesetWriter;

}
+(id)newStatefulView:(id)arg1 ;
+(void)configureStatefulView:(id)arg1 forComponent:(id)arg2 ;
-(void)willRemount;
-(void)didAcquireStatefulView:(id)arg1 ;
-(void)willRelinquishStatefulView:(id)arg1 ;
-(id)baseCollectionComponent;
@end
