/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class NSString, UIModalView;



@interface PSAlert : NSObject <UIModalViewDelegate>
{
    id _delegate;
    id _userInfo;
    UIModalView *_sheet;
    NSString *_body;
    NSString *_title;
    NSString *_defaultButton;
    NSString *_alternateButton;
    NSInteger _buttonClicked;
    BOOL _displayed;
}

+ (id)alertWithBodyText:(id)arg1 defaultButton:(id)arg2 alternateButton:(id)arg3;
+ (void)displayAlertWithBodyText:(id)arg1 defaultButton:(id)arg2 alternateButton:(id)arg3 delegate:(id)arg4 userInfo:(id)arg5;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (void)setBodyText:(id)arg1;
- (id)bodyText;
- (void)setTitle:(id)arg1;
- (id)title;
- (void)setDefaultButton:(id)arg1;
- (id)defaultButton;
- (void)setAlternateButton:(id)arg1;
- (id)alternateButton;
- (id)alertSheet;
- (void)display;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;
- (void)dismiss;
- (void)alertSheet:(id)arg1 buttonClicked:(NSInteger)arg2;

@end
