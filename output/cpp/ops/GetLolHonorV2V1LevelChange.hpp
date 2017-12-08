#pragma once
#incldue "../client.hpp"
#include "LolHonorV2VendedHonorChange.hpp"
namespace leagueapi {
  LolHonorV2VendedHonorChange_t GetLolHonorV2V1LevelChange (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-honor-v2/v1/level-change";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}