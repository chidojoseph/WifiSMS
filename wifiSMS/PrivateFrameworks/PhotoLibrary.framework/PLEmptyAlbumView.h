/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class UIImageView, MLPhotoAlbum, UITextLabel;



@interface PLEmptyAlbumView : UIView 
{
    UIImageView *_icon;
    UITextLabel *_title;
    UITextLabel *_message;
    MLPhotoAlbum *_album;
}


- (id)_emptyRollImageForAlbum:(id)arg1;
- (id)_messageForAlbum:(id)arg1;
- (id)_titleForAlbum:(id)arg1;
- (id)_createLabelWithText:(id)arg1 font:(id)arg2 bottom:(float)arg3;
- (id)_createTextViewWithText:(id)arg1 bottom:(float)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (void)setAlbum:(id)arg1;
- (void)layoutSubviews;

@end
