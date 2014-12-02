//
//  MLChatCell.h
//  Monal
//
//  Created by Anurodh Pokharel on 8/20/13.
//
//

#import <UIKit/UIKit.h>

@interface MLChatCell : UITableViewCell
{
    UIImageView* _bubbleImage;
}

#define kNameLabelHeight 10.0

@property (nonatomic, strong) NSString* time;
@property (nonatomic, assign) BOOL outBound;
@property (nonatomic, assign) BOOL MUC; 

@property (nonatomic, assign) BOOL showName;
@property (nonatomic, strong) UILabel* name;
@property (nonatomic, strong) UILabel* date;
@property (nonatomic, strong) NSString* link;

@property (nonatomic, assign) BOOL delivered;

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier andMuc:(BOOL) isMUC;
+(CGFloat) heightForText:(NSString*) text inWidth:(CGFloat) width;

-(void) openlink: (id) sender;

@end
