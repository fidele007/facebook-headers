/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:43 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/SRSingleViewFragmentController.h>
#import <Facebook/FBMLPickerFolderSectionEntryCellResponder.h>

@protocol FBMLPickerFolderSectionEntryFragmentDelegate;
@class NSString, SYNFolderThumb, FBImageDownloader;

@interface FBMLPickerFolderSectionEntryFragment : SRSingleViewFragmentController <FBMLPickerFolderSectionEntryCellResponder> {

	NSString* _sessionUserUUID;
	SYNFolderThumb* _folderThumb;
	FBImageDownloader* _imageDownloader;
	BOOL _picked;
	id<FBMLPickerFolderSectionEntryFragmentDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMLPickerFolderSectionEntryFragmentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL picked;                                                                   //@synthesize picked=_picked - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)folderThumb;
-(id)initWithFolderThumb:(id)arg1 sessionUserUUID:(id)arg2 imageDownloader:(id)arg3 ;
-(Class)classOfSingleCell;
-(double)heightOfSingleCell;
-(void)configureSingleCell:(id)arg1 ;
-(void)didTapFolderPickerCell:(id)arg1 ;
-(void)setDelegate:(id<FBMLPickerFolderSectionEntryFragmentDelegate>)arg1 ;
-(id<FBMLPickerFolderSectionEntryFragmentDelegate>)delegate;
-(void)setPicked:(BOOL)arg1 ;
-(BOOL)picked;
@end

