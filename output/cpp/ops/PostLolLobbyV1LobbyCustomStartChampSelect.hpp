#pragma once
#incldue "../client.hpp"
#include "LolLobbyLobbyCustomChampSelectStartResponse.hpp"
namespace leagueapi {
  LolLobbyLobbyCustomChampSelectStartResponse_t PostLolLobbyV1LobbyCustomStartChampSelect (const ClientInfo& info)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    const std::string body ="";
    const std::string path = "/lol-lobby/v1/lobby/custom/start-champ-select";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    if(auto it = res->header.find("content-type"); it !=res->header.end() && it->second == "application/json")
      return nlohmann::json(res->content.string());
    return res->content.string();
  }
}
