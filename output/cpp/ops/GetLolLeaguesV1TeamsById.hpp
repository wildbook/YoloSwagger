#pragma once
#incldue "../client.hpp"
#include "LolLeaguesLeagueTeam.hpp"
namespace leagueapi {
  LolLeaguesLeagueTeam_t GetLolLeaguesV1TeamsById (const ClientInfo& info,
    const std::string& id)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-leagues/v1/teams/"+UrlCode::encode(to_string(id))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
