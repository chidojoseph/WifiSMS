/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class GQDPath, GQDWPLayoutFrame;



@interface GQDShape : GQDGraphic <GQDNameMappable>
{
    GQDPath *mPath;
    GQDWPLayoutFrame *mLayoutFrame;
}

+ (const struct StateSpec { int (**x1)(); char *x2; NSInteger x3; NSInteger x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (id)layoutFrame;
- (BOOL)isBlank;
- (BOOL)isRectangularAndAxisAlignedToAngle:(float)arg1;
- (id)path;
- (struct CGPath { }*)createBezierPath;
- (id)initWithGraphic:(id)arg1 path:(id)arg2 geometry:(id)arg3;

@end
