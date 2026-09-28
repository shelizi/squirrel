//
//  Use this file to import your target's public headers that you would like to
//  expose to Swift.
//

#import <rime_api_stdbool.h>
#import <rime/key_table.h>
// Wisdom-Weasel：LLM 預測、中英混打與網頁版設定（mac/squirrel/WisdomBridge.h）。
// 放在最後：rime/key_table.h 已經以 stdbool 版本引用 rime_api.h，WisdomBridge.h 的引用不會再展開
#import "WisdomBridge.h"
