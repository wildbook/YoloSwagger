#pragma once
#include "../client.hpp"
#include "LolBannersBannerFlag.hpp"
namespace leagueapi {
  LolBannersBannerFlag_t GetLolBannersV1CurrentSummonerFlagsEquipped (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-banners/v1/current-summoner/flags/equipped";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
