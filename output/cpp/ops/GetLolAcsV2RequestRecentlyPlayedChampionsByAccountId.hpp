#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void GetLolAcsV2RequestRecentlyPlayedChampionsByAccountId (const ClientInfo& info,
    const uint64_t_t& accountId,
    const bool_t& force)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    std::string path = "/lol-acs/v2/request-recently-played-champions/"+UrlCode::encode(to_string(accountId))+"?force=" + UrlCode::encode(to_string(force));
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
