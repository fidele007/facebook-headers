/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSectionedDataSourceWriting, FBProfileSectionControllerDelegate;
@class FBProfileSectionsAggregator, FBUserSession;

@interface FBProfileSectionControllerManager : NSObject {

	id<FBSectionedDataSourceWriting> _writeInterface;
	FBProfileSectionsAggregator* _sectionsAggregator;
	BOOL _isLoadingSectionVisible;
	BOOL _isViewingSelf;
	id<FBProfileSectionControllerDelegate> _sectionControllerDelegate;
	FBUserSession* _session;

}
-(void)removeControllersForTimelineSectionID:(id)arg1 ;
-(id)initWithWriteInterface:(id)arg1 sectionsAggregator:(id)arg2 sectionControllerDelegate:(id)arg3 session:(id)arg4 isViewingSelf:(BOOL)arg5 ;
-(id)storiesControllerForSectionID:(id)arg1 ;
-(void)setPadding:(double)arg1 forSectionID:(id)arg2 ;
-(void)addLoadingSection;
-(void)addControllersForTimelineSection:(id)arg1 hasHeader:(BOOL)arg2 loadingType:(unsigned long long)arg3 ;
-(void)removeLoadingSection;
-(void)removeAllControllers;
-(id)footerControllerForSectionID:(id)arg1 ;
-(id)yoloControllerForSectionID:(id)arg1 ;
-(void)invalidate;
@end

