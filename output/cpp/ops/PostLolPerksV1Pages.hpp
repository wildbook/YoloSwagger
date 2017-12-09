#pragma once
#include "../client.hpp"
#include "LolPerksPerkPageResource.hpp"
namespace leagueapi {
  LolPerksPerkPageResource_t PostLolPerksV1Pages (const ClientInfo& info,
    const LolPerksPerkPageResource_t& page)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(page).dump();
    std::string path = "/lol-perks/v1/pages";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
      return nlohmann::json(res->content.string());
  }
}
