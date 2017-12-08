#pragma once
#incldue "../client.hpp"
#include "TencentQTNotification.hpp"
namespace leagueapi {
  nlohmann::json PostLolTencentQtV1UiStatesByFeature (const ClientInfo& info,
    const std::string& feature,
    const TencentQTNotification_t& state)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(state).dump();
    const std::string path = "/lol-tencent-qt/v1/ui-states/"+UrlCode::encode(to_string(feature))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
