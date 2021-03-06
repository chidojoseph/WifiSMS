/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class NSMutableDictionary, NSArray, NSString, WAKView, WebPluginController, WebDataSource, NSTimer;



@interface WebHTMLViewPrivate : NSObject 
{
    BOOL closed;
    BOOL needsLayout;
    BOOL needsToApplyStyles;
    BOOL ignoringMouseDraggedEvents;
    BOOL printing;
    BOOL avoidingPrintOrphan;
    id savedSubviews;
    BOOL subviewsSetAside;
    WAKView *layerHostingView;
    struct __GSEvent { } *mouseDownEvent;
    BOOL handlingMouseDownEvent;
    struct __GSEvent { } *keyDownEvent;
    struct CGSize { 
        float width; 
        float height; 
    } lastLayoutSize;
    struct CGPoint { 
        float x; 
        float y; 
    } lastScrollPosition;
    WebPluginController *pluginController;
    NSString *toolTip;
    id trackingRectOwner;
    void *trackingRectUserData;
    NSTimer *autoscrollTimer;
    struct __GSEvent { } *autoscrollTriggerEvent;
    NSArray *pageRects;
    NSMutableDictionary *highlighters;
    BOOL transparentBackground;
    struct WebHTMLViewInterpretKeyEventsParameters { struct KeyboardEvent {} *x1; BOOL x2; BOOL x3; BOOL x4; } *interpretKeyEventsParameters;
    BOOL receivedNOOP;
    WebDataSource *dataSource;
    SEL selectorForDoCommandBySelector;
}

+ (void)initialize;

- (void)dealloc;
- (void)finalize;
- (void)clear;

@end
