#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t PostLolChampSelectLegacyV1BattleTrainingLaunch (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-champ-select-legacy/v1/battle-training/launch";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}