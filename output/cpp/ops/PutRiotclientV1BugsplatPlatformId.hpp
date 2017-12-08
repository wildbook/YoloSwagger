#pragma once
#incldue "../client.hpp"
#include ".hpp"
namespace leagueapi {
  //Tags the bugsplat with a platform id so it can be filtered more easily.
  void PutRiotclientV1BugsplatPlatformId (const ClientInfo& info,
    //The platform id that should be reported to bugsplat.
    const std::string& platformId)
  {
    using std::to_string;
    Headers headers = {{"Authorization", auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(platformId).dump();
    const std::string path = "/riotclient/v1/bugsplat/platform-id";
    HttpsClient client(info.host, false);
    auto res = client.request("put", path, body, headers);
    if(res->status_code != 406)
      throw OpError(res->content.string());
    return;  }
}
