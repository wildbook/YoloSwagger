#pragma once
#include "../client.hpp"
#include ".hpp"
namespace leagueapi {
  void PostLolStoreV1LastPage (const ClientInfo& info,
    const std::string& pageType)
  {
    using std::to_string;
    using leagueapi::to_string;
    Headers headers = {{"Authorization", info.auth}};
    headers["content-type"] = "application/json";
    const std::string body = json(pageType).dump();
    std::string path = "/lol-store/v1/lastPage";
    HttpsClient client(info.host, false);
    auto res = client.request("post", path, body, headers);
    if(res->status_code == 406)
      throw OpError(res->content.string());
    return;
  }
}
