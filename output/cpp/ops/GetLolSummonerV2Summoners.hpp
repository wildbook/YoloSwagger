#pragma once
#incldue "../client.hpp"
#include "LolSummonerSummoner.hpp"
namespace leagueapi {
  std::vector<LolSummonerSummoner_t> GetLolSummonerV2Summoners (const ClientInfo& info,
    const std::optional<std::string>& name = std::nullopt,
    const std::optional<std::vector<uint64_t>>& ids = std::nullopt)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-summoner/v2/summoners";
    bool first = true;
    if(name) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("name="+UrlCode::encode(to_string(*name)));
    }
    if(ids) {
      if(first) {
        first = false;
        path.append('?')
      } else {
        path.append('&');
      }      path.append("ids="+UrlCode::encode(to_string(*ids)));
    }
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
