#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void DeleteLolGameClientChatV1IgnoredSummoners (const ClientInfo& info,
    const std::string& summonerName)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-game-client-chat/v1/ignored-summoners";
    Headers query;
      query["summonerName"] = summonerName;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("delete", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
