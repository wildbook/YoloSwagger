#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  bool GetLolSummonerV1CheckNameAvailabilityByName (const ClientInfo& info,
    const std::string& name)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-summoner/v1/check-name-availability/"+UrlCode::encode(to_string(name))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
