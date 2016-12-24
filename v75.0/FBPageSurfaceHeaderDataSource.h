/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:32 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBAbstractTimelineHeaderDataSource.h>
#import <Facebook/FBTimelineCoverPhotoEditableHeaderDataSource.h>

@protocol FBTableViewMutating;
@class FBMemPage, FBTimelineHeaderBottomShadowViewCell, FBScenePath, FBUserSession, FBTimelineTemporaryCoverPhoto, FBPageSurfaceHeaderViewCell, NSString;

@interface FBPageSurfaceHeaderDataSource : NSObject <FBAbstractTimelineHeaderDataSource, FBTimelineCoverPhotoEditableHeaderDataSource> {

	FBMemPage* _page;
	FBTimelineHeaderBottomShadowViewCell* _bottomShadowViewCell;
	FBScenePath* _scenePath;
	FBUserSession* _session;
	BOOL _shouldHideProfileAndTitle;
	BOOL _isCoverEditMode;
	FBTimelineTemporaryCoverPhoto* _temporaryCoverPhoto;
	id<FBTableViewMutating> _tableViewMutator;
	FBPageSurfaceHeaderViewCell* _headerCell;
	NSString* _analyticsUUID;

}

@property (nonatomic,copy) NSString * analyticsUUID;                                           //@synthesize analyticsUUID=_analyticsUUID - In the implementation block
@property (nonatomic,retain) FBPageSurfaceHeaderViewCell * headerCell;                         //@synthesize headerCell=_headerCell - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) id<FBTableViewMutating> tableViewMutator;                         //@synthesize tableViewMutator=_tableViewMutator - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (nonatomic,retain) FBTimelineTemporaryCoverPhoto * temporaryCoverPhoto;              //@synthesize temporaryCoverPhoto=_temporaryCoverPhoto - In the implementation block
@property (assign,nonatomic) BOOL isCoverEditMode;                                             //@synthesize isCoverEditMode=_isCoverEditMode - In the implementation block
+(id)sectionID;
-(void)setAnalyticsUUID:(NSString *)arg1 ;
-(NSString *)analyticsUUID;
-(void)setTableViewMutator:(id<FBTableViewMutating>)arg1 ;
-(void)reloadRowHeights;
-(id<FBTableViewMutating>)tableViewMutator;
-(void)setTemporaryCoverPhoto:(FBTimelineTemporaryCoverPhoto *)arg1 ;
-(void)setIsCoverEditMode:(BOOL)arg1 ;
-(CGPoint)temporaryCoverFocus;
-(void)setTemporaryCoverFocus:(CGPoint)arg1 ;
-(FBTimelineTemporaryCoverPhoto *)temporaryCoverPhoto;
-(BOOL)isCoverEditMode;
-(id)_tableView:(id)arg1 headerCellForRowAtIndexPath:(id)arg2 ;
-(id)initWithTarget:(id)arg1 session:(id)arg2 scenePath:(id)arg3 analyticsUUID:(id)arg4 ;
-(void)setShouldHideProfileAndTitle:(BOOL)arg1 ;
-(id)_tableView:(id)arg1 headerBottomShadowCellForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)setHeaderCell:(FBPageSurfaceHeaderViewCell *)arg1 ;
-(FBPageSurfaceHeaderViewCell *)headerCell;
@end

