/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:40 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBPopoverControllerDelegate.h>

@class FBPopoverActionSheet, FBMemGroupFileOrDoc, FBSectionComponentToolbox, CKComponent, NSString;

@interface FBGroupFileComponent : CKCompositeComponent <FBPopoverControllerDelegate> {

	FBPopoverActionSheet* _filePopoverActionSheet;
	FBMemGroupFileOrDoc* _file;
	FBSectionComponentToolbox* _context;
	CKComponent* _auxiliaryButton;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newGroupFileComponent:(id)arg1 context:(id)arg2 ;
-(void)_showPopover:(id)arg1 ;
-(id)_buildPopoverButtonItem:(id)arg1 tag:(long long)arg2 ;
-(void)_didSelectActionItem:(id)arg1 ;
-(id)_popoverMenuButtonItems;
-(void)_handleFileViewOption:(long long)arg1 ;
@end
