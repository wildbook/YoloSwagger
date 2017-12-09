#pragma once
#include "../client.hpp"
#include "TencentQTNotification.hpp"
namespace leagueapi {
  TencentQTNotification_t GetLolTencentQtV1UiStatesByFeature (const ClientInfo& info,
    const std::string& feature)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-tencent-qt/v1/ui-states/"+UrlCode::encode(to_string(feature))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
