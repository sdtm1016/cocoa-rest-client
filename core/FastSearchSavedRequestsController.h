//
//  FastSearchSavedRequestsController.h
//  CocoaRestClient
//
//  Created by Mike Mattozzi on 12/29/16.
//
//

#import <Cocoa/Cocoa.h>

@interface FastSearchSavedRequestsController : NSWindowController <NSTableViewDelegate, NSTableViewDataSource> {
    NSMutableArray *requests;
    NSArray *baseRequests;
}

@property (weak) IBOutlet NSTableView *fastSearchRequestsTableView;
@property (weak) IBOutlet NSTextField *fastSearchRequestsTextField;
@property (weak) IBOutlet NSPanel *fastSearchRequestsPanel;
@property (weak) NSWindow *parent;
@property (strong) id selectedRequest;
@property (weak) IBOutlet NSScrollView *requestScrollView;

- (void) setupWindow:(NSArray *)requests;
- (void) sendDeleteKey;
- (IBAction) doubleClickOnTable:(id)sender;

@end
