/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:52 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <Facebook/Facebook-Structs.h>
@class NSObject;

@interface FBGbdtClassifier : NSObject {

	unique_ptr<facebook::gbdtclassifier::GbdtClassifier, std::__1::default_delete<facebook::gbdtclassifier::GbdtClassifier> >* _gbdtClassifier;
	NSObject*<OS_dispatch_queue> _writingQueue;

}
-(id)classify:(id)arg1 ;
-(id)currentlyUsedModelId;
-(id)classifyCandidates:(id)arg1 ;
-(void)setModelParams:(id)arg1 ;
-(void)setServerFeatures:(id)arg1 ;
-(id)initWithStoreManagerFactory:(shared_ptr<facebook::mobile::xplat::compactdisk::StoreManagerFactory>*)arg1 andType:(id)arg2 ;
-(id)currentClassifierType;
-(id)currentCandidatesIds;
-(GbdtClassifier*)gbdtClassifierPointer;
-(void)setCandidates:(id)arg1 ;
@end

