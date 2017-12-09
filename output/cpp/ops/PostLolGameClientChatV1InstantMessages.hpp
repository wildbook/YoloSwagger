#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolGameClientChatV1InstantMessages (const ClientInfo& info,
    const std::string& summonerName,
    const std::string& message)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-game-client-chat/v1/instant-messages";
    Headers query;
      query["summonerName"] = summonerName;
      query["message"] = message;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
