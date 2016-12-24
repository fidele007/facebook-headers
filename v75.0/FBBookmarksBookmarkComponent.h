/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>

@class FBBookmarksListKitToolbox, FBMemBookmark, FBBookmarksDownloaderSection, NSIndexPath;

@interface FBBookmarksBookmarkComponent : CKCompositeComponent {

	FBBookmarksListKitToolbox* _toolbox;
	FBMemBookmark* _bookmark;
	FBBookmarksDownloaderSection* _section;
	NSIndexPath* _indexPath;

}

@property (nonatomic,readonly) FBBookmarksListKitToolbox * toolbox;                 //@synthesize toolbox=_toolbox - In the implementation block
@property (nonatomic,readonly) FBMemBookmark * bookmark;                            //@synthesize bookmark=_bookmark - In the implementation block
@property (nonatomic,readonly) FBBookmarksDownloaderSection * section;              //@synthesize section=_section - In the implementation block
@property (nonatomic,readonly) NSIndexPath * indexPath;                             //@synthesize indexPath=_indexPath - In the implementation block
+(id)newWithBookmark:(id)arg1 section:(id)arg2 sectionIsEditing:(BOOL)arg3 sectionTapHandler:(id)arg4 indexPath:(id)arg5 toolbox:(id)arg6 ;
-(FBBookmarksListKitToolbox *)toolbox;
-(FBBookmarksDownloaderSection *)section;
-(NSIndexPath *)indexPath;
-(FBMemBookmark *)bookmark;
@end

