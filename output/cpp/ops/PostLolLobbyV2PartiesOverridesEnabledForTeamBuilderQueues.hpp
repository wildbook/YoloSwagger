#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolLobbyV2PartiesOverridesEnabledForTeamBuilderQueues (const ClientInfo& info,
    const bool& enabledForTeambuilderQueues)
  {
    using std::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/lol-lobby/v2/parties/overrides/EnabledForTeamBuilderQueues";
    Headers query;
      query["enabledForTeambuilderQueues"] = enabledForTeambuilderQueues;
    if(query.size() > 0)
      path.append("?" + SimpleWeb::QueryString::create(query));
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
