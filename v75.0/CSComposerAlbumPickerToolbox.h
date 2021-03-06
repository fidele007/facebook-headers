/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:39 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CSComposerAlbumPickerToolboxExport.h>
#import <Facebook/CSCollectionComponentToolbox.h>
#import <Facebook/CSGraphQLConnectionSectionToolbox.h>

@protocol CSFBImageDownloaderExport, CSFBFontFoundryExport, CSTraitCollectionExport;
@class FBUserSession, NSString, FBSectionComponentToolbox, NSDictionary;

@interface CSComposerAlbumPickerToolbox : NSObject <CSComposerAlbumPickerToolboxExport, CSCollectionComponentToolbox, CSGraphQLConnectionSectionToolbox> {

	id<CSFBImageDownloaderExport> _imageDownloader;
	id<CSFBFontFoundryExport> _fontFoundry;
	FBUserSession* _session;
	NSString* _analyticsModule;
	id<CSTraitCollectionExport> _traitCollection;
	FBSectionComponentToolbox* _sectionComponentToolbox;
	NSDictionary* _fieldSetMap;

}

@property (nonatomic,readonly) id<CSFBImageDownloaderExport> imageDownloader;                    //@synthesize imageDownloader=_imageDownloader - In the implementation block
@property (nonatomic,readonly) id<CSFBFontFoundryExport> fontFoundry;                            //@synthesize fontFoundry=_fontFoundry - In the implementation block
@property (nonatomic,readonly) id<CSTraitCollectionExport> traitCollection;                      //@synthesize traitCollection=_traitCollection - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) FBUserSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) NSString * analyticsModule;                                  //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) FBSectionComponentToolbox * sectionComponentToolbox;              //@synthesize sectionComponentToolbox=_sectionComponentToolbox - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * fieldSetMap;                                  //@synthesize fieldSetMap=_fieldSetMap - In the implementation block
-(id<CSFBImageDownloaderExport>)imageDownloader;
-(NSString *)analyticsModule;
-(FBSectionComponentToolbox *)sectionComponentToolbox;
-(id<CSFBFontFoundryExport>)fontFoundry;
-(NSDictionary *)fieldSetMap;
-(id<CSTraitCollectionExport>)traitCollection;
-(id)initWithContext:(id)arg1 ;
-(FBUserSession *)session;
@end

