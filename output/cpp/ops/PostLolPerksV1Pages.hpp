#pragma once
#incldue "../client.hpp"
#include "LolPerksPerkPageResource.hpp"
namespace leagueapi {
  LolPerksPerkPageResource_t PostLolPerksV1Pages (const ClientInfo& info,
    const LolPerksPerkPageResource_t& page)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(page).dump();
    const std::string path = "/lol-perks/v1/pages";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}