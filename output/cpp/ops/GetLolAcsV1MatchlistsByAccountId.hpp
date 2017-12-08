#pragma once
#incldue "../client.hpp"
namespace leagueapi {
  nlohmann::json_t GetLolAcsV1MatchlistsByAccountId (const ClientInfo& info,
    const uint64_t_t& accountId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-acs/v1/matchlists/"+UrlCode::encode(to_string(accountId))+"";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
