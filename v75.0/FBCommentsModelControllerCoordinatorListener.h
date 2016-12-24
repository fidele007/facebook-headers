/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:46 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBCommentsModelControllerCoordinatorListener <NSObject>
@required
-(void)modelControllerCoordinator:(id)arg1 didInsertHeadComments:(id)arg2 atIndexes:(id)arg3;
-(void)modelControllerCoordinator:(id)arg1 didInsertTailComments:(id)arg2 atIndexes:(id)arg3;
-(void)modelControllerCoordinator:(id)arg1 didUpdateComments:(id)arg2 atIndexes:(id)arg3;
-(void)modelControllerCoordinator:(id)arg1 didRemoveComments:(id)arg2 atIndexes:(id)arg3;
-(void)modelControllerCoordinatorWillStartNeckLoading:(id)arg1;
-(void)modelControllerCoordinatorWillStartTailLoading:(id)arg1;
-(void)modelControllerCoordinatorWillStartHeadLoading:(id)arg1;
-(void)modelControllerCoordinatorDidFinishNeckLoading:(id)arg1;
-(void)modelControllerCoordinatorDidFinishTailLoading:(id)arg1;
-(void)modelControllerCoordinatorDidFinishHeadLoading:(id)arg1;
-(void)modelControllerCoordinator:(id)arg1 didEditComment:(id)arg2;
-(void)modelControllerCoordinator:(id)arg1 didFailToEditComment:(id)arg2 error:(id)arg3;
-(void)modelControllerCoordinator:(id)arg1 didPostComment:(id)arg2;
-(void)modelControllerCoordinator:(id)arg1 didDeleteComment:(id)arg2;
-(void)modelControllerCoordinator:(id)arg1 didFailToDeleteComment:(id)arg2 error:(id)arg3;
-(void)modelControllerCoordinator:(id)arg1 didHideComment:(id)arg2;
-(void)modelControllerCoordinator:(id)arg1 didFailToHideComment:(id)arg2 error:(id)arg3;
-(void)modelControllerCoordinator:(id)arg1 didUnhideComment:(id)arg2;
-(void)modelControllerCoordinator:(id)arg1 didFailToUnhideComment:(id)arg2 error:(id)arg3;

@end
