#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolLobbyV2PartiesOverridesEnabled (const ClientInfo& info,
    const bool& enabled)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby/v2/parties/overrides/Enabled";
    Headers query;
      query["enabled"] = enabled;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
