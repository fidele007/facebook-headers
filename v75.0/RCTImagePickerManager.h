/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:59 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <Facebook/RCTBridgeModule.h>

@class NSMutableArray, RCTBridge, NSString;

@interface RCTImagePickerManager : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, RCTBridgeModule> {

	NSMutableArray* _pickers;
	NSMutableArray* _pickerCallbacks;
	NSMutableArray* _pickerCancelCallbacks;
	RCTBridge* _bridge;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge;                             //@synthesize bridge=_bridge - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(id)__rct_export__552;
+(id)__rct_export__773;
+(id)__rct_export__420;
+(id)__rct_export__481;
+(void)load;
-(NSObject*<OS_dispatch_queue>)methodQueue;
-(void)_presentPicker:(id)arg1 successCallback:(/*^block*/id)arg2 cancelCallback:(/*^block*/id)arg3 ;
-(void)_dismissPicker:(id)arg1 args:(id)arg2 ;
-(void)canRecordVideos:(/*^block*/id)arg1 ;
-(void)canUseCamera:(/*^block*/id)arg1 ;
-(void)openCameraDialog:(id)arg1 successCallback:(/*^block*/id)arg2 cancelCallback:(/*^block*/id)arg3 ;
-(void)openSelectDialog:(id)arg1 successCallback:(/*^block*/id)arg2 cancelCallback:(/*^block*/id)arg3 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(RCTBridge *)bridge;
@end

