#pragma once
#include "../client.hpp"
#include "LolPerksPerkPageResource.hpp"
namespace leagueapi {
  nlohmann::json PutLolPerksV1PagesById (const ClientInfo& info,
    const int32_t& id,
    const LolPerksPerkPageResource_t& page)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(page).dump();
    std::string path = "/lol-perks/v1/pages/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
