/*
* This header is generated by classdump-dyld 1.0
* on Sunday, December 25, 2016 at 12:00:42 AM Central European Standard Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/AA3BC77C-8F98-4654-B3F4-E47B12803336/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBVideoFilmstripViewDelegate <NSObject>
@optional
-(void)filmStripViewDidScroll:(id)arg1;
-(void)filmStripViewWillBeginDragging:(id)arg1;
-(void)filmStripViewDidEndDecelerating:(id)arg1;
-(void)filmStripViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
-(void)filmStripViewDidBeginZooming:(id)arg1;
-(void)filmStripViewDidEndZooming:(id)arg1;
-(BOOL)filmStripView:(id)arg1 shouldBeginScrubbingAtTime:(SCD_Struct_FB100)arg2;
-(void)filmStripView:(id)arg1 didBeginScrubbingAtTime:(SCD_Struct_FB100)arg2;
-(void)filmStripView:(id)arg1 didScrubAtTime:(SCD_Struct_FB100)arg2;
-(void)filmStripViewDidEndScrubbing:(id)arg1;
-(void)filmStripViewWillBeginDecelerating:(id)arg1;

@end

