#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json PutPatcherV1SelfUpdateRestart (const ClientInfo& info,
    const bool& forceRestartOnSelfUpdate)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/patcher/v1/self-update-restart?forceRestartOnSelfUpdate=" + UrlCode::encode(to_string(forceRestartOnSelfUpdate));
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
