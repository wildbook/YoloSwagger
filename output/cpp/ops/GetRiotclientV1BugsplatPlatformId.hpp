#pragma once
#include "../client.hpp"
namespace leagueapi {
  //Get the bugsplat platform id.
  std::string GetRiotclientV1BugsplatPlatformId (const ClientInfo& info)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    const std::string body ="";
    std::string path = "/riotclient/v1/bugsplat/platform-id";
    HttpsClient client(info.host, false);
    auto res = client.request("get", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return nlohmann::json(res->content.string());
  }
}
