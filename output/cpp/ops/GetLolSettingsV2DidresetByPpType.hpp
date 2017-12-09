#pragma once
#include "../client.hpp"
namespace leagueapi {
  bool GetLolSettingsV2DidresetByPpType (const ClientInfo& info,
    const std::string& ppType)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-settings/v2/didreset/"+UrlCode::encode(to_string(ppType))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
